#ifndef GOAL_H
#define GOAL_H
#include "task.h"
#include <QString>
class Goal
{
public:
    Goal(int, int, QString, QColor, int);
    void setTask(Task*);
    void removeTask();
    QString getName();
    void setName(QString);
    QColor getColor();
    void setColor(QColor);
    int getPriority();
    void setPriority(int);
    int getID();
    int getTaskID();
private:
    int id; //id этой задачи
    int task_id; // id связанной задачи в расписании (TODO)
    QString name;
    QColor color;
    int priority;
};

#endif // GOAL_H
