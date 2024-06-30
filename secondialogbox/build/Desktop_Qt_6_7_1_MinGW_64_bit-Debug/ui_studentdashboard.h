/********************************************************************************
** Form generated from reading UI file 'studentdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDASHBOARD_H
#define UI_STUDENTDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentdashboard
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *assignmentButton;
    QPushButton *internalButton;
    QPushButton *logOutButton;
    QStackedWidget *stackedWidget;
    QWidget *Home;
    QLabel *label_3;
    QWidget *Assignment;
    QLabel *label_4;
    QWidget *Internal;
    QTableView *tableView;

    void setupUi(QDialog *studentdashboard)
    {
        if (studentdashboard->objectName().isEmpty())
            studentdashboard->setObjectName("studentdashboard");
        studentdashboard->resize(1200, 559);
        studentdashboard->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 250)"));
        verticalLayoutWidget = new QWidget(studentdashboard);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 70, 101, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(verticalLayoutWidget);
        homeButton->setObjectName("homeButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(homeButton->sizePolicy().hasHeightForWidth());
        homeButton->setSizePolicy(sizePolicy);
        homeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(homeButton);

        assignmentButton = new QPushButton(verticalLayoutWidget);
        assignmentButton->setObjectName("assignmentButton");
        sizePolicy.setHeightForWidth(assignmentButton->sizePolicy().hasHeightForWidth());
        assignmentButton->setSizePolicy(sizePolicy);
        assignmentButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(assignmentButton);

        internalButton = new QPushButton(verticalLayoutWidget);
        internalButton->setObjectName("internalButton");
        sizePolicy.setHeightForWidth(internalButton->sizePolicy().hasHeightForWidth());
        internalButton->setSizePolicy(sizePolicy);
        internalButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(internalButton);

        logOutButton = new QPushButton(verticalLayoutWidget);
        logOutButton->setObjectName("logOutButton");
        sizePolicy.setHeightForWidth(logOutButton->sizePolicy().hasHeightForWidth());
        logOutButton->setSizePolicy(sizePolicy);
        logOutButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(logOutButton);

        stackedWidget = new QStackedWidget(studentdashboard);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(130, 20, 561, 421));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 160, 221);\n"
"color: black"));
        Home = new QWidget();
        Home->setObjectName("Home");
        label_3 = new QLabel(Home);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 140, 191, 91));
        stackedWidget->addWidget(Home);
        Assignment = new QWidget();
        Assignment->setObjectName("Assignment");
        label_4 = new QLabel(Assignment);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 180, 191, 91));
        stackedWidget->addWidget(Assignment);
        Internal = new QWidget();
        Internal->setObjectName("Internal");
        tableView = new QTableView(Internal);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 60, 531, 361));
        stackedWidget->addWidget(Internal);

        retranslateUi(studentdashboard);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(studentdashboard);
    } // setupUi

    void retranslateUi(QDialog *studentdashboard)
    {
        studentdashboard->setWindowTitle(QCoreApplication::translate("studentdashboard", "Dialog", nullptr));
        homeButton->setText(QCoreApplication::translate("studentdashboard", "HOME", nullptr));
        assignmentButton->setText(QCoreApplication::translate("studentdashboard", "ASSIGNMENT", nullptr));
        internalButton->setText(QCoreApplication::translate("studentdashboard", "INTERNAL", nullptr));
        logOutButton->setText(QCoreApplication::translate("studentdashboard", "LOG OUT", nullptr));
        label_3->setText(QCoreApplication::translate("studentdashboard", "Home", nullptr));
        label_4->setText(QCoreApplication::translate("studentdashboard", "Assignment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentdashboard: public Ui_studentdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDASHBOARD_H
