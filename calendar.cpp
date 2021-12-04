#include "task.h"
#include "day.h"
#include "calendar.h"
#include <QTableWidget>
#include <QTextStream>

calendar::calendar(QWidget* parent) : QTableWidget(parent)
{
    setTable();
    setCurrDay(QDate::currentDate(),false);
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
void calendar::setTstart(int s)
{
    t_start = s;
}
void calendar::setTlength(int l)
{
    t_length = l;
}
void calendar::setTdate(QDate d)
{
    t_date = d;
}
void calendar::setTcolor(QString s)
{
    t_color = s;
}
void calendar::clear()
{
    tasklist.clear();
    daylist.clear();
    setCurrDay(QDate::currentDate(),true);
}
void calendar::deleteTask(Task *t)
{
    Day *d = findDay(t->getDate());
    d->removeTask(t);
    tasklist.removeOne(t);
    calendar::draw();
}
void calendar::editTask(Task *t)
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
    calendar::draw();
}
void calendar::addTask(bool doDraw)
{
    tasklist.push_front(new Task(t_name, t_date, t_start, t_length, t_color));
    Day  *found = findDay(t_date);
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
void calendar::save()
{
    if (QFile::exists("E:\\Repo\\planner\\save.txt"))
       QFile::remove("E:\\Repo\\planner\\save.txt");

    QFile file("E:\\Repo\\planner\\save.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    QString tempString;
    for (auto &el: tasklist)
    {
       tempString.append(el->getName());
       tempString.append(" ");
       tempString.append(el->getDate().toString("yyyy.MM.dd"));
       tempString.append(" ");
       tempString.append(QString::number(el->getStart()));
       tempString.append(" ");
       tempString.append(QString::number(el->getLength()));
       tempString.append(" ");
       tempString.append(el->getColor());
       tempString.append("\n");
       out << tempString;
       tempString.clear();
    }
    file.close();

}
void calendar::load()
{
    tasklist.clear();
    daylist.clear();
    setCurrDay(QDate::currentDate(),false);
    QString s= "E:\\Repo\\planner\\save.txt";
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
      if (fields[0] == "\n")
          break;
      t_name = fields[0];
      t_date = QDate::fromString(fields[1],"yyyy.MM.dd");
      t_start = fields[2].toInt();
      t_length = fields[3].toInt();
      t_color = fields[4];
      addTask(false);
    }
    file.close();
    calendar::draw();
}
void calendar::setTable()
{

    setColumnCount(2);
    setRowCount(48);

    QTime ttime(0,0,0,0);
    for (int i=0;i<48;i++)
    {
        setItem(i,0, new QTableWidgetItem(ttime.toString("hh:mm")));
        ttime = ttime.addSecs(1800);
    }
}
void calendar::draw()
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
                setItem((i+j),1,item);
                j++;
            } while (j<(currDay->getElement(i))->getLength());
            i = i + (currDay->getElement(i))->getLength();
        }
    }
}
void calendar::taskClicked(int row,int column)
{
    currTask = currDay->getElement(row);

}
