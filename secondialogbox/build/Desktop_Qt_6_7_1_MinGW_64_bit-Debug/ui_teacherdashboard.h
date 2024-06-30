/********************************************************************************
** Form generated from reading UI file 'teacherdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERDASHBOARD_H
#define UI_TEACHERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherdashboard
{
public:
    QWidget *icon_only_widget;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *Home;
    QLabel *status;
    QWidget *Assignment;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QTimeEdit *timeEdit_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QDateEdit *dateEdit_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_18;
    QLineEdit *lineEdit_9;
    QPushButton *assignmentupdate;
    QWidget *Internal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *blockEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *roomEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *courseEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *internalupdate;
    QPushButton *Save;
    QPushButton *Delete;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *assignmentButton;
    QPushButton *internalButton;
    QPushButton *pushButton_6;

    void setupUi(QDialog *teacherdashboard)
    {
        if (teacherdashboard->objectName().isEmpty())
            teacherdashboard->setObjectName("teacherdashboard");
        teacherdashboard->resize(840, 622);
        icon_only_widget = new QWidget(teacherdashboard);
        icon_only_widget->setObjectName("icon_only_widget");
        icon_only_widget->setGeometry(QRect(160, -10, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon_only_widget->sizePolicy().hasHeightForWidth());
        icon_only_widget->setSizePolicy(sizePolicy);
        label = new QLabel(icon_only_widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 5, 40, 40));
        label->setMinimumSize(QSize(40, 40));
        label->setMaximumSize(QSize(40, 40));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/vecteezy_profile-icon-design-vector_5544718.jpg")));
        label->setScaledContents(true);
        stackedWidget = new QStackedWidget(icon_only_widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 20, 581, 421));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 160, 221);\n"
"color: black"));
        Home = new QWidget();
        Home->setObjectName("Home");
        status = new QLabel(Home);
        status->setObjectName("status");
        status->setGeometry(QRect(140, 120, 111, 41));
        stackedWidget->addWidget(Home);
        Assignment = new QWidget();
        Assignment->setObjectName("Assignment");
        layoutWidget_2 = new QWidget(Assignment);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 60, 451, 351));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName("label_14");

        horizontalLayout_11->addWidget(label_14);

        timeEdit_3 = new QTimeEdit(layoutWidget_2);
        timeEdit_3->setObjectName("timeEdit_3");
        sizePolicy.setHeightForWidth(timeEdit_3->sizePolicy().hasHeightForWidth());
        timeEdit_3->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(timeEdit_3);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName("label_15");

        horizontalLayout_12->addWidget(label_15);

        dateEdit_3 = new QDateEdit(layoutWidget_2);
        dateEdit_3->setObjectName("dateEdit_3");
        sizePolicy.setHeightForWidth(dateEdit_3->sizePolicy().hasHeightForWidth());
        dateEdit_3->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(dateEdit_3);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName("label_18");
        label_18->setEnabled(true);
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(label_18);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName("lineEdit_9");
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(lineEdit_9);


        verticalLayout_7->addLayout(horizontalLayout_13);

        assignmentupdate = new QPushButton(layoutWidget_2);
        assignmentupdate->setObjectName("assignmentupdate");
        sizePolicy.setHeightForWidth(assignmentupdate->sizePolicy().hasHeightForWidth());
        assignmentupdate->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(assignmentupdate);

        stackedWidget->addWidget(Assignment);
        Internal = new QWidget();
        Internal->setObjectName("Internal");
        layoutWidget = new QWidget(Internal);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(62, 22, 481, 391));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        timeEdit = new QTimeEdit(layoutWidget);
        timeEdit->setObjectName("timeEdit");
        sizePolicy.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(timeEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName("dateEdit");
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(dateEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setEnabled(true);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_7);

        blockEdit = new QLineEdit(layoutWidget);
        blockEdit->setObjectName("blockEdit");
        sizePolicy.setHeightForWidth(blockEdit->sizePolicy().hasHeightForWidth());
        blockEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(blockEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        roomEdit = new QLineEdit(layoutWidget);
        roomEdit->setObjectName("roomEdit");
        sizePolicy.setHeightForWidth(roomEdit->sizePolicy().hasHeightForWidth());
        roomEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(roomEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setEnabled(true);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_8);

        courseEdit = new QLineEdit(layoutWidget);
        courseEdit->setObjectName("courseEdit");
        sizePolicy.setHeightForWidth(courseEdit->sizePolicy().hasHeightForWidth());
        courseEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(courseEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        internalupdate = new QPushButton(layoutWidget);
        internalupdate->setObjectName("internalupdate");
        sizePolicy.setHeightForWidth(internalupdate->sizePolicy().hasHeightForWidth());
        internalupdate->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(internalupdate);

        Save = new QPushButton(layoutWidget);
        Save->setObjectName("Save");
        sizePolicy.setHeightForWidth(Save->sizePolicy().hasHeightForWidth());
        Save->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(Save);

        Delete = new QPushButton(layoutWidget);
        Delete->setObjectName("Delete");
        sizePolicy.setHeightForWidth(Delete->sizePolicy().hasHeightForWidth());
        Delete->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(Delete);


        verticalLayout_2->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(Internal);
        widget = new QWidget(teacherdashboard);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 90, 121, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(widget);
        homeButton->setObjectName("homeButton");
        sizePolicy.setHeightForWidth(homeButton->sizePolicy().hasHeightForWidth());
        homeButton->setSizePolicy(sizePolicy);
        homeButton->setMouseTracking(false);
        homeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(homeButton);

        assignmentButton = new QPushButton(widget);
        assignmentButton->setObjectName("assignmentButton");
        sizePolicy.setHeightForWidth(assignmentButton->sizePolicy().hasHeightForWidth());
        assignmentButton->setSizePolicy(sizePolicy);
        assignmentButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(assignmentButton);

        internalButton = new QPushButton(widget);
        internalButton->setObjectName("internalButton");
        sizePolicy.setHeightForWidth(internalButton->sizePolicy().hasHeightForWidth());
        internalButton->setSizePolicy(sizePolicy);
        internalButton->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(internalButton);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 14, 158);\n"
"color: white"));

        verticalLayout->addWidget(pushButton_6);


        retranslateUi(teacherdashboard);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(teacherdashboard);
    } // setupUi

    void retranslateUi(QDialog *teacherdashboard)
    {
        teacherdashboard->setWindowTitle(QCoreApplication::translate("teacherdashboard", "Dialog", nullptr));
        label->setText(QString());
        status->setText(QCoreApplication::translate("teacherdashboard", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("teacherdashboard", "Time:", nullptr));
        label_15->setText(QCoreApplication::translate("teacherdashboard", "Date:", nullptr));
        label_18->setText(QCoreApplication::translate("teacherdashboard", "Course Code:", nullptr));
        lineEdit_9->setText(QString());
        assignmentupdate->setText(QCoreApplication::translate("teacherdashboard", "Update", nullptr));
        label_4->setText(QCoreApplication::translate("teacherdashboard", "Time:", nullptr));
        label_6->setText(QCoreApplication::translate("teacherdashboard", "Date:", nullptr));
        label_7->setText(QCoreApplication::translate("teacherdashboard", "Block:", nullptr));
        blockEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("teacherdashboard", "Room No:", nullptr));
        label_8->setText(QCoreApplication::translate("teacherdashboard", "Course Code:", nullptr));
        courseEdit->setText(QString());
        internalupdate->setText(QCoreApplication::translate("teacherdashboard", "Update", nullptr));
        Save->setText(QCoreApplication::translate("teacherdashboard", "Save", nullptr));
        Delete->setText(QCoreApplication::translate("teacherdashboard", "Delete", nullptr));
        homeButton->setText(QCoreApplication::translate("teacherdashboard", "HOME", nullptr));
        assignmentButton->setText(QCoreApplication::translate("teacherdashboard", "ASSIGNMENT", nullptr));
        internalButton->setText(QCoreApplication::translate("teacherdashboard", "INTERNAL", nullptr));
        pushButton_6->setText(QCoreApplication::translate("teacherdashboard", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherdashboard: public Ui_teacherdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERDASHBOARD_H
