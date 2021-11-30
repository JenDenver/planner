#include "day.h"

    Day::Day(QDate d)
    {
        for (int i = 0; i < 48; i++)
        {
        table.push_back(nullptr);
        }
        date = d;
    }
    Day::~Day()
    {
        table.clear();
    }
    void Day::setTask(Task *t)
    {
       for (int i=t->getStart();i<((t->getLength())+(t->getStart()));i++)
            table[i]=t;
    }
    void Day::removeTask(Task *t)
    {
        for (int i=t->getStart();i<=(t->getLength()+t->getStart());i++)
            table[i]=nullptr;
    }
    Task *Day::getElement(int pos)
    {
        return table.at(pos);
    }
    void Day::clear()
    {
        for (int i = 0; i < 48; i++)
        {
        table[i]=(nullptr);
        }
    }
    QDate Day::getDate()
    {
        return date;
    }

