#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listcontroller.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < 3; i++)
    {
        makeItem(ui->listWidget_datastruct);
    }

    listcontroller = new ListController(ui->listWidget_datastruct);
    connect(ui->listWidget_datastruct, SIGNAL(doubleClicked(QModelIndex)), listcontroller, SLOT(onListDoubleClicked(QModelIndex)));

    shortcut = new QShortcut(QKeySequence(Qt::Key_Delete), ui->listWidget_datastruct);
    connect(shortcut, SIGNAL(activated()), listcontroller, SLOT(onDeleteItems()));
    connect(ui->pushButton_clearstruct, SIGNAL(clicked(bool)), ui->listWidget_datastruct, SLOT(clear()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makeItem(QListWidget* lstWgt)
{
    QWidget* wgt = new QWidget;
    QLayout* l = new QHBoxLayout;
    QComboBox* cbox = new QComboBox();
    cbox->addItems(LIST_ITEMS);
    QCheckBox* checkbox = new QCheckBox();
    connect(checkbox, SIGNAL(stateChanged(int)), SLOT(onCheckBoxClicked()));
    l->addWidget(checkbox);
    l->addWidget(cbox);
    wgt->setLayout(l);

    QListWidgetItem* item = new QListWidgetItem(lstWgt);
    item->setSizeHint(wgt->sizeHint() - QSize(2, 5));
    lstWgt->setItemWidget(item, wgt);
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
