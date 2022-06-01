#include "goal.h"
#include "calendar.h"
Goal::Goal(int i, int tid, QString n, QColor c, int p)
{
    id = i;
    task_id = tid;
    name = n;
    color = c;
    priority = p;
}
QString Goal::getName()
{
    return name;
}
QColor Goal::getColor()
{
    return color;
}
int Goal::getPriority()
{
    return priority;
}
int Goal::getID()
{
    return id;
}
int Goal::getTaskID()
{
    return task_id;
}
void Goal::setName(QString s)
{
    name = s;
}
void Goal::setColor(QColor c)
{
    color = c;
}
void Goal::setPriority(int p)
{
    priority = p;
}
