#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "task.h"
#include "calendar.h"

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
private slots:

    void on_cWidget_cellClicked(int, int);
    void EditButton_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
