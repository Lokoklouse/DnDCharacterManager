#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/frodo/Documents/GitHub/DnDCharacterManager/characters.sqlite");

    if(!db.open())
    {
        qDebug() << "Problem opening database";
    }

    MainWindow w;
    w.show();


    return a.exec();
}
