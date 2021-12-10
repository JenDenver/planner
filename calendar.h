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
  void draw(bool firstDraw = false);
  void setTable();
  Day *findDay(QDate d);
  Day* getDay(const QDate& d);
  Task* getCurrTask();
public slots:
  void clear();
  void deleteTask();
  void editTask(Task *);
  void addTask(bool doDraw = true);
  void setCurrDay(QDate d,bool doDraw = true);
  void setCurrDay(Day *day,bool doDraw = true);
  void setCurrTask(int);
  void setTname(QString n = "новая задача");
  void setTstartH(int s);
  void setTstartM(int s);
  void setTlengthH(int l);
  void setTlengthM(int l);
  void setTdate(QDate d);
  void setTcolor(QColor s);
  void setPar(int, bool);
  void save();
  void load();
private:
  QString t_name = "Новая задача";
  QDate t_date = QDate::currentDate();
  int t_start = 0;
  int t_length = 1;
  QColor t_color = Qt::blue;
  QList<bool> ParList{false,false,false,false,false};  //name, date, start, length, color
  QList<Task*> tasklist;
  QList<Day*> daylist;

  Day *currDay = nullptr;
  Task *currTask = nullptr;

};
#endif // COUNTER_H
