#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listcontroller.h"
#include "datastructurefield.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < 3; i++)
    {
        makeItem(ui->listWidget_datastruct, DataField);
    }
    makeItem(ui->listWidget_datastruct, Adder);

    listcontroller = new ListController(ui->listWidget_datastruct);
    connect(ui->listWidget_datastruct, SIGNAL(doubleClicked(QModelIndex)), SLOT(onDoubleClicked()));

    shortcut[0] = new QShortcut(QKeySequence(Qt::Key_Delete), ui->listWidget_datastruct);
    shortcut[1] = new QShortcut(QKeySequence(Qt::Key_Plus), ui->listWidget_datastruct);
    shortcut[2] = new QShortcut(QKeySequence(Qt::Key_Minus), ui->listWidget_datastruct);
    connect(shortcut[0], SIGNAL(activated()), SLOT(onKeyboardDelClicked()));
    connect(shortcut[1], SIGNAL(activated()), SLOT(onPushButtonIncrease()));
    connect(shortcut[2], SIGNAL(activated()), SLOT(onPushButtonDecrease()));
    connect(ui->pushButton_clearstruct, SIGNAL(pressed()), SLOT(onPushButtonClear()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makeItem(QListWidget* TargetListWidget, ItemType type)
{
    QWidget* widget = new QWidget;
    QLayout* widget_layout = new QHBoxLayout;
    widget_layout->setMargin(1);
    if (type == DataField)
    {
        QComboBox* combo_box = new QComboBox();
        combo_box->addItems(LIST_ITEMS);
        QCheckBox* check_box = new QCheckBox();
        check_box->setMaximumSize(15,15);
        connect(check_box, SIGNAL(stateChanged(int)), SLOT(onCheckBoxClicked()));
        widget_layout->addWidget(check_box);
        widget_layout->addWidget(combo_box);
    }
    else
    {
        QPushButton* BtIncreaseItemsNumber = new QPushButton("+");
        QPushButton* BtDecreaseItemsNumber = new QPushButton("-");
        BtIncreaseItemsNumber->setMaximumSize(20, 20);
        BtDecreaseItemsNumber->setMaximumSize(20, 20);
        connect(BtIncreaseItemsNumber, SIGNAL(pressed()), SLOT(onPushButtonIncrease()));
        connect(BtDecreaseItemsNumber, SIGNAL(pressed()), SLOT(onPushButtonDecrease()));
        widget_layout->addWidget(BtIncreaseItemsNumber);
        widget_layout->addWidget(BtDecreaseItemsNumber);
    }
    widget->setLayout(widget_layout);
    QListWidgetItem* item = new QListWidgetItem(TargetListWidget, type);
    item->setSizeHint(widget->sizeHint() - QSize(2, 5));
    TargetListWidget->setItemWidget(item, widget);
}

void MainWindow::onCheckBoxClicked()
{
    if (QCheckBox* btn = qobject_cast<QCheckBox*>(sender()))
    {
        /*if (QLineEdit* e = btn->parent()->findChild<QLineEdit*>())
        {
            QMessageBox::information(this, "jkshajc", e->text());
            return;
        }*/
    }
}

void MainWindow::onPushButtonIncrease()
{
    listcontroller->onDeleteItems(DeleteAdder);
    makeItem(ui->listWidget_datastruct, DataField);
    makeItem(ui->listWidget_datastruct, Adder);
}

void MainWindow::onPushButtonDecrease()
{
    listcontroller->onDeleteItems(DeleteLastItem);
}

void MainWindow::onPushButtonClear()
{
    if (qobject_cast<QPushButton*>(sender()))
    {
        listcontroller->onDeleteItems(DeleteAllItems);
        makeItem(ui->listWidget_datastruct, Adder);
    }
}

void MainWindow::onKeyboardDelClicked()
{
    listcontroller->onDeleteItems(DeleteFewItems);
}

void MainWindow::onDoubleClicked()
{
    if (qobject_cast<QPushButton*>(sender()))
    {
        listcontroller->onDeleteItems(DeleteFewItems);
    }
}
