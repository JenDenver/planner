#include <QtCore>
#include <QColor>
#include "task.h"


    Task::Task(QString n, QDate d, int s, int l, QString clrname)
    {
        name = n;
        start = s;
        length = l;
        date = d;
        color = clrname;
    }
    void Task::setName(QString n)
    {
        name = n;
    }
    QString Task::getName()
    {
        return name;
    }
    void Task::setStart(int s)
    {
        start = s;
    }
    int Task::getStart()
    {
        return start;
    }
    void Task::setLength(int l)
    {
        length = l;
    }
    int Task::getLength()
    {
        return length;
    }
    void Task::setDate(QDate d)
    {
        date = d;
    }
    QDate Task::getDate()
    {
        return date;
    }
    void Task::setColor(QString &c)
    {
        color = c;
    }
    QString Task::getColor()
    {
        return color;
    }
