#ifndef COUNTER_H
#define COUNTER_H
#include <QWidget>
#include <QTableWidget>
#include <QtCore>
#include <QColor>
#include "day.h"
#include "task.h"

#include <QHBoxLayout>

class clndr :public QTableWidget {
  Q_OBJECT
public:
  clndr(QWidget* parent=0);
  ~clndr();
  void setTable();

public slots:

private:

};
#endif // COUNTER_H
