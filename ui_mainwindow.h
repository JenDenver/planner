/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <calendar.h>
#include <goalmanager.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *SaveAction;
    QAction *LoadAction;
    QAction *SaveExitAction;
    QAction *ClearAction;
    QAction *ExitAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *EditLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nameLabel;
    QLineEdit *NameEdit;
    QPushButton *ChooseColor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *dateLabel;
    QDateEdit *DateEdit;
    QLabel *StartLabel;
    QComboBox *StartHourEdit;
    QComboBox *StartMinuteEdit;
    QLabel *LengthLabel;
    QComboBox *LengthHourEdit;
    QComboBox *LengthMinuteEdit;
    QPushButton *SaveTaskButton;
    calendar *cwidget;
    QCalendarWidget *calendarWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *TodayButton;
    QPushButton *NewTaskButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EditButton;
    QPushButton *DeleteButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    goalManager *goalWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *firstVLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *EditGoalButton;
    QPushButton *DeleteGoalButton;
    QPushButton *NewGoalButton;
    QVBoxLayout *secondVLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *GoalNameLabel;
    QLineEdit *GoalNameEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *GoalColorLabel;
    QPushButton *GoalChooseColor;
    QHBoxLayout *horizontalLayout_8;
    QLabel *GoalPriorityLabel;
    QComboBox *GoalPriorityEdit;
    QPushButton *GoalSaveButton;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QPushButton *GoalPlanButton;
    QVBoxLayout *thirdVLayout;
    QLabel *AppointmentLabel;
    QLineEdit *AppointmentText;
    QPushButton *GoalOpenInCalButton;
    QMenuBar *menubar;
    QMenu *menuF;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        SaveAction = new QAction(MainWindow);
        SaveAction->setObjectName(QString::fromUtf8("SaveAction"));
        LoadAction = new QAction(MainWindow);
        LoadAction->setObjectName(QString::fromUtf8("LoadAction"));
        SaveExitAction = new QAction(MainWindow);
        SaveExitAction->setObjectName(QString::fromUtf8("SaveExitAction"));
        ClearAction = new QAction(MainWindow);
        ClearAction->setObjectName(QString::fromUtf8("ClearAction"));
        ExitAction = new QAction(MainWindow);
        ExitAction->setObjectName(QString::fromUtf8("ExitAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        gridLayout_2 = new QGridLayout(tab_1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        EditLayout = new QVBoxLayout();
        EditLayout->setObjectName(QString::fromUtf8("EditLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nameLabel = new QLabel(tab_1);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_4->addWidget(nameLabel);

        NameEdit = new QLineEdit(tab_1);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(NameEdit);

        ChooseColor = new QPushButton(tab_1);
        ChooseColor->setObjectName(QString::fromUtf8("ChooseColor"));

        horizontalLayout_4->addWidget(ChooseColor);


        EditLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        dateLabel = new QLabel(tab_1);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dateLabel->sizePolicy().hasHeightForWidth());
        dateLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(dateLabel);

        DateEdit = new QDateEdit(tab_1);
        DateEdit->setObjectName(QString::fromUtf8("DateEdit"));
        DateEdit->setCalendarPopup(true);

        horizontalLayout_5->addWidget(DateEdit);

        StartLabel = new QLabel(tab_1);
        StartLabel->setObjectName(QString::fromUtf8("StartLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(StartLabel->sizePolicy().hasHeightForWidth());
        StartLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(StartLabel);

        StartHourEdit = new QComboBox(tab_1);
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->addItem(QString());
        StartHourEdit->setObjectName(QString::fromUtf8("StartHourEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(StartHourEdit->sizePolicy().hasHeightForWidth());
        StartHourEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(StartHourEdit);

        StartMinuteEdit = new QComboBox(tab_1);
        StartMinuteEdit->addItem(QString());
        StartMinuteEdit->addItem(QString());
        StartMinuteEdit->setObjectName(QString::fromUtf8("StartMinuteEdit"));
        sizePolicy3.setHeightForWidth(StartMinuteEdit->sizePolicy().hasHeightForWidth());
        StartMinuteEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(StartMinuteEdit);

        LengthLabel = new QLabel(tab_1);
        LengthLabel->setObjectName(QString::fromUtf8("LengthLabel"));

        horizontalLayout_5->addWidget(LengthLabel);

        LengthHourEdit = new QComboBox(tab_1);
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->addItem(QString());
        LengthHourEdit->setObjectName(QString::fromUtf8("LengthHourEdit"));
        sizePolicy3.setHeightForWidth(LengthHourEdit->sizePolicy().hasHeightForWidth());
        LengthHourEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(LengthHourEdit);

        LengthMinuteEdit = new QComboBox(tab_1);
        LengthMinuteEdit->addItem(QString());
        LengthMinuteEdit->addItem(QString());
        LengthMinuteEdit->setObjectName(QString::fromUtf8("LengthMinuteEdit"));
        sizePolicy3.setHeightForWidth(LengthMinuteEdit->sizePolicy().hasHeightForWidth());
        LengthMinuteEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(LengthMinuteEdit);


        EditLayout->addLayout(horizontalLayout_5);

        SaveTaskButton = new QPushButton(tab_1);
        SaveTaskButton->setObjectName(QString::fromUtf8("SaveTaskButton"));
        SaveTaskButton->setEnabled(false);

        EditLayout->addWidget(SaveTaskButton);


        gridLayout_2->addLayout(EditLayout, 2, 0, 1, 1);

        cwidget = new calendar(tab_1);
        cwidget->setObjectName(QString::fromUtf8("cwidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cwidget->sizePolicy().hasHeightForWidth());
        cwidget->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(cwidget, 0, 1, 3, 1);

        calendarWidget = new QCalendarWidget(tab_1);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_2->addWidget(calendarWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TodayButton = new QPushButton(tab_1);
        TodayButton->setObjectName(QString::fromUtf8("TodayButton"));

        verticalLayout->addWidget(TodayButton);

        NewTaskButton = new QPushButton(tab_1);
        NewTaskButton->setObjectName(QString::fromUtf8("NewTaskButton"));

        verticalLayout->addWidget(NewTaskButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        EditButton = new QPushButton(tab_1);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));
        EditButton->setEnabled(false);

        horizontalLayout_2->addWidget(EditButton);

        DeleteButton = new QPushButton(tab_1);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setEnabled(false);

        horizontalLayout_2->addWidget(DeleteButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        goalWidget = new goalManager(tab_2);
        goalWidget->setObjectName(QString::fromUtf8("goalWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(goalWidget->sizePolicy().hasHeightForWidth());
        goalWidget->setSizePolicy(sizePolicy5);
        goalWidget->setMinimumSize(QSize(0, 500));

        gridLayout_3->addWidget(goalWidget, 0, 2, 4, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        firstVLayout = new QVBoxLayout();
        firstVLayout->setObjectName(QString::fromUtf8("firstVLayout"));
        firstVLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        EditGoalButton = new QPushButton(tab_2);
        EditGoalButton->setObjectName(QString::fromUtf8("EditGoalButton"));
        EditGoalButton->setEnabled(false);

        horizontalLayout_3->addWidget(EditGoalButton);

        DeleteGoalButton = new QPushButton(tab_2);
        DeleteGoalButton->setObjectName(QString::fromUtf8("DeleteGoalButton"));
        DeleteGoalButton->setEnabled(false);

        horizontalLayout_3->addWidget(DeleteGoalButton);


        firstVLayout->addLayout(horizontalLayout_3);

        NewGoalButton = new QPushButton(tab_2);
        NewGoalButton->setObjectName(QString::fromUtf8("NewGoalButton"));

        firstVLayout->addWidget(NewGoalButton);


        verticalLayout_3->addLayout(firstVLayout);

        secondVLayout = new QVBoxLayout();
        secondVLayout->setObjectName(QString::fromUtf8("secondVLayout"));
        secondVLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        GoalNameLabel = new QLabel(tab_2);
        GoalNameLabel->setObjectName(QString::fromUtf8("GoalNameLabel"));

        horizontalLayout_6->addWidget(GoalNameLabel);

        GoalNameEdit = new QLineEdit(tab_2);
        GoalNameEdit->setObjectName(QString::fromUtf8("GoalNameEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(GoalNameEdit->sizePolicy().hasHeightForWidth());
        GoalNameEdit->setSizePolicy(sizePolicy6);

        horizontalLayout_6->addWidget(GoalNameEdit);


        secondVLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        GoalColorLabel = new QLabel(tab_2);
        GoalColorLabel->setObjectName(QString::fromUtf8("GoalColorLabel"));

        horizontalLayout_7->addWidget(GoalColorLabel);

        GoalChooseColor = new QPushButton(tab_2);
        GoalChooseColor->setObjectName(QString::fromUtf8("GoalChooseColor"));

        horizontalLayout_7->addWidget(GoalChooseColor);


        secondVLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        GoalPriorityLabel = new QLabel(tab_2);
        GoalPriorityLabel->setObjectName(QString::fromUtf8("GoalPriorityLabel"));

        horizontalLayout_8->addWidget(GoalPriorityLabel);

        GoalPriorityEdit = new QComboBox(tab_2);
        GoalPriorityEdit->addItem(QString());
        GoalPriorityEdit->addItem(QString());
        GoalPriorityEdit->addItem(QString());
        GoalPriorityEdit->addItem(QString());
        GoalPriorityEdit->setObjectName(QString::fromUtf8("GoalPriorityEdit"));

        horizontalLayout_8->addWidget(GoalPriorityEdit);


        secondVLayout->addLayout(horizontalLayout_8);

        GoalSaveButton = new QPushButton(tab_2);
        GoalSaveButton->setObjectName(QString::fromUtf8("GoalSaveButton"));

        secondVLayout->addWidget(GoalSaveButton);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Minimum);

        secondVLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(secondVLayout);

        line = new QFrame(tab_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        GoalPlanButton = new QPushButton(tab_2);
        GoalPlanButton->setObjectName(QString::fromUtf8("GoalPlanButton"));

        verticalLayout_3->addWidget(GoalPlanButton);

        thirdVLayout = new QVBoxLayout();
        thirdVLayout->setObjectName(QString::fromUtf8("thirdVLayout"));
        AppointmentLabel = new QLabel(tab_2);
        AppointmentLabel->setObjectName(QString::fromUtf8("AppointmentLabel"));

        thirdVLayout->addWidget(AppointmentLabel);

        AppointmentText = new QLineEdit(tab_2);
        AppointmentText->setObjectName(QString::fromUtf8("AppointmentText"));
        sizePolicy6.setHeightForWidth(AppointmentText->sizePolicy().hasHeightForWidth());
        AppointmentText->setSizePolicy(sizePolicy6);

        thirdVLayout->addWidget(AppointmentText);

        GoalOpenInCalButton = new QPushButton(tab_2);
        GoalOpenInCalButton->setObjectName(QString::fromUtf8("GoalOpenInCalButton"));

        thirdVLayout->addWidget(GoalOpenInCalButton);


        verticalLayout_3->addLayout(thirdVLayout);


        gridLayout_3->addLayout(verticalLayout_3, 0, 1, 4, 1);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuF = new QMenu(menubar);
        menuF->setObjectName(QString::fromUtf8("menuF"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuF->menuAction());
        menuF->addAction(LoadAction);
        menuF->addSeparator();
        menuF->addAction(ClearAction);
        menuF->addAction(ExitAction);

        retranslateUi(MainWindow);
        QObject::connect(SaveExitAction, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(1);
        LengthMinuteEdit->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        SaveAction->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        LoadAction->setText(QCoreApplication::translate("MainWindow", "\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        SaveExitAction->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270 \320\262\321\213\320\271\321\202\320\270", nullptr));
        ClearAction->setText(QCoreApplication::translate("MainWindow", "\320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        ExitAction->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\321\205\320\276\320\264", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        ChooseColor->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214 \321\206\320\262\320\265\321\202...", nullptr));
        dateLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260:", nullptr));
        StartLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276:", nullptr));
        StartHourEdit->setItemText(0, QCoreApplication::translate("MainWindow", "00", nullptr));
        StartHourEdit->setItemText(1, QCoreApplication::translate("MainWindow", "01", nullptr));
        StartHourEdit->setItemText(2, QCoreApplication::translate("MainWindow", "02", nullptr));
        StartHourEdit->setItemText(3, QCoreApplication::translate("MainWindow", "03", nullptr));
        StartHourEdit->setItemText(4, QCoreApplication::translate("MainWindow", "04", nullptr));
        StartHourEdit->setItemText(5, QCoreApplication::translate("MainWindow", "05", nullptr));
        StartHourEdit->setItemText(6, QCoreApplication::translate("MainWindow", "06", nullptr));
        StartHourEdit->setItemText(7, QCoreApplication::translate("MainWindow", "07", nullptr));
        StartHourEdit->setItemText(8, QCoreApplication::translate("MainWindow", "08", nullptr));
        StartHourEdit->setItemText(9, QCoreApplication::translate("MainWindow", "09", nullptr));
        StartHourEdit->setItemText(10, QCoreApplication::translate("MainWindow", "10", nullptr));
        StartHourEdit->setItemText(11, QCoreApplication::translate("MainWindow", "11", nullptr));
        StartHourEdit->setItemText(12, QCoreApplication::translate("MainWindow", "12", nullptr));
        StartHourEdit->setItemText(13, QCoreApplication::translate("MainWindow", "13", nullptr));
        StartHourEdit->setItemText(14, QCoreApplication::translate("MainWindow", "14", nullptr));
        StartHourEdit->setItemText(15, QCoreApplication::translate("MainWindow", "15", nullptr));
        StartHourEdit->setItemText(16, QCoreApplication::translate("MainWindow", "16", nullptr));
        StartHourEdit->setItemText(17, QCoreApplication::translate("MainWindow", "17", nullptr));
        StartHourEdit->setItemText(18, QCoreApplication::translate("MainWindow", "18", nullptr));
        StartHourEdit->setItemText(19, QCoreApplication::translate("MainWindow", "19", nullptr));
        StartHourEdit->setItemText(20, QCoreApplication::translate("MainWindow", "20", nullptr));
        StartHourEdit->setItemText(21, QCoreApplication::translate("MainWindow", "21", nullptr));
        StartHourEdit->setItemText(22, QCoreApplication::translate("MainWindow", "22", nullptr));
        StartHourEdit->setItemText(23, QCoreApplication::translate("MainWindow", "23", nullptr));
        StartHourEdit->setItemText(24, QString());

        StartMinuteEdit->setItemText(0, QCoreApplication::translate("MainWindow", "00", nullptr));
        StartMinuteEdit->setItemText(1, QCoreApplication::translate("MainWindow", "30", nullptr));

        LengthLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", nullptr));
        LengthHourEdit->setItemText(0, QCoreApplication::translate("MainWindow", "00", nullptr));
        LengthHourEdit->setItemText(1, QCoreApplication::translate("MainWindow", "01", nullptr));
        LengthHourEdit->setItemText(2, QCoreApplication::translate("MainWindow", "02", nullptr));
        LengthHourEdit->setItemText(3, QCoreApplication::translate("MainWindow", "03", nullptr));
        LengthHourEdit->setItemText(4, QCoreApplication::translate("MainWindow", "04", nullptr));
        LengthHourEdit->setItemText(5, QCoreApplication::translate("MainWindow", "05", nullptr));
        LengthHourEdit->setItemText(6, QCoreApplication::translate("MainWindow", "06", nullptr));
        LengthHourEdit->setItemText(7, QCoreApplication::translate("MainWindow", "07", nullptr));
        LengthHourEdit->setItemText(8, QCoreApplication::translate("MainWindow", "08", nullptr));
        LengthHourEdit->setItemText(9, QCoreApplication::translate("MainWindow", "09", nullptr));
        LengthHourEdit->setItemText(10, QCoreApplication::translate("MainWindow", "10", nullptr));
        LengthHourEdit->setItemText(11, QCoreApplication::translate("MainWindow", "11", nullptr));
        LengthHourEdit->setItemText(12, QCoreApplication::translate("MainWindow", "12", nullptr));
        LengthHourEdit->setItemText(13, QCoreApplication::translate("MainWindow", "13", nullptr));
        LengthHourEdit->setItemText(14, QCoreApplication::translate("MainWindow", "14", nullptr));
        LengthHourEdit->setItemText(15, QCoreApplication::translate("MainWindow", "15", nullptr));
        LengthHourEdit->setItemText(16, QCoreApplication::translate("MainWindow", "16", nullptr));
        LengthHourEdit->setItemText(17, QCoreApplication::translate("MainWindow", "17", nullptr));
        LengthHourEdit->setItemText(18, QCoreApplication::translate("MainWindow", "18", nullptr));
        LengthHourEdit->setItemText(19, QCoreApplication::translate("MainWindow", "19", nullptr));
        LengthHourEdit->setItemText(20, QCoreApplication::translate("MainWindow", "20", nullptr));
        LengthHourEdit->setItemText(21, QCoreApplication::translate("MainWindow", "21", nullptr));
        LengthHourEdit->setItemText(22, QCoreApplication::translate("MainWindow", "22", nullptr));
        LengthHourEdit->setItemText(23, QCoreApplication::translate("MainWindow", "23", nullptr));
        LengthHourEdit->setItemText(24, QString());

        LengthMinuteEdit->setItemText(0, QCoreApplication::translate("MainWindow", "00", nullptr));
        LengthMinuteEdit->setItemText(1, QCoreApplication::translate("MainWindow", "30", nullptr));

        SaveTaskButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        TodayButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\275\320\260 \321\201\320\265\320\263\320\276\320\264\320\275\321\217", nullptr));
        NewTaskButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        EditButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        EditGoalButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        DeleteGoalButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        NewGoalButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\276\320\265 \320\264\320\265\320\273\320\276", nullptr));
        GoalNameLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        GoalColorLabel->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202:", nullptr));
        GoalChooseColor->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214 \321\206\320\262\320\265\321\202", nullptr));
        GoalPriorityLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202:", nullptr));
        GoalPriorityEdit->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        GoalPriorityEdit->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        GoalPriorityEdit->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        GoalPriorityEdit->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));

        GoalSaveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        GoalPlanButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        AppointmentLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217:", nullptr));
        GoalOpenInCalButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\262 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\270", nullptr));
        menuF->setTitle(QCoreApplication::translate("MainWindow", "\320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
