/********************************************************************************
** Form generated from reading UI file 'viewwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWWINDOW_H
#define UI_VIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewWindow)
    {
        if (ViewWindow->objectName().isEmpty())
            ViewWindow->setObjectName("ViewWindow");
        ViewWindow->resize(600, 600);
        centralwidget = new QWidget(ViewWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 500, 500));
        tabWidget->setTabsClosable(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 520, 131, 24));
        ViewWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        ViewWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewWindow);
        statusbar->setObjectName("statusbar");
        ViewWindow->setStatusBar(statusbar);

        retranslateUi(ViewWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ViewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ViewWindow)
    {
        ViewWindow->setWindowTitle(QCoreApplication::translate("ViewWindow", "ViewWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewWindow", "Nova Aba", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewWindow: public Ui_ViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWWINDOW_H
