#include "task.h"
#include "day.h"
#include "calendar.h"
#include <QTableWidget>
#include <QTextStream>
#include <QColor>
#include <QColorDialog>
#include <QHeaderView>
#include <QMessageBox>
#include <QFileDialog>
calendar::calendar(QWidget* parent) : QTableWidget(parent)
{
    connect();
    parseDB();
    setTable();
    setCurrDay(QDate::currentDate(),true);
    //load("E:\\Qt\\Proj\\ppp\\save.txt");
}
calendar::~calendar()
{
    while(!tasklist.isEmpty())
        delete tasklist.takeFirst();
    while(!daylist.isEmpty())
        delete daylist.takeFirst();
}
void calendar::connect(QString s)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(s);
    if (!db.open())
        //QMessageBox::information(this, "OK", "open");
        QMessageBox::warning(this, "Error", "Error opening database!");
}
void calendar::parseDB()
{
    QSqlQuery *query = new QSqlQuery(db);
    if (!query->exec("SELECT * FROM tasks"))
        QMessageBox::warning(this, "Error", "ошибка чтения из БД!");
    int id, start,length;
    QString name, color;
    QDate date;
    while (query->next())
    {
        id = query->value(0).toInt();
        name = query->value(1).toString();
        start = query->value(2).toInt();
        length = query->value(3).toInt();
        QVariant t=query->value(4);
        QString x = t.toString();
        date=QDate::fromString(x,"dd.MM.yyyy");
        color = query->value(5).toString();
        tasklist.push_front(new Task(id, name, start, length, date, QColor(color)));
        Day  *found = findDay(date);
        found->setTask(tasklist.front());
    }
}
Day *calendar::findDay(QDate date) //creates day if doesn't exist
{
    Day* day = nullptr;
    for (auto& d : daylist)
    {
        if (d->getDate() == date)
        {
            day = d;
            break;
        }
    }

    if (day == nullptr)
    {
        day = new Day(date);
        daylist.push_front(day);
    }

    return day;
}
void calendar::setTname(QString n)
{
    t_taskname = n;
}
void calendar::setTstartH(int s)
{
    t_taskstart = s*2;
}
void calendar::setTstartM(int s)
{
    if (s==30) t_taskstart++;
}
void calendar::setTlengthH(int l)
{
    t_tasklength = l*2;
}
void calendar::setTlengthM(int l)
{
    if (l==30) t_tasklength++;
}
void calendar::setTdate(QDate d)
{
    t_taskdate = d;
}
void calendar::setTcolor(QColor s)
{
    t_taskcolor = s;
}
Task * calendar::findTaskByID(int id)
{
    Task* task = nullptr;
    for (auto& x : tasklist)
    {
        if (x->getID() == id)
        {
            task = x;
            break;
        }
    }
    return task;
}
int calendar::addToDB(QString name, int start, int length, QDate date, QColor color)
{
    QSqlQuery *query = new QSqlQuery(db);
    QString q;
    q="INSERT INTO tasks (name, start, length, date, color) VALUES ('%1', %2, %3, '%4', '%5')";
    q=q.arg(name).
        arg(start).
        arg(length).
        arg(date.toString("dd.MM.yyyy")).
        arg(color.name());
    query->prepare(q);
    if (!query->exec())
        QMessageBox::warning(this, "Error", "ошибка сохранения в БД!");
    return query->lastInsertId().toInt();
}
void calendar::updateDB(Task *t)
{
    QSqlQuery *query = new QSqlQuery(db);
    QString q;
    q="UPDATE tasks SET name= '%1', start= %2, length= %3, date= '%4', color= '%5' WHERE id= %6";
    q=q.arg(t->getName()).
        arg(t->getStart()).
        arg(t->getLength()).
        arg(t->getDate().toString("dd.MM.yyyy")).
        arg(t->getColor().name()).
        arg(t->getID());
    query->prepare(q);
    if (!query->exec())
        QMessageBox::warning(this, "Error", "ошибка сохранения в БД!");
}
void calendar::deleteFromBD(int ID)
{
    QSqlQuery *query = new QSqlQuery(db);
    QString q;
    q="DELETE FROM tasks WHERE id= %1";
    q=q.arg(ID);
    query->prepare(q);
    if (!query->exec())
        QMessageBox::warning(this, "Error", "ошибка удаления из БД!");
}
void calendar::clear()
{
    int n=QMessageBox::information(0,"Подтвердите действие","Очистить календарь?", "Да", "Нет", QString(), 1, 1 );
    if (n==0)
    {
        QSqlQuery *query = new QSqlQuery(db);
        QString q;
        q="DELETE FROM tasks";
        query->prepare(q);
        if (!query->exec())
            QMessageBox::warning(this, "Error", "ошибка удаления из БД!");
        tasklist.clear();
        daylist.clear();
        setCurrDay(QDate::currentDate(),true);
    }
}
Task * calendar::getCurrTask()
{
    return currTask;
}
void calendar::deleteTask()
{
    int ID = currTask->getID();
    deleteFromBD(ID);
    currDay->removeTask(currTask);
    tasklist.removeOne(currTask);
    currTask = nullptr;
    calendar::draw();
}
int calendar::editTask(Task *t)
{
    if (ParList[0])
        t->setName(t_taskname);
    if (ParList[1]&& (t->getDate() != t_taskdate))
    {
        Day *found  = findDay(t->getDate());
        found->removeTask(t);
        found = findDay(t_taskdate);
        found->setTask(t);
        setCurrDay(found);
        t->setDate(t_taskdate);
    }
    if (ParList[2] && (t->getStart() != t_taskstart))
    {
        Day *found  = findDay(t->getDate());
        found->removeTask(t);
        t->setStart(t_taskstart);
        found->setTask(t);
    }
    if (ParList[3] && (t->getLength() != t_tasklength))
    {
        if (t_taskstart+t_tasklength>48)
            t_tasklength=48-t_taskstart;
        if (t_tasklength==0)
        {
            int n = QMessageBox::information(0,"Ошибка!","Нельзя создать задание нулевой длины!", "ОК", QString(), QString(), 0, 0 );
            return -1;
        }
        else
        {
        Day *found  = findDay(t->getDate());
        found->removeTask(t);
        t->setLength(t_tasklength);
        found->setTask(t);
        }
    }
    if (ParList[4])
        t->setColor(t_taskcolor);
    updateDB(t);
    calendar::draw();
    return 0;
}
int calendar::addTask(bool doDraw)
{
    if (t_taskcolor == "000000")
        t_taskcolor = "FDFDFD";
    if (t_taskstart+t_tasklength>48)
        t_tasklength=48-t_taskstart;
    if (t_tasklength==0)
    {
        QMessageBox::information(0,"Ошибка!","Нельзя создать задание нулевой длины!", "ОК", QString(), QString(), 0, 0 );
        return -1;
    }
    else
    {
        int id = addToDB(t_taskname, t_taskstart, t_tasklength, t_taskdate, t_taskcolor);
        if (id!=0)
        {
            tasklist.push_front(new Task(id, t_taskname, t_taskstart, t_tasklength, t_taskdate, t_taskcolor));
            Day  *found = findDay(t_taskdate);
            currDay = found;
            found->setTask(tasklist.front());
            if (doDraw)
                calendar::draw();
        }
        return 0;
    }
}
void calendar::setCurrDay(QDate date,bool doDraw)
{
    currDay = findDay(date);
    if (doDraw)
        calendar::draw();
}
void calendar::setCurrDay(Day *day,bool doDraw)
{
    currDay = day;
    if (doDraw)
        calendar::draw();
}
void calendar::setCurrTask(int r)
{
        if (r == -1) currTask = nullptr;
        else currTask = currDay->getElement(r);
}
void calendar::load()
{
    tasklist.clear();
    daylist.clear();
    QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл","./","*.db");
    connect(fileName);
    parseDB();
    setCurrDay(QDate::currentDate(),false);
    calendar::draw();
}
void calendar::setTable()
{

    setColumnCount(2);
    setRowCount(48);
    horizontalHeader()->setVisible(false);
    verticalHeader()->setVisible(false);
    QTime ttime(0,0,0,0);
    QString s;
    for (int i=0;i<48;i++)
    {
       s = ttime.toString("hh:mm");
       QTableWidgetItem *item = new QTableWidgetItem(s);
       setItem(i,0, item);
        ttime = ttime.addSecs(1800);
    }
}
void calendar::draw(bool firstDraw)
{
  QString s;
  QColor c;
  if (!firstDraw)
  {
      clearContents();
      setTable();
  }
  for (int i=0;i<48;i++)
    {
        if (currDay->getElement(i)==nullptr)
            continue;
        else
        {
            int j=0;
            do
            {
                if (j==0)
                    s = (currDay->getElement(i))->getName();
                else
                    s = "";
                QTableWidgetItem *item = new QTableWidgetItem(s);
                c = currDay->getElement(i)->getColor();
                item->setBackground(c);
                setItem((i+j),1,item);
                j++;
            } while (j<(currDay->getElement(i))->getLength());
            i = i + (currDay->getElement(i))->getLength()-1;
        }
    }
}
void calendar::setPar(int i,bool b)
{
    ParList[i]= b;
}

QDate calendar::getCurrDate()
{
    return currDay->getDate();
}
/*void calendar::save()             legacy save to file
{
    if (QFile::exists("save.txt"))
       QFile::remove("save.txt");

    QFile file("save.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    QColor tempColor;
    for (auto &el: tasklist)
    {
               out << el->getName()<<" ";
               out << el->getDate().toString("yyyy.MM.dd")<<" ";
               out << el->getStart()<<" ";
               out << el->getLength()<<" ";
               tempColor = el->getColor();
               out << tempColor.red()<< " " << tempColor.green()<< " " << tempColor.blue()<<"\n";
    }
    file.close();
}*/
/*void calendar::load()             //legacy load from file
{
    tasklist.clear();
    daylist.clear();
    QString s= "\\save.txt";
    QFile file(s);
    if (!file.open(QIODevice::ReadOnly))
    {
      //QMessageBox::information(0,"Ошибка!","Файл не найден!", "ОК", QString(), QString(), 0, 0 );
      return;
    }
    QStringList strl;
    QStringList fields;
    while (!file.atEnd())
    strl << file.readLine();
    int red{0},green{0},blue{0};
    for( auto &x : strl )
    {
      fields = x.split(" ");
      if (fields[0] == "\n")
          continue;
      ->t_taskname = fields[0];
      t_taskdate = QDate::fromString(fields[1],"yyyy.MM.dd");
      t_taskstart = fields[2].toInt();
      t_tasklength = fields[3].toInt();
      red = fields[4].toInt();
      green = fields[5].toInt();
      blue = fields[6].toInt();
      t_taskcolor.setRgb(red,green,blue);
      addTask(false);
    }
    file.close();
    setCurrDay(QDate::currentDate(),false);
    calendar::draw();
}*/
