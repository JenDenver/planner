#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clndr.h"
#include "logic.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    logic testObject;
    connect(ui->ExitAction, &QAction::triggered, this, &MainWindow::close);
    //connect(ui->LoadAction, &QAction::triggered, ui->cwidget, &clndr::load);
}

MainWindow::~MainWindow()
{
    delete ui;
}

