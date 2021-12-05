#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calendar.h"
#include "QVBoxLayout"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->nameLabel->hide();
    ui->NameEdit->hide();
    ui->colorBox->hide();
    ui->dateLabel->hide();
    ui->DateEdit->hide();
    ui->HourEdit->hide();
    ui->MinuteEdit->hide();
    ui->SaveTaskButton->hide();
    connect(ui->ExitAction, &QAction::triggered, this, &MainWindow::close);
    connect(ui->LoadAction, &QAction::triggered, ui->cwidget, &calendar::load);
    connect(ui->SaveAction, &QAction::triggered, ui->cwidget, &calendar::save);
    connect(ui->cwidget, &QTableWidget::cellClicked, this, &MainWindow::on_cWidget_cellClicked);
    connect(this, &MainWindow::MW_setCurrTask, ui->cwidget, &calendar::setCurrTask);
    connect(ui->EditButton, &QPushButton::clicked, this, &MainWindow::EditButton_clicked);
    connect(ui->DeleteButton, &QPushButton::clicked, ui->cwidget, &calendar::deleteTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_cWidget_cellClicked(int row, int column)
{
    emit MW_setCurrTask(row);
    if (ui->cwidget->getCurrTask() != nullptr)
    {
        ui->EditButton->setEnabled(true);
        ui->DeleteButton->setEnabled(true);
    }
}
void MainWindow::EditButton_clicked()
{
    ui->nameLabel->show();
    ui->NameEdit->show();
    ui->colorBox->show();
    ui->dateLabel->show();
    ui->DateEdit->show();
    ui->HourEdit->show();
    ui->MinuteEdit->show();
    ui->SaveTaskButton->show();
}
