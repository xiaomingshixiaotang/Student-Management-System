/********************************************************************************
** Form generated from reading UI file 'showwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWINDOW_H
#define UI_SHOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QStackedWidget *stackedWidgetChooseFunction;
    QWidget *a_page;
    QWidget *a_widgetLayout;
    QGridLayout *gridLayout;
    QLabel *a_labelId;
    QLineEdit *a_lineEditId;
    QLabel *a_lableName;
    QLabel *a_labelGrade;
    QLineEdit *a_lineEditGrade;
    QLineEdit *a_lineEditName;
    QPushButton *a_pushButtonYes;
    QPushButton *a_pushButtonNo;
    QWidget *d_page;
    QWidget *d_widgetLayout;
    QVBoxLayout *verticalLayout;
    QLabel *d_labelChoose;
    QRadioButton *d_radioButtonId;
    QRadioButton *d_radioButtonName;
    QStackedWidget *d_stackedWidgetChoose;
    QWidget *d_pageId;
    QLabel *d_labelId;
    QLineEdit *d_lineEditId;
    QPushButton *d_pushButtonNoId;
    QPushButton *d_pushButtonYesId;
    QWidget *d_pageName;
    QLabel *d_labelName;
    QLineEdit *d_lineEditName;
    QPushButton *d_pushButtonNoName;
    QPushButton *d_pushButtonYesName;
    QWidget *c_page;
    QStackedWidget *c_stackedWidgetJump;
    QWidget *c_pageFind;
    QWidget *c_widgetLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *c_labelChoose;
    QRadioButton *c_radioButtonId;
    QRadioButton *c_radioButtonName;
    QStackedWidget *c_stackedWidgetChoose;
    QWidget *c_pageId;
    QLabel *c_labelId;
    QLineEdit *c_lineEditId;
    QPushButton *c_pushButtonNoId;
    QPushButton *c_pushButtonYesId;
    QWidget *c_pageName;
    QLabel *c_labelName;
    QLineEdit *c_lineEditName;
    QPushButton *c_pushButtonNoName;
    QPushButton *c_pushButtonYesName;
    QWidget *c_pageChange;
    QWidget *ca_widgetLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *ca_lineEditId;
    QLineEdit *ca_lineEditName;
    QLabel *ca_labelGrade;
    QLabel *ca_labelId;
    QLabel *ca_lableName;
    QLineEdit *ca_lineEditGrade;
    QPushButton *ca_pushButtonYes;
    QPushButton *ca_pushButtonNo;
    QLabel *ca_label;
    QWidget *f_page;
    QTableWidget *f_tableWidget;
    QWidget *cal_page;
    QLabel *cal_label;
    QTableWidget *cal_tableWidget;
    QPushButton *a_pushButton;
    QPushButton *d_pushButton;
    QPushButton *cle_pushButton;
    QPushButton *c_pushButton;
    QPushButton *f_pushButton;
    QPushButton *cal_pushButton;
    QLabel *labelTitle;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShowWindow)
    {
        if (ShowWindow->objectName().isEmpty())
            ShowWindow->setObjectName(QString::fromUtf8("ShowWindow"));
        ShowWindow->resize(529, 404);
        actionQuit = new QAction(ShowWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(ShowWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidgetChooseFunction = new QStackedWidget(centralwidget);
        stackedWidgetChooseFunction->setObjectName(QString::fromUtf8("stackedWidgetChooseFunction"));
        stackedWidgetChooseFunction->setGeometry(QRect(140, 80, 351, 271));
        a_page = new QWidget();
        a_page->setObjectName(QString::fromUtf8("a_page"));
        a_widgetLayout = new QWidget(a_page);
        a_widgetLayout->setObjectName(QString::fromUtf8("a_widgetLayout"));
        a_widgetLayout->setGeometry(QRect(90, 20, 168, 114));
        gridLayout = new QGridLayout(a_widgetLayout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        a_labelId = new QLabel(a_widgetLayout);
        a_labelId->setObjectName(QString::fromUtf8("a_labelId"));

        gridLayout->addWidget(a_labelId, 0, 0, 1, 1);

        a_lineEditId = new QLineEdit(a_widgetLayout);
        a_lineEditId->setObjectName(QString::fromUtf8("a_lineEditId"));

        gridLayout->addWidget(a_lineEditId, 0, 1, 1, 1);

        a_lableName = new QLabel(a_widgetLayout);
        a_lableName->setObjectName(QString::fromUtf8("a_lableName"));

        gridLayout->addWidget(a_lableName, 2, 0, 1, 1);

        a_labelGrade = new QLabel(a_widgetLayout);
        a_labelGrade->setObjectName(QString::fromUtf8("a_labelGrade"));

        gridLayout->addWidget(a_labelGrade, 3, 0, 1, 1);

        a_lineEditGrade = new QLineEdit(a_widgetLayout);
        a_lineEditGrade->setObjectName(QString::fromUtf8("a_lineEditGrade"));

        gridLayout->addWidget(a_lineEditGrade, 3, 1, 1, 1);

        a_lineEditName = new QLineEdit(a_widgetLayout);
        a_lineEditName->setObjectName(QString::fromUtf8("a_lineEditName"));

        gridLayout->addWidget(a_lineEditName, 2, 1, 1, 1);

        a_pushButtonYes = new QPushButton(a_page);
        a_pushButtonYes->setObjectName(QString::fromUtf8("a_pushButtonYes"));
        a_pushButtonYes->setGeometry(QRect(80, 170, 80, 31));
        a_pushButtonNo = new QPushButton(a_page);
        a_pushButtonNo->setObjectName(QString::fromUtf8("a_pushButtonNo"));
        a_pushButtonNo->setGeometry(QRect(200, 170, 80, 31));
        stackedWidgetChooseFunction->addWidget(a_page);
        d_page = new QWidget();
        d_page->setObjectName(QString::fromUtf8("d_page"));
        d_widgetLayout = new QWidget(d_page);
        d_widgetLayout->setObjectName(QString::fromUtf8("d_widgetLayout"));
        d_widgetLayout->setGeometry(QRect(70, 10, 211, 121));
        verticalLayout = new QVBoxLayout(d_widgetLayout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        d_labelChoose = new QLabel(d_widgetLayout);
        d_labelChoose->setObjectName(QString::fromUtf8("d_labelChoose"));

        verticalLayout->addWidget(d_labelChoose);

        d_radioButtonId = new QRadioButton(d_widgetLayout);
        d_radioButtonId->setObjectName(QString::fromUtf8("d_radioButtonId"));

        verticalLayout->addWidget(d_radioButtonId);

        d_radioButtonName = new QRadioButton(d_widgetLayout);
        d_radioButtonName->setObjectName(QString::fromUtf8("d_radioButtonName"));

        verticalLayout->addWidget(d_radioButtonName);

        d_stackedWidgetChoose = new QStackedWidget(d_page);
        d_stackedWidgetChoose->setObjectName(QString::fromUtf8("d_stackedWidgetChoose"));
        d_stackedWidgetChoose->setGeometry(QRect(70, 130, 221, 131));
        d_pageId = new QWidget();
        d_pageId->setObjectName(QString::fromUtf8("d_pageId"));
        d_labelId = new QLabel(d_pageId);
        d_labelId->setObjectName(QString::fromUtf8("d_labelId"));
        d_labelId->setGeometry(QRect(9, 9, 121, 16));
        d_lineEditId = new QLineEdit(d_pageId);
        d_lineEditId->setObjectName(QString::fromUtf8("d_lineEditId"));
        d_lineEditId->setGeometry(QRect(9, 48, 191, 22));
        d_pushButtonNoId = new QPushButton(d_pageId);
        d_pushButtonNoId->setObjectName(QString::fromUtf8("d_pushButtonNoId"));
        d_pushButtonNoId->setGeometry(QRect(120, 79, 80, 31));
        d_pushButtonYesId = new QPushButton(d_pageId);
        d_pushButtonYesId->setObjectName(QString::fromUtf8("d_pushButtonYesId"));
        d_pushButtonYesId->setGeometry(QRect(10, 79, 80, 31));
        d_stackedWidgetChoose->addWidget(d_pageId);
        d_pageName = new QWidget();
        d_pageName->setObjectName(QString::fromUtf8("d_pageName"));
        d_labelName = new QLabel(d_pageName);
        d_labelName->setObjectName(QString::fromUtf8("d_labelName"));
        d_labelName->setGeometry(QRect(9, 9, 111, 16));
        d_lineEditName = new QLineEdit(d_pageName);
        d_lineEditName->setObjectName(QString::fromUtf8("d_lineEditName"));
        d_lineEditName->setGeometry(QRect(9, 48, 191, 22));
        d_pushButtonNoName = new QPushButton(d_pageName);
        d_pushButtonNoName->setObjectName(QString::fromUtf8("d_pushButtonNoName"));
        d_pushButtonNoName->setGeometry(QRect(120, 79, 80, 31));
        d_pushButtonYesName = new QPushButton(d_pageName);
        d_pushButtonYesName->setObjectName(QString::fromUtf8("d_pushButtonYesName"));
        d_pushButtonYesName->setGeometry(QRect(10, 79, 80, 31));
        d_stackedWidgetChoose->addWidget(d_pageName);
        stackedWidgetChooseFunction->addWidget(d_page);
        c_page = new QWidget();
        c_page->setObjectName(QString::fromUtf8("c_page"));
        c_stackedWidgetJump = new QStackedWidget(c_page);
        c_stackedWidgetJump->setObjectName(QString::fromUtf8("c_stackedWidgetJump"));
        c_stackedWidgetJump->setGeometry(QRect(30, 20, 301, 231));
        c_pageFind = new QWidget();
        c_pageFind->setObjectName(QString::fromUtf8("c_pageFind"));
        c_widgetLayout = new QWidget(c_pageFind);
        c_widgetLayout->setObjectName(QString::fromUtf8("c_widgetLayout"));
        c_widgetLayout->setGeometry(QRect(40, -10, 211, 121));
        verticalLayout_2 = new QVBoxLayout(c_widgetLayout);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        c_labelChoose = new QLabel(c_widgetLayout);
        c_labelChoose->setObjectName(QString::fromUtf8("c_labelChoose"));

        verticalLayout_2->addWidget(c_labelChoose);

        c_radioButtonId = new QRadioButton(c_widgetLayout);
        c_radioButtonId->setObjectName(QString::fromUtf8("c_radioButtonId"));

        verticalLayout_2->addWidget(c_radioButtonId);

        c_radioButtonName = new QRadioButton(c_widgetLayout);
        c_radioButtonName->setObjectName(QString::fromUtf8("c_radioButtonName"));

        verticalLayout_2->addWidget(c_radioButtonName);

        c_stackedWidgetChoose = new QStackedWidget(c_pageFind);
        c_stackedWidgetChoose->setObjectName(QString::fromUtf8("c_stackedWidgetChoose"));
        c_stackedWidgetChoose->setGeometry(QRect(40, 110, 211, 111));
        c_pageId = new QWidget();
        c_pageId->setObjectName(QString::fromUtf8("c_pageId"));
        c_labelId = new QLabel(c_pageId);
        c_labelId->setObjectName(QString::fromUtf8("c_labelId"));
        c_labelId->setGeometry(QRect(9, 9, 121, 16));
        c_lineEditId = new QLineEdit(c_pageId);
        c_lineEditId->setObjectName(QString::fromUtf8("c_lineEditId"));
        c_lineEditId->setGeometry(QRect(9, 48, 191, 22));
        c_pushButtonNoId = new QPushButton(c_pageId);
        c_pushButtonNoId->setObjectName(QString::fromUtf8("c_pushButtonNoId"));
        c_pushButtonNoId->setGeometry(QRect(120, 79, 80, 31));
        c_pushButtonYesId = new QPushButton(c_pageId);
        c_pushButtonYesId->setObjectName(QString::fromUtf8("c_pushButtonYesId"));
        c_pushButtonYesId->setGeometry(QRect(10, 79, 80, 31));
        c_stackedWidgetChoose->addWidget(c_pageId);
        c_pageName = new QWidget();
        c_pageName->setObjectName(QString::fromUtf8("c_pageName"));
        c_labelName = new QLabel(c_pageName);
        c_labelName->setObjectName(QString::fromUtf8("c_labelName"));
        c_labelName->setGeometry(QRect(9, 9, 111, 16));
        c_lineEditName = new QLineEdit(c_pageName);
        c_lineEditName->setObjectName(QString::fromUtf8("c_lineEditName"));
        c_lineEditName->setGeometry(QRect(9, 48, 191, 22));
        c_pushButtonNoName = new QPushButton(c_pageName);
        c_pushButtonNoName->setObjectName(QString::fromUtf8("c_pushButtonNoName"));
        c_pushButtonNoName->setGeometry(QRect(120, 79, 80, 31));
        c_pushButtonYesName = new QPushButton(c_pageName);
        c_pushButtonYesName->setObjectName(QString::fromUtf8("c_pushButtonYesName"));
        c_pushButtonYesName->setGeometry(QRect(10, 79, 80, 31));
        c_stackedWidgetChoose->addWidget(c_pageName);
        c_stackedWidgetJump->addWidget(c_pageFind);
        c_pageChange = new QWidget();
        c_pageChange->setObjectName(QString::fromUtf8("c_pageChange"));
        ca_widgetLayout = new QWidget(c_pageChange);
        ca_widgetLayout->setObjectName(QString::fromUtf8("ca_widgetLayout"));
        ca_widgetLayout->setGeometry(QRect(60, 50, 168, 114));
        gridLayout_2 = new QGridLayout(ca_widgetLayout);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ca_lineEditId = new QLineEdit(ca_widgetLayout);
        ca_lineEditId->setObjectName(QString::fromUtf8("ca_lineEditId"));

        gridLayout_2->addWidget(ca_lineEditId, 0, 1, 1, 1);

        ca_lineEditName = new QLineEdit(ca_widgetLayout);
        ca_lineEditName->setObjectName(QString::fromUtf8("ca_lineEditName"));

        gridLayout_2->addWidget(ca_lineEditName, 2, 1, 1, 1);

        ca_labelGrade = new QLabel(ca_widgetLayout);
        ca_labelGrade->setObjectName(QString::fromUtf8("ca_labelGrade"));

        gridLayout_2->addWidget(ca_labelGrade, 4, 0, 1, 1);

        ca_labelId = new QLabel(ca_widgetLayout);
        ca_labelId->setObjectName(QString::fromUtf8("ca_labelId"));

        gridLayout_2->addWidget(ca_labelId, 0, 0, 1, 1);

        ca_lableName = new QLabel(ca_widgetLayout);
        ca_lableName->setObjectName(QString::fromUtf8("ca_lableName"));

        gridLayout_2->addWidget(ca_lableName, 2, 0, 1, 1);

        ca_lineEditGrade = new QLineEdit(ca_widgetLayout);
        ca_lineEditGrade->setObjectName(QString::fromUtf8("ca_lineEditGrade"));

        gridLayout_2->addWidget(ca_lineEditGrade, 4, 1, 1, 1);

        ca_pushButtonYes = new QPushButton(c_pageChange);
        ca_pushButtonYes->setObjectName(QString::fromUtf8("ca_pushButtonYes"));
        ca_pushButtonYes->setGeometry(QRect(40, 170, 80, 31));
        ca_pushButtonNo = new QPushButton(c_pageChange);
        ca_pushButtonNo->setObjectName(QString::fromUtf8("ca_pushButtonNo"));
        ca_pushButtonNo->setGeometry(QRect(160, 170, 80, 31));
        ca_label = new QLabel(c_pageChange);
        ca_label->setObjectName(QString::fromUtf8("ca_label"));
        ca_label->setGeometry(QRect(30, 20, 181, 16));
        c_stackedWidgetJump->addWidget(c_pageChange);
        stackedWidgetChooseFunction->addWidget(c_page);
        f_page = new QWidget();
        f_page->setObjectName(QString::fromUtf8("f_page"));
        f_tableWidget = new QTableWidget(f_page);
        if (f_tableWidget->columnCount() < 3)
            f_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        f_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        f_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        f_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        f_tableWidget->setObjectName(QString::fromUtf8("f_tableWidget"));
        f_tableWidget->setGeometry(QRect(40, 30, 311, 231));
        stackedWidgetChooseFunction->addWidget(f_page);
        cal_page = new QWidget();
        cal_page->setObjectName(QString::fromUtf8("cal_page"));
        cal_label = new QLabel(cal_page);
        cal_label->setObjectName(QString::fromUtf8("cal_label"));
        cal_label->setGeometry(QRect(80, 20, 121, 31));
        cal_tableWidget = new QTableWidget(cal_page);
        if (cal_tableWidget->columnCount() < 1)
            cal_tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cal_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        if (cal_tableWidget->rowCount() < 3)
            cal_tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cal_tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        cal_tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        cal_tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        cal_tableWidget->setObjectName(QString::fromUtf8("cal_tableWidget"));
        cal_tableWidget->setGeometry(QRect(80, 60, 221, 181));
        stackedWidgetChooseFunction->addWidget(cal_page);
        a_pushButton = new QPushButton(centralwidget);
        a_pushButton->setObjectName(QString::fromUtf8("a_pushButton"));
        a_pushButton->setGeometry(QRect(10, 110, 80, 31));
        d_pushButton = new QPushButton(centralwidget);
        d_pushButton->setObjectName(QString::fromUtf8("d_pushButton"));
        d_pushButton->setGeometry(QRect(10, 150, 80, 31));
        cle_pushButton = new QPushButton(centralwidget);
        cle_pushButton->setObjectName(QString::fromUtf8("cle_pushButton"));
        cle_pushButton->setGeometry(QRect(10, 30, 81, 31));
        c_pushButton = new QPushButton(centralwidget);
        c_pushButton->setObjectName(QString::fromUtf8("c_pushButton"));
        c_pushButton->setGeometry(QRect(10, 190, 80, 31));
        f_pushButton = new QPushButton(centralwidget);
        f_pushButton->setObjectName(QString::fromUtf8("f_pushButton"));
        f_pushButton->setGeometry(QRect(10, 230, 80, 31));
        cal_pushButton = new QPushButton(centralwidget);
        cal_pushButton->setObjectName(QString::fromUtf8("cal_pushButton"));
        cal_pushButton->setGeometry(QRect(10, 270, 80, 31));
        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(210, 30, 261, 51));
        labelTitle->setStyleSheet(QString::fromUtf8("color: rgb(149, 149, 149);\n"
"color: rgb(97, 97, 97);"));
        ShowWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShowWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 529, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        ShowWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(ShowWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ShowWindow->setStatusBar(statusBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionQuit);

        retranslateUi(ShowWindow);

        stackedWidgetChooseFunction->setCurrentIndex(3);
        d_stackedWidgetChoose->setCurrentIndex(1);
        c_stackedWidgetJump->setCurrentIndex(1);
        c_stackedWidgetChoose->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShowWindow)
    {
        ShowWindow->setWindowTitle(QApplication::translate("ShowWindow", "ShowWindow", nullptr));
        actionQuit->setText(QApplication::translate("ShowWindow", "\351\200\200\345\207\272", nullptr));
        a_labelId->setText(QApplication::translate("ShowWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        a_lableName->setText(QApplication::translate("ShowWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        a_labelGrade->setText(QApplication::translate("ShowWindow", "\346\210\220\347\273\251\357\274\232", nullptr));
        a_pushButtonYes->setText(QApplication::translate("ShowWindow", "\347\241\256\345\256\232", nullptr));
        a_pushButtonNo->setText(QApplication::translate("ShowWindow", "\345\217\226\346\266\210", nullptr));
        d_labelChoose->setText(QApplication::translate("ShowWindow", "D:\350\257\267\351\200\211\346\213\251\344\275\240\347\264\242\345\274\225\347\232\204\346\226\271\345\274\217\357\274\232", nullptr));
        d_radioButtonId->setText(QApplication::translate("ShowWindow", "\345\255\246\345\217\267", nullptr));
        d_radioButtonName->setText(QApplication::translate("ShowWindow", "\345\247\223\345\220\215", nullptr));
        d_labelId->setText(QApplication::translate("ShowWindow", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        d_pushButtonNoId->setText(QApplication::translate("ShowWindow", "\345\217\226\346\266\210", nullptr));
        d_pushButtonYesId->setText(QApplication::translate("ShowWindow", "\347\241\256\345\256\232", nullptr));
        d_labelName->setText(QApplication::translate("ShowWindow", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        d_pushButtonNoName->setText(QApplication::translate("ShowWindow", "\345\217\226\346\266\210", nullptr));
        d_pushButtonYesName->setText(QApplication::translate("ShowWindow", "\347\241\256\345\256\232", nullptr));
        c_labelChoose->setText(QApplication::translate("ShowWindow", "C:\350\257\267\351\200\211\346\213\251\344\275\240\347\264\242\345\274\225\347\232\204\346\226\271\345\274\217\357\274\232", nullptr));
        c_radioButtonId->setText(QApplication::translate("ShowWindow", "\345\255\246\345\217\267", nullptr));
        c_radioButtonName->setText(QApplication::translate("ShowWindow", "\345\247\223\345\220\215", nullptr));
        c_labelId->setText(QApplication::translate("ShowWindow", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        c_pushButtonNoId->setText(QApplication::translate("ShowWindow", "\345\217\226\346\266\210", nullptr));
        c_pushButtonYesId->setText(QApplication::translate("ShowWindow", "\347\241\256\345\256\232", nullptr));
        c_labelName->setText(QApplication::translate("ShowWindow", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        c_pushButtonNoName->setText(QApplication::translate("ShowWindow", "\345\217\226\346\266\210", nullptr));
        c_pushButtonYesName->setText(QApplication::translate("ShowWindow", "\347\241\256\345\256\232", nullptr));
        ca_labelGrade->setText(QApplication::translate("ShowWindow", "\346\210\220\347\273\251\357\274\232", nullptr));
        ca_labelId->setText(QApplication::translate("ShowWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        ca_lableName->setText(QApplication::translate("ShowWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        ca_pushButtonYes->setText(QApplication::translate("ShowWindow", "\347\241\256\345\256\232", nullptr));
        ca_pushButtonNo->setText(QApplication::translate("ShowWindow", "\350\277\224\345\233\236", nullptr));
        ca_label->setText(QApplication::translate("ShowWindow", "\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\344\277\241\346\201\257\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = f_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ShowWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = f_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ShowWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = f_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ShowWindow", "\346\210\220\347\273\251", nullptr));
        cal_label->setText(QApplication::translate("ShowWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\345\210\206\346\236\220\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cal_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("ShowWindow", "\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cal_tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ShowWindow", "\345\271\263\345\235\207\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = cal_tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ShowWindow", "\346\234\200\345\244\247\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = cal_tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ShowWindow", "\346\234\200\345\260\217\345\210\206", nullptr));
        a_pushButton->setText(QApplication::translate("ShowWindow", "\346\267\273\345\212\240", nullptr));
        d_pushButton->setText(QApplication::translate("ShowWindow", "\345\210\240\351\231\244", nullptr));
        cle_pushButton->setText(QApplication::translate("ShowWindow", "\344\270\200\351\224\256\346\270\205\347\251\272", nullptr));
        c_pushButton->setText(QApplication::translate("ShowWindow", "\344\277\256\346\224\271", nullptr));
        f_pushButton->setText(QApplication::translate("ShowWindow", "\346\230\276\347\244\272", nullptr));
        cal_pushButton->setText(QApplication::translate("ShowWindow", "\346\210\220\347\273\251\345\210\206\346\236\220", nullptr));
        labelTitle->setText(QApplication::translate("ShowWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        menu->setTitle(QApplication::translate("ShowWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWindow: public Ui_ShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWINDOW_H
