#include "task.h"
#include "day.h"
#include "calendar.h"
#include <QTableWidget>
#include <QTextStream>
#include <QColor>
#include <QColorDialog>
#include <QHeaderView>
calendar::calendar(QWidget* parent) : QTableWidget(parent)
{
    setTable();
    load();
}
calendar::~calendar()
{
    while(!tasklist.isEmpty())
        delete tasklist.takeFirst();
    while(!daylist.isEmpty())
        delete daylist.takeFirst();
}
Day *calendar::findDay(QDate date)
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
    t_name = n;
}
void calendar::setTstartH(int s)
{
    t_start = s*2;
}
void calendar::setTstartM(int s)
{
    if (s==30) t_start++;
}
void calendar::setTlengthH(int l)
{
    t_length = l*2;
}
void calendar::setTlengthM(int l)
{
    if (l==30) t_length++;
}
void calendar::setTdate(QDate d)
{
    t_date = d;
}
void calendar::setTcolor(QColor s)
{
    t_color = s;
}
void calendar::clear()
{
    tasklist.clear();
    daylist.clear();
    setCurrDay(QDate::currentDate(),true);
}
Task * calendar::getCurrTask()
{
    return currTask;
}
void calendar::deleteTask()
{
    currDay->removeTask(currTask);
    tasklist.removeOne(currTask);
    currTask = nullptr;
    calendar::draw();
}
void calendar::editTask(Task *t)
{
    if (ParList[0])
        t->setName(t_name);
    if (ParList[1]&& (t->getDate() != t_date))
    {
        Day *found  = findDay(t->getDate());
        found->removeTask(t);
        found = findDay(t_date);
        found->setTask(t);
        setCurrDay(found);
        t->setDate(t_date);
    }
    if (ParList[2])
        t->setStart(t_start);
    if (ParList[3])
        t->setLength(t_length);
    if (ParList[4])
        t->setColor(t_color);
    calendar::draw();
}
void calendar::addTask(bool doDraw)
{
    tasklist.push_front(new Task(t_name, t_date, t_start, t_length, t_color));
    Day  *found = findDay(t_date);
    currDay = found;
    found->setTask(tasklist.front());
    if (doDraw)
        calendar::draw();
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
void calendar::save()
{
    if (QFile::exists("E:\\Repo\\planner\\save.txt"))
       QFile::remove("E:\\Repo\\planner\\save.txt");

    QFile file("E:\\Repo\\planner\\save.txt");
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

}
void calendar::load()
{
    tasklist.clear();
    daylist.clear();
    QString s= "E:\\Repo\\planner\\save.txt";
    QFile file(s);
    if (!file.open(QIODevice::ReadOnly))
      return;
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
      t_name = fields[0];
      t_date = QDate::fromString(fields[1],"yyyy.MM.dd");
      t_start = fields[2].toInt();
      t_length = fields[3].toInt();
      red = fields[4].toInt();
      green = fields[5].toInt();
      blue = fields[6].toInt();
      t_color.setRgb(red,green,blue);
      addTask(false);
    }
    file.close();
    setCurrDay(QDate::currentDate(),false);
    calendar::draw();
}
void calendar::setTable()
{

    setColumnCount(2);
    setRowCount(48);
    horizontalHeader()->setVisible(true);
    verticalHeader()->setVisible(true);
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
                s = (currDay->getElement(i))->getName();
                QTableWidgetItem *item = new QTableWidgetItem(s);
                c = currDay->getElement(i)->getColor();
                item->setBackground(c);
                setItem((i+j),1,item);
                j++;
            } while (j<(currDay->getElement(i))->getLength());
            i = i + (currDay->getElement(i))->getLength();
        }
    }
}
void calendar::setPar(int i,bool b)
{
    ParList[i]= b;
}
