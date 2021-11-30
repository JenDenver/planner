#ifndef LOGIC_H
#define LOGIC_H
#include <QWidget>
#include <QTableWidget>
#include <QtCore>
#include <QColor>
#include "day.h"
#include "task.h"

class logic {
  Q_OBJECT
public:
  logic();
  ~logic();
  void draw();
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
#include <QHBoxLayout>
#endif // LOGIC_H
