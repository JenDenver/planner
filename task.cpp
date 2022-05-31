#include <QtCore>
#include <QColor>
#include "task.h"


    Task::Task(int i, QString n, int s, int l, QDate d, QColor c)
    {
        ID = i;
        name = n;
        start = s;
        length = l;
        date = d;
        color = c;
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
    void Task::setColor(QColor c)
    {
        color = c;
    }
    QColor Task::getColor()
    {
        return color;
    }
    int Task::getID()
    {
        return ID;
    }
