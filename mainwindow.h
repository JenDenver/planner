#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "task.h"
#include "calendar.h"
#include "goal.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void MW_setCurrTask(int);
    //void MW_setCurrentGoal(Goal*);
    void MW_setCurrentGoal(int,int);
private slots:
    void hideForm();
    void showForm();
    void on_cWidget_cellClicked(int, int);
    void TodayButton_Clicked();
    void EditButton_Clicked();
    void DeleteButton_Clicked();
    void NewTask_Clicked();
    void NameEdit_Changed();
    void ChooseColor_Clicked();
    void DateEdit_changed();
    void StartHourEdit_changed();
    void StartMinuteEdit_changed();
    void LengthHourEdit_changed();
    void LengthMinuteEdit_changed();
    void SaveButton_clicked();
    void CalendarDate_clicked();

    void on_EditGoalButton_clicked();
    void on_NewGoalButton_clicked();
    void layout2hide();
    void layout2show();
    void layout3hide();
    void layout3show();
    void goal1_cellClicked(int, int);
    void goal2_cellClicked(int, int);
    void goal3_cellClicked(int, int);
    void goal4_cellClicked(int, int);
    void DeleteGoalButton_clicked();
    void GoalNameEdit_changed();
    void GoalChooseColor_clicked();
    void GoalPriorityEdit_changed();
    void GoalSaveButton_clicked();
private:
    Ui::MainWindow *ui;
    void closeEvent(QCloseEvent *event);
    int temp{0};

};
#endif // MAINWINDOW_H
