#ifndef TEACHERWINDOW1_H
#define TEACHERWINDOW1_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class teacherdashboard;

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    bool connectionOpen()
    {
        if (QSqlDatabase::contains("qt_sql_default_connection")) {
            mydb = QSqlDatabase::database("qt_sql_default_connection");
        } else {
            mydb = QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("C:/Users/prabe/OneDrive/Desktop/IAMS/database/iamsdata.db");
        }

        if(!mydb.open()) {
            qDebug() << "Database error: " << mydb.lastError().text();
            return false;
        } else {
            return true;
        }
    }

    void connectionClose()
    {
        if(mydb.isOpen()) {
            mydb.close();
        }
    }


public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void okbutton();
    void backbutton();

private:
    Ui::SecDialog *ui;
    teacherdashboard *TeacherDashBoard;
    QSqlDatabase mydb;
};

#endif // TEACHERWINDOW1_H
