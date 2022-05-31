#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calendar.h"
#include "QVBoxLayout"
#include <QColorDialog>
#include <QCloseEvent>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    hideForm();

    connect(ui->ExitAction, &QAction::triggered, this, &MainWindow::close);
    connect(ui->LoadAction, &QAction::triggered, ui->cwidget, &calendar::load);
    connect(ui->ClearAction, &QAction::triggered, ui->cwidget, &calendar::clear);
    connect(ui->cwidget, &QTableWidget::cellClicked, this, &MainWindow::on_cWidget_cellClicked);
    connect(this, &MainWindow::MW_setCurrTask, ui->cwidget, &calendar::setCurrTask);
    connect(ui->TodayButton, &QPushButton::clicked, this, &MainWindow::TodayButton_Clicked);
    connect(ui->EditButton, &QPushButton::clicked, this, &MainWindow::EditButton_Clicked);
    connect(ui->DeleteButton, &QPushButton::clicked, this, &MainWindow::DeleteButton_Clicked);
    connect(ui->NewTaskButton, &QPushButton::clicked, this, &MainWindow::NewTask_Clicked);
    connect(ui->NameEdit,&QLineEdit::editingFinished, this, &MainWindow::NameEdit_Changed);
    connect(ui->ChooseColor,&QPushButton::clicked, this, &MainWindow::ChooseColor_Clicked);
    connect(ui->DateEdit,&QDateEdit::dateChanged, this, &MainWindow::DateEdit_changed);
    connect(ui->StartHourEdit,&QComboBox::currentTextChanged, this, &MainWindow::StartHourEdit_changed);
    connect(ui->StartMinuteEdit,&QComboBox::currentTextChanged, this, &MainWindow::StartMinuteEdit_changed);
    connect(ui->LengthHourEdit,&QComboBox::currentTextChanged, this, &MainWindow::LengthHourEdit_changed);
    connect(ui->LengthMinuteEdit,&QComboBox::currentTextChanged, this, &MainWindow::LengthMinuteEdit_changed);
    connect(ui->SaveTaskButton,&QPushButton::clicked, this, &MainWindow::SaveButton_clicked);
    connect(ui->calendarWidget,&QCalendarWidget::clicked,this, &MainWindow::CalendarDate_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hideForm()
{
    ui->nameLabel->hide();
    ui->NameEdit->hide();
    ui->ChooseColor->hide();
    ui->dateLabel->hide();
    ui->DateEdit->hide();
    ui->StartHourEdit->hide();
    ui->StartMinuteEdit->hide();
    ui->LengthHourEdit->hide();
    ui->LengthMinuteEdit->hide();
    ui->StartLabel->hide();
    ui->LengthLabel->hide();
    ui->SaveTaskButton->hide();
}
void MainWindow::showForm()
{
    ui->nameLabel->show();
    ui->NameEdit->show();
    ui->ChooseColor->show();
    ui->dateLabel->show();
    ui->DateEdit->show();
    ui->StartHourEdit->show();
    ui->StartMinuteEdit->show();
    ui->LengthHourEdit->show();
    ui->LengthMinuteEdit->show();
    ui->StartLabel->show();
    ui->LengthLabel->show();
    ui->SaveTaskButton->show();
}
void MainWindow::NewTask_Clicked()
{
    showForm();
    ui->cwidget->setCurrTask(-1);

    ui->DateEdit->setDate(ui->cwidget->getCurrDate());
    ui->cwidget->setTdate(ui->cwidget->getCurrDate());
    ui->NameEdit->setText("новая задача");
    ui->cwidget->setTname("новая задача");
    ui->StartHourEdit->setCurrentIndex(QTime::currentTime().hour());
    ui->StartMinuteEdit->setCurrentIndex(0);
    ui->LengthHourEdit->setCurrentIndex(1);
    ui->LengthMinuteEdit->setCurrentIndex(0);
    ui->EditButton->setEnabled(false);
    ui->DeleteButton->setEnabled(false);
    ui->SaveTaskButton->setEnabled(true);
}
void MainWindow::TodayButton_Clicked()
{
    ui->cwidget->setCurrDay(QDate::currentDate());
    ui->calendarWidget->setSelectedDate(ui->cwidget->getCurrDate());
}
void MainWindow::EditButton_Clicked()
{
    showForm();
    ui->DateEdit->setDate(ui->cwidget->getCurrTask()->getDate());
    ui->NameEdit->setText(ui->cwidget->getCurrTask()->getName());

    int tempstartH = ui->cwidget->getCurrTask()->getStart() / 2;
    int tempstartM = ui->cwidget->getCurrTask()->getStart() % 2;
    ui->StartHourEdit->setCurrentIndex(tempstartH);
    ui->StartMinuteEdit->setCurrentIndex(tempstartM);

    int templenH = ui->cwidget->getCurrTask()->getLength() / 2;
    int templenM = ui->cwidget->getCurrTask()->getLength() % 2;
    ui->LengthHourEdit->setCurrentIndex(templenH);
    ui->LengthMinuteEdit->setCurrentIndex(templenM);

    ui->SaveTaskButton->setEnabled(true);
}
void MainWindow::DeleteButton_Clicked()
{
    int n=QMessageBox::information(0,"Подтвердите действие","Удалить задачу?", "Да", "Нет", QString(), 1, 1 );
    if (n==0)
    {
        ui->cwidget->deleteTask();
        hideForm();
        ui->EditButton->setEnabled(false);
        ui->DeleteButton->setEnabled(false);
        ui->SaveTaskButton->setEnabled(false);
    }
}
void MainWindow::on_cWidget_cellClicked(int row, int column)
{
    emit MW_setCurrTask(row);
    ui->calendarWidget->setSelectedDate(ui->cwidget->getCurrDate());
    if (ui->cwidget->getCurrTask() != nullptr)
    {
        QString s = ui->cwidget->getCurrTask()->getName();
        ui->NameEdit->setText(s);
        ui->EditButton->setEnabled(true);
        ui->DeleteButton->setEnabled(true);
    }
    else
    {
        ui->EditButton->setEnabled(false);
        ui->DeleteButton->setEnabled(false);
        ui->SaveTaskButton->setEnabled(false);
        hideForm();
        for (int i=0; i<5; i++)
            ui->cwidget->setPar(i,false);
    }
}
void MainWindow::NameEdit_Changed()
{
    ui->cwidget->setTname(ui->NameEdit->text());
    ui->cwidget->setPar(0,true);
}
void MainWindow::ChooseColor_Clicked()
{
    QColor c = QColorDialog::getColor(Qt::blue, this);
    ui->cwidget->setTcolor(c);
    ui->cwidget->setPar(4,true);
}
void MainWindow::DateEdit_changed()
{
    ui->cwidget->setTdate(ui->DateEdit->date());
    ui->cwidget->setPar(1,true);
}
void MainWindow::StartHourEdit_changed()
{
    ui->cwidget->setTstartH(ui->StartHourEdit->currentText().toInt());
    ui->cwidget->setPar(2,true);
}
void MainWindow::StartMinuteEdit_changed()
{
    ui->cwidget->setTstartM(ui->StartMinuteEdit->currentText().toInt());
    ui->cwidget->setPar(2,true);
}
void MainWindow::LengthHourEdit_changed()
{
    ui->cwidget->setTlengthH(ui->LengthHourEdit->currentText().toInt());
    ui->cwidget->setPar(3,true);
}
void MainWindow::LengthMinuteEdit_changed()
{
    ui->cwidget->setTlengthM(ui->LengthMinuteEdit->currentText().toInt());
    ui->cwidget->setPar(3,true);
}
void MainWindow::SaveButton_clicked()
{
    ui->calendarWidget->setSelectedDate(ui->cwidget->getCurrDate());
    int n{0};
    if (ui->cwidget->getCurrTask()==nullptr)
        n=ui->cwidget->addTask();
    else
        n=ui->cwidget->editTask(ui->cwidget->getCurrTask());
    if (n==0)
    {
        hideForm();
        for (int i=0; i<5; i++)
        ui->cwidget->setPar(i,false);
        ui->calendarWidget->setSelectedDate(ui->cwidget->getCurrDate());
    }
}

void MainWindow::CalendarDate_clicked()
{
    ui->cwidget->setCurrDay(ui->calendarWidget->selectedDate());
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event->ignore();
    QMessageBox ms;

    QAbstractButton *yes = ms.addButton("Да",QMessageBox::YesRole);
    QAbstractButton *no = ms.addButton("Нет",QMessageBox::NoRole);
    ms.setWindowTitle("Выход");
    ms.setText("Вы уверены, что хотите выйти?");
    ms.exec();
    if(ms.clickedButton() == yes)
        event->accept();


}
