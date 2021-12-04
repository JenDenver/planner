#ifndef COUNTER_H
#define COUNTER_H
#include <QWidget>
#include <QTableWidget>
#include <QtCore>
#include <QColor>
#include "day.h"
#include "task.h"

class calendar :public QTableWidget {
  Q_OBJECT
public:
  calendar(QWidget* parent=0);
  ~calendar();
  void draw();
  void setTable();
  Day *findDay(QDate d);
  Day* getDay(const QDate& d);

public slots:
  void clear();
  void deleteTask(Task *);
  void editTask(Task *);
  void addTask(bool doDraw = true);
  void setCurrDay(QDate d,bool doDraw = true);
  void setCurrDay(Day *day,bool doDraw = true);
  void setTname(QString n);
  void setTstart(int s);
  void setTlength(int l);
  void setTdate(QDate d);
  void setTcolor(QString s);
  void save();
  void load();
  void taskClicked(int, int);
private:
  QString t_name;
  int t_start = 0;
  int t_length = 0;
  QDate t_date;
  QString t_color;

  QList<Task*> tasklist;
  QList<Day*> daylist;

  Day *currDay = nullptr;
  Task *currTask = nullptr;

};
#endif // COUNTER_H
