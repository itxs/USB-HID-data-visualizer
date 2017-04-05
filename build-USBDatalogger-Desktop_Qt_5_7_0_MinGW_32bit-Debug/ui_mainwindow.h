/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *LoadDataStructFile;
    QAction *SaveDataStructFile;
    QAction *SaveAsDataStructFile;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_vid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_pid;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_reportid;
    QPushButton *pushButton_start;
    QListWidget *listWidget_datastruct;
    QPushButton *pushButton_clearstruct;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_screenshot;
    QCheckBox *checkBox_crosshair;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_pps;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(818, 572);
        LoadDataStructFile = new QAction(MainWindow);
        LoadDataStructFile->setObjectName(QStringLiteral("LoadDataStructFile"));
        SaveDataStructFile = new QAction(MainWindow);
        SaveDataStructFile->setObjectName(QStringLiteral("SaveDataStructFile"));
        SaveAsDataStructFile = new QAction(MainWindow);
        SaveAsDataStructFile->setObjectName(QStringLiteral("SaveAsDataStructFile"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(21, 20));

        horizontalLayout_3->addWidget(label);

        lineEdit_vid = new QLineEdit(centralWidget);
        lineEdit_vid->setObjectName(QStringLiteral("lineEdit_vid"));
        sizePolicy.setHeightForWidth(lineEdit_vid->sizePolicy().hasHeightForWidth());
        lineEdit_vid->setSizePolicy(sizePolicy);
        lineEdit_vid->setMinimumSize(QSize(70, 20));
        lineEdit_vid->setMaximumSize(QSize(70, 20));

        horizontalLayout_3->addWidget(lineEdit_vid);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(21, 20));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_pid = new QLineEdit(centralWidget);
        lineEdit_pid->setObjectName(QStringLiteral("lineEdit_pid"));
        sizePolicy.setHeightForWidth(lineEdit_pid->sizePolicy().hasHeightForWidth());
        lineEdit_pid->setSizePolicy(sizePolicy);
        lineEdit_pid->setMinimumSize(QSize(70, 20));
        lineEdit_pid->setMaximumSize(QSize(70, 20));

        horizontalLayout_2->addWidget(lineEdit_pid);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(50, 20));
        label_4->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label_4);

        lineEdit_reportid = new QLineEdit(centralWidget);
        lineEdit_reportid->setObjectName(QStringLiteral("lineEdit_reportid"));
        sizePolicy.setHeightForWidth(lineEdit_reportid->sizePolicy().hasHeightForWidth());
        lineEdit_reportid->setSizePolicy(sizePolicy);
        lineEdit_reportid->setMinimumSize(QSize(40, 20));
        lineEdit_reportid->setMaximumSize(QSize(40, 20));

        horizontalLayout->addWidget(lineEdit_reportid);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        sizePolicy.setHeightForWidth(pushButton_start->sizePolicy().hasHeightForWidth());
        pushButton_start->setSizePolicy(sizePolicy);
        pushButton_start->setMinimumSize(QSize(100, 0));
        pushButton_start->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(pushButton_start);

        listWidget_datastruct = new QListWidget(centralWidget);
        listWidget_datastruct->setObjectName(QStringLiteral("listWidget_datastruct"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget_datastruct->sizePolicy().hasHeightForWidth());
        listWidget_datastruct->setSizePolicy(sizePolicy1);
        listWidget_datastruct->setMinimumSize(QSize(100, 0));
        listWidget_datastruct->setMaximumSize(QSize(100, 16777215));
        listWidget_datastruct->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(listWidget_datastruct);

        pushButton_clearstruct = new QPushButton(centralWidget);
        pushButton_clearstruct->setObjectName(QStringLiteral("pushButton_clearstruct"));
        sizePolicy.setHeightForWidth(pushButton_clearstruct->sizePolicy().hasHeightForWidth());
        pushButton_clearstruct->setSizePolicy(sizePolicy);
        pushButton_clearstruct->setMinimumSize(QSize(100, 0));
        pushButton_clearstruct->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(pushButton_clearstruct);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton_screenshot = new QPushButton(centralWidget);
        pushButton_screenshot->setObjectName(QStringLiteral("pushButton_screenshot"));

        horizontalLayout_4->addWidget(pushButton_screenshot);

        checkBox_crosshair = new QCheckBox(centralWidget);
        checkBox_crosshair->setObjectName(QStringLiteral("checkBox_crosshair"));

        horizontalLayout_4->addWidget(checkBox_crosshair);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        lcdNumber_pps = new QLCDNumber(centralWidget);
        lcdNumber_pps->setObjectName(QStringLiteral("lcdNumber_pps"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lcdNumber_pps->setPalette(palette);
        lcdNumber_pps->setSmallDecimalPoint(true);
        lcdNumber_pps->setDigitCount(4);
        lcdNumber_pps->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_pps->setProperty("value", QVariant(0));
        lcdNumber_pps->setProperty("intValue", QVariant(0));

        horizontalLayout_4->addWidget(lcdNumber_pps);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(LoadDataStructFile);
        menu->addAction(SaveDataStructFile);
        menu->addAction(SaveAsDataStructFile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        LoadDataStructFile->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \321\207\321\202\320\265\320\275\320\270\321\217", 0));
        SaveDataStructFile->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \321\207\321\202\320\265\320\275\320\270\321\217", 0));
        SaveAsDataStructFile->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \321\207\321\202\320\265\320\275\320\270\321\217 \320\272\320\260\320\272", 0));
        label->setText(QApplication::translate("MainWindow", "VID:", 0));
        label_2->setText(QApplication::translate("MainWindow", "PID:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Report ID:", 0));
        pushButton_start->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", 0));
        pushButton_clearstruct->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0));
        pushButton_screenshot->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202", 0));
        checkBox_crosshair->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\206\320\265\320\273 \320\272\321\203\321\200\321\201\320\276\321\200\320\260", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\207 \320\262 \321\201\320\265\320\272\321\203\320\275\320\264\321\203:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
