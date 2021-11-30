#include "task.h"
#include "day.h"
#include "clndr.h"
#include <QTableWidget>

clndr::clndr(QWidget* parent) : QWidget(parent)
{
    setTable();
    setCurrDay(QDate::currentDate(),false);
    load("E:\\Repo\\planner\\save.txt");
}

clndr::~clndr()
{
    //delete calTable;
    while(!tasklist.isEmpty())
        delete tasklist.takeFirst();
    while(!daylist.isEmpty())
        delete daylist.takeFirst();
}

Day *clndr::findDay(QDate date)
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

void clndr::setTname(QString n)
{
    t_name = n;
}
void clndr::setTstart(int s)
{
    t_start = s;
}
void clndr::setTlength(int l)
{
    t_length = l;
}
void clndr::setTdate(QDate d)
{
    t_date = d;
}
void clndr::setTcolor(QString s)
{
    t_color = s;
}
void clndr::clear()
{
    tasklist.clear();
    daylist.clear();
    setCurrDay(QDate::currentDate(),true);
}
void clndr::deleteTask(Task *t)
{
    Day *d = findDay(t->getDate());
    d->removeTask(t);
    tasklist.removeOne(t);
    clndr::draw();
}
void clndr::editTask(Task *t)
{
    t->setColor(t_color);
    if (t->getDate() != t_date)
    {
      Day *found  = findDay(t->getDate());
      found->removeTask(t);
      found = findDay(t_date);
      found->setTask(t);
      setCurrDay(found);
    }
    t->setDate(t_date);
    t->setLength(t_length);
    t->setName(t_name);
    t->setStart(t_start);
    clndr::draw();
}
void clndr::addTask(bool doDraw)
{
    tasklist.push_front(new Task(t_name, t_date, t_start, t_length, t_color));
    Day  *found = findDay(t_date);
    found->setTask(tasklist.front());
    //daylist.front().setTask(&tasklist.front());
    if (doDraw)
        clndr::draw();
}
void clndr::setCurrDay(QDate date,bool doDraw)
{
    currDay = findDay(date);
    if (doDraw)
        clndr::draw();
}
void clndr::setCurrDay(Day *day,bool doDraw)
{
    currDay = day;
    if (doDraw)
        clndr::draw();
}
void clndr::save()
{
    if (QFile::exists("save.txt"))
       QFile::remove("save.txt");

    QFile file("save.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);

    for (auto &el: tasklist)
    {
        out << el->getName()<<" ";
       out << el->getDate().toString("yyyy.MM.dd")<<" ";
       out << el->getStart()<<" ";
       out << el->getLength()<<" ";
       out << el->getColor()<<"\n";
    }

    file.close();
}
void clndr::load(QString s)
{
    tasklist.clear();
    daylist.clear();
    setCurrDay(QDate::currentDate(),false);
    QFile file(s);
    if (!file.open(QIODevice::ReadOnly))
      return;
    QStringList strl;
    QStringList fields;
    while (!file.atEnd())
    strl << file.readLine();
    for( auto &x : strl )
    {
      fields = x.split(" ");
      t_name = fields[0];
      t_date = QDate::fromString(fields[1],"yyyy.MM.dd");
      t_start = fields[2].toInt();
      t_length = fields[3].toInt();
      t_color = fields[4];
      addTask(false);
    }
    file.close();
    clndr::draw();
}
void clndr::setTable()
{
    _layout = new QHBoxLayout(this);

    calTable = new QTableWidget(this);
    calTable->setColumnCount(2);
    calTable->setRowCount(48);
    //calTable->show();

    _layout->addWidget(calTable);
    setLayout(_layout);

    QTime ttime(0,0,0,0);
    for (int i=0;i<48;i++)
    {
        calTable->setItem(i,0, new QTableWidgetItem(ttime.toString("hh:mm")));
        ttime = ttime.addSecs(1800);
    }
}
void clndr::draw()
{
  QString s;
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
                calTable->setItem((i+j),1,item);
                //calTable->setItem(i+j,1, new QTableWidgetItem((currDay->getElement(i))->getName()));
                j++;
            } while (j<(currDay->getElement(i))->getLength());
            i = i + (currDay->getElement(i))->getLength();
        }
    }
}
