#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calendar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->ExitAction, &QAction::triggered, this, &MainWindow::close);
    connect(ui->LoadAction, &QAction::triggered, ui->cwidget, &calendar::load);
    connect(ui->SaveAction, &QAction::triggered, ui->cwidget, &calendar::save);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickedTask(Task *t)
{

}

void MainWindow::on_cWidget_itemClicked(QTableWidgetItem* item)
{
    ui->EditButton->setEnabled(true);
}
