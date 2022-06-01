#include "goalmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QGridLayout>
#include <QTableWidget>
#include <QHeaderView>
goalManager::goalManager(QWidget* parent)
{
    connect();
    parseDB();
    setTable();
    draw(true);
}
goalManager::~goalManager()
{
    /*for (int i=0;i<4;i++)
        lists[i].clear();
    for (int i=0;i<4;i++)
        lists.takeFirst();*/
}
void goalManager::connect(QString s)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(s);
    if (!db.open())
        //QMessageBox::information(this, "OK", "open");
        QMessageBox::warning(this, "Error", "Error opening database!");
}
void goalManager::parseDB()
{
    QSqlQuery *query = new QSqlQuery(db);
    if (!query->exec("SELECT * FROM goals"))
        QMessageBox::warning(this, "Error", "ошибка чтения из БД!");
    int id, task_id, priority;
    QString name, color;

    while (query->next())
    {
        id = query->value(0).toInt();
        task_id = query->value(1).toInt();
        name = query->value(2).toString();
        color = query->value(3).toString();
        priority = query->value(4).toInt();
        switch (priority)
        {
        case 1:
            goalList_1.push_back(new Goal(id, task_id, name, QColor(color), priority));
            break;
        case 2:
            goalList_2.push_back(new Goal(id, task_id, name, QColor(color), priority));
            break;
        case 3:
            goalList_3.push_back(new Goal(id, task_id, name, QColor(color), priority));
            break;
        case 4:
            goalList_4.push_back(new Goal(id, task_id, name, QColor(color), priority));
            break;
        }
    }
    lists.append(goalList_1);
    lists.append(goalList_2);
    lists.append(goalList_3);
    lists.append(goalList_4);
}
void goalManager::setTable()
{
    layout = new QGridLayout;
    table1 = new QTableWidget;
    table2 = new QTableWidget;
    table3 = new QTableWidget;
    table4 = new QTableWidget;
    layout->addWidget(table1, 0, 0);
    layout->addWidget(table2, 0, 1);
    layout->addWidget(table3, 1, 0);
    layout->addWidget(table4, 1, 1);
    this->setLayout(layout);

    table1->setColumnCount(1);
    table2->setColumnCount(1);
    table3->setColumnCount(1);
    table4->setColumnCount(1);
    table1->setRowCount(lists[0].size());
    table2->setRowCount(lists[1].size());
    table3->setRowCount(lists[2].size());
    table4->setRowCount(lists[3].size());

    table1->horizontalHeader()->setVisible(false);
    table1->verticalHeader()->setVisible(false);
    table2->horizontalHeader()->setVisible(false);
    table2->verticalHeader()->setVisible(false);
    table3->horizontalHeader()->setVisible(false);
    table3->verticalHeader()->setVisible(false);
    table4->horizontalHeader()->setVisible(false);
    table4->verticalHeader()->setVisible(false);

    table1->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    table1->setColumnWidth(0, 270);
    table2->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    table2->setColumnWidth(0, 270);
    table3->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    table3->setColumnWidth(0, 270);
    table4->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    table4->setColumnWidth(0, 270);
}
void goalManager::draw(bool firstDraw)
{
    if (!firstDraw)
    {
        table1->clearContents();
        table2->clearContents();
        table3->clearContents();
        table4->clearContents();
    }
    table1->setRowCount(lists[0].size());
    table2->setRowCount(lists[1].size());
    table3->setRowCount(lists[2].size());
    table4->setRowCount(lists[3].size());
    QString s;
    QColor c;
    for (int i=0;i<4;i++)
         for (int j=0;j<lists.at(i).size();j++)
        {
            s = lists.at(i).at(j)->getName();
            c = lists.at(i).at(j)->getColor();
            QTableWidgetItem *item = new QTableWidgetItem(s);
            item->setBackground(c);
            switch (i)
            {
            case 0:
                table1->setItem(j,0,item);
                break;
            case 1:
                table2->setItem(j,0,item);
                break;
            case 2:
                table3->setItem(j,0,item);
                break;
            case 3:
                table4->setItem(j,0,item);
                break;
            }
        }
}
void goalManager::setPar(int i,bool b)
{
    ParList[i]= b;
}
Goal* goalManager::getCurrentGoal()
{
    return currentGoal;
}
/*void goalManager::setCurrentGoal(Goal *g)
{
    //if (id == -1) currentGoal = nullptr;
    //else
    currentGoal = g;
}*/
void goalManager::setCurrentGoal(int n, int row)
{
    currentGoal = lists[n][row];
}
void goalManager::deleteGoal()
{
    int ID = currentGoal->getID();
    int priority = deleteFromBD(ID);
    lists[priority-1].removeOne(currentGoal);
    currentGoal = nullptr;
    goalManager::draw();
}
int goalManager::deleteFromBD(int ID)
{
    QSqlQuery *query = new QSqlQuery(db);
    QString q;
    q="SELECT priority FROM goals WHERE id= %1";
    q=q.arg(ID);
    query->prepare(q);
    query->exec();
    query->next();
    int p = query->value(0).toInt();
    q="DELETE FROM goals WHERE id= %1";
    q=q.arg(ID);
    query->prepare(q);
    if (!query->exec())
        QMessageBox::warning(this, "Error", "ошибка удаления из БД!");
    return p;
}
void goalManager::setTname(QString s)
{
    t_goalname = s;
}
void goalManager::setTcolor(QColor c)
{
    t_goalcolor = c;
}
void goalManager::setTpriority(int p)
{
    t_goalpriority = p;
}
int goalManager::editGoal(Goal *g)
{
    if (ParList[0])
        g->setName(t_goalname);
    if (ParList[1])
        g->setColor(t_goalcolor);
    if (ParList[2])
    {
        int oldPriority = g->getPriority();
        lists[t_goalpriority-1].push_back(g);
        lists[oldPriority-1].removeOne(g);
        g->setPriority(t_goalpriority-1);
    }
    updateDB(g);
    goalManager::draw();
    return 0;
}
void goalManager::updateDB(Goal *g)
{
    QSqlQuery *query = new QSqlQuery(db);
    QString q;
    q="UPDATE goals SET name= '%1', color= '%2', priority= '%3' WHERE id= %4";
    q=q.arg(g->getName()).
        arg(g->getColor().name()).
        arg(g->getPriority()).
        arg(g->getID());
    query->prepare(q);
    if (!query->exec())
        QMessageBox::warning(this, "Error", "ошибка сохранения в БД!");
}
