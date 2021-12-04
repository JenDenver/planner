#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "mainwindow.h"
#include "calendar.h"
int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   MainWindow window;
   window.setWindowTitle("Planner");
   window.show();
   return app.exec();
}
