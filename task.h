#ifndef TASK_H
#define TASK_H
#include <QtCore>
#include <QColor>
class Task
{
public:
    Task(int, QString, int, int, QDate, const QColor);
    void setName(QString n);
    QString getName();
    void setStart(int s);
    int getStart();
    void setLength(int l);
    int getLength();
    void setDate(QDate d);
    QDate getDate();
    void setColor(QColor c);
    QColor getColor();
    friend bool operator== (const Task &t1, const Task &t2)
    {
            return (t1.name==t2.name);
    }
    int getID();
private:
    int ID;
    QString name;
    int start;
    int length;
    QDate date;
    QColor color;
};
#endif // TASK_H
