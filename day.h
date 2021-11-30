#ifndef DAY_H
#define DAY_H
#include <QtCore>
#include "task.h"
class Day
{
public:
    Day(QDate = QDate::currentDate());
    ~Day();
    void setTask(Task *t);
    void removeTask(Task *t);
    Task *getElement(int pos);
    void clear();
    QDate getDate();
    friend bool operator== (const Day &d1, const Day &d2)
    {
            return (d1.date==d2.date);
    }
private:
    QList<Task*> table;
    QDate date;
};
#endif // DAY_H
