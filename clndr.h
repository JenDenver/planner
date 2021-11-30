#ifndef COUNTER_H
#define COUNTER_H
#include <QWidget>
#include <QTableWidget>
#include <QtCore>
#include <QColor>
#include "day.h"
#include "task.h"

#include <QHBoxLayout>

class clndr :public QWidget {
  Q_OBJECT
public:
  clndr(QWidget* parent=0);
  ~clndr();
  void draw();
  void setTable();
  Day *findDay(QDate d);
  Day* getDay(const QDate& d);

public slots:
  void clear();
  void deleteTask(Task *);
  void editTask(Task *);
  void addTask();
  void setCurrDay(QDate d);
  void setTname(QString n);
  void setTstart(int s);
  void setTlength(int l);
  void setTdate(QDate d);
  void setTcolor(QString s);
  void save();
  void load(QString s = "save.txt");
private:
  QString t_name;
  int t_start = 0;
  int t_length = 0;
  QDate t_date;
  QString t_color;

  QList<Task*> tasklist;
  QList<Day*> daylist;

  Day *currDay = nullptr;

  QHBoxLayout* _layout = nullptr;
  QTableWidget *calTable = nullptr;
};
#endif // COUNTER_H
