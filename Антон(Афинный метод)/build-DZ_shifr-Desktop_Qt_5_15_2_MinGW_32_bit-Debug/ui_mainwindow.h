/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *spinBox_2;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *aff_cl_in;
    QLineEdit *aff_in;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_11;
    QSpinBox *spinBox_4;
    QSpacerItem *horizontalSpacer_12;
    QToolButton *aff_cl_out;
    QLineEdit *aff_ou;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QLCDNumber *lcdNumber;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *alphabet;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *aff_time;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 800);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1000, 800));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.0795455 rgba(255, 176, 97, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.909091 rgba(41, 102, 157, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 941, 571));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 891, 521));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_4->addWidget(spinBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_4->addWidget(spinBox_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        aff_cl_in = new QToolButton(layoutWidget);
        aff_cl_in->setObjectName(QString::fromUtf8("aff_cl_in"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../152370.png"), QSize(), QIcon::Normal, QIcon::Off);
        aff_cl_in->setIcon(icon);

        horizontalLayout_4->addWidget(aff_cl_in);


        verticalLayout->addLayout(horizontalLayout_4);

        aff_in = new QLineEdit(layoutWidget);
        aff_in->setObjectName(QString::fromUtf8("aff_in"));
        aff_in->setMinimumSize(QSize(400, 400));
        aff_in->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(aff_in);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_5->addWidget(spinBox_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout_5->addWidget(spinBox_4);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        aff_cl_out = new QToolButton(layoutWidget);
        aff_cl_out->setObjectName(QString::fromUtf8("aff_cl_out"));
        aff_cl_out->setIcon(icon);

        horizontalLayout_5->addWidget(aff_cl_out);


        verticalLayout_2->addLayout(horizontalLayout_5);

        aff_ou = new QLineEdit(layoutWidget);
        aff_ou->setObjectName(QString::fromUtf8("aff_ou"));
        aff_ou->setMinimumSize(QSize(400, 400));
        aff_ou->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(aff_ou);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(890, 630, 64, 23));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 590, 931, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        alphabet = new QLineEdit(layoutWidget1);
        alphabet->setObjectName(QString::fromUtf8("alphabet"));

        horizontalLayout->addWidget(alphabet);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 670, 354, 29));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        aff_time = new QLineEdit(layoutWidget2);
        aff_time->setObjectName(QString::fromUtf8("aff_time"));

        horizontalLayout_7->addWidget(aff_time);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(560, 670, 325, 29));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_8->addWidget(lineEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207", nullptr));
        aff_cl_in->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        aff_in->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207", nullptr));
        aff_cl_out->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        aff_ou->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\210\320\270\321\204\321\200-\321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\220\321\204\321\204\320\270\320\275\320\275\321\213\320\271 \321\210\320\270\321\204\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\321\204\320\260\320\262\320\270\321\202", nullptr));
        alphabet->setText(QCoreApplication::translate("MainWindow", " \320\220\320\221\320\222\320\223\320\224\320\225\320\201\320\226\320\227\320\230\320\231\320\232\320\233\320\234\320\235\320\236\320\237\320\240\320\241\320\242\320\243\320\244\320\245\320\246\320\247\320\250\320\251\320\252\320\253\320\254\320\255\320\256\320\257\320\260\320\261\320\262\320\263\320\264\320\265\321\221\320\266\320\267\320\270\320\271\320\272\320\273\320\274\320\275\320\276\320\277\321\200\321\201\321\202\321\203\321\204\321\205\321\206\321\207\321\210\321\211\321\212\321\213\321\214\321\215\321\216\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217(\320\274\320\272\321\200\321\201):", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\270(\320\274\320\272\321\200\321\201):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
