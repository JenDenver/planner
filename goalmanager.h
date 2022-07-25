#ifndef GOALMANAGER_H
#define GOALMANAGER_H

#include <QWidget>
#include "goal.h"
#include <QSqlDatabase>
#include <QGridLayout>
#include <QTableWidget>
class goalManager:public QWidget
{
    Q_OBJECT
  public:
    goalManager(QWidget* parent=0);
    ~goalManager();
    void draw(bool firstDraw = false);
    void setTable();
    void setPar(int,bool);
    Goal* getCurrentGoal();
    QGridLayout *layout;
    QTableWidget *table1;
    QTableWidget *table2;
    QTableWidget *table3;
    QTableWidget *table4;
  public slots:
   // void clear();
    void deleteGoal();
    int editGoal(Goal *);
    int addGoal();
    //void setCurrentGoal(Goal*);
    void setCurrentGoal(int,int);
   // void load();
    void connect(QString s="./planDB.db");
    void parseDB();
    int addToDB(QString, QColor, int);
    void updateDB(Goal *);
    int deleteFromBD(int);      //возвращает №таблицы(приоритет)
    void setTname(QString);
    void setTcolor(QColor);
    void setTpriority(int);

  private:

    QList<QList<Goal*>> lists;
    QList<Goal*> goalList_1;
    QList<Goal*> goalList_2;
    QList<Goal*> goalList_3;
    QList<Goal*> goalList_4;
    Goal *currentGoal = nullptr;
    QString t_goalname;
    QColor t_goalcolor;
    int t_goalpriority;
    QSqlDatabase db;
    QList<bool> ParList{false,false,false}; //name, color,priority

};

#endif // GOALMANAGER_H
