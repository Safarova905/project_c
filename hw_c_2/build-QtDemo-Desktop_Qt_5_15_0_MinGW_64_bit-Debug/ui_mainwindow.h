/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel_2;
    QLineEdit *ageLineEdit;
    QPushButton *submitPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 227);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QFont font;
        font.setPointSize(20);
        nameLabel->setFont(font);

        horizontalLayout->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setFont(font);

        horizontalLayout->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel_2 = new QLabel(centralwidget);
        nameLabel_2->setObjectName(QString::fromUtf8("nameLabel_2"));
        nameLabel_2->setFont(font);

        horizontalLayout_2->addWidget(nameLabel_2);

        ageLineEdit = new QLineEdit(centralwidget);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));
        ageLineEdit->setFont(font);

        horizontalLayout_2->addWidget(ageLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        submitPushButton = new QPushButton(centralwidget);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setFont(font);

        verticalLayout->addWidget(submitPushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "My first Qt App", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name: ", nullptr));
        nameLabel_2->setText(QCoreApplication::translate("MainWindow", "Age: ", nullptr));
        submitPushButton->setText(QCoreApplication::translate("MainWindow", "Submit name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
