#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "task.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void clickedTask(Task *t);

private slots:

    void on_cWidget_itemClicked(QTableWidgetItem* item);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
