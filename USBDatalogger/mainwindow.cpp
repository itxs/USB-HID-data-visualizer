#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listcontroller.h"
#include "datastructurefield.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFocus();

    ui->statusBar->addWidget(DevStatus = new QLabel("Не подключено"));
    DevStatus->setFont(QFont("MS Shell Dlg 2", 10));
    chartview = new ChartView(this);
    chartview->setScene(Chart = new QGraphicsScene());
    chartview->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    ui->verticalLayout_2->addWidget(chartview);
    ui->verticalLayout_2->removeItem(ui->horizontalLayout_4);
    ui->verticalLayout_2->addItem(ui->horizontalLayout_4);

    Chart->addPath(QPainterPath(QPointF(50,50)));
    Chart->addPath(QPainterPath(QPointF(100,50)));

    plots.push_back(Chart->addLine(0,0,500,100));
    plots[0]->hide();

    USB = new USB_HID(0x4357, 0x0001);

    makeItem(ui->listWidget_datastruct, Adder);
    Listcontroller = new ListController(ui->listWidget_datastruct);
    connect(ui->listWidget_datastruct, SIGNAL(doubleClicked(QModelIndex)), SLOT(onDoubleClicked()));

    Shortcuts[0] = new QShortcut(QKeySequence(Qt::Key_Delete), ui->listWidget_datastruct);
    Shortcuts[1] = new QShortcut(QKeySequence(Qt::Key_Plus), ui->listWidget_datastruct);
    Shortcuts[2] = new QShortcut(QKeySequence(Qt::Key_Minus), ui->listWidget_datastruct);
    connect(Shortcuts[0], SIGNAL(activated()), SLOT(onKeyboardDelClicked()));
    connect(Shortcuts[1], SIGNAL(activated()), SLOT(onPushButtonIncrease()));
    connect(Shortcuts[2], SIGNAL(activated()), SLOT(onPushButtonDecrease()));
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
    QListWidgetItem* item = new QListWidgetItem(TargetListWidget, type);
    widget_layout->setMargin(1);
    if (type == DataField)
    {
        QComboBox* combo_box = new QComboBox();
        combo_box->addItems(LIST_ITEMS);
        QCheckBox* check_box = new QCheckBox();
        check_box->setMaximumSize(15,15);
        connect(check_box, SIGNAL(stateChanged(int)), SLOT(onCheckBoxClicked(int)));
        widget_layout->addWidget(check_box);
        widget_layout->addWidget(combo_box);
    }
    else
    {
        widget->setMinimumHeight(40);
        QPushButton* BtIncreaseItemsNumber = new QPushButton("+");
        QPushButton* BtDecreaseItemsNumber = new QPushButton("-");
        BtIncreaseItemsNumber->setMaximumSize(45, 40);
        BtDecreaseItemsNumber->setMaximumSize(45, 40);
        connect(BtIncreaseItemsNumber, SIGNAL(pressed()), SLOT(onPushButtonIncrease()));
        connect(BtDecreaseItemsNumber, SIGNAL(pressed()), SLOT(onPushButtonDecrease()));
        widget_layout->addWidget(BtIncreaseItemsNumber);
        widget_layout->addWidget(BtDecreaseItemsNumber);
        widget_layout->setMargin(0);
    }
    widget->setLayout(widget_layout);
    item->setSizeHint(widget->sizeHint() - QSize(2, 5));
    TargetListWidget->setItemWidget(item, widget);
}

void MainWindow::onCheckBoxClicked(int newstate)
{
    if (newstate)
    {
        plots[0]->show();
    }
    else
    {
        plots[0]->hide();
    }
}

void MainWindow::onPushButtonIncrease()
{
    Listcontroller->onDeleteItems(DeleteAdder);
    makeItem(ui->listWidget_datastruct, DataField);
    makeItem(ui->listWidget_datastruct, Adder);
}

void MainWindow::onPushButtonDecrease()
{
    Listcontroller->onDeleteItems(DeleteLastItem);
}

void MainWindow::onPushButtonClear()
{
    if (qobject_cast<QPushButton*>(sender()))
    {
        Listcontroller->onDeleteItems(DeleteAllItems);
        makeItem(ui->listWidget_datastruct, Adder);
    }
}

void MainWindow::onKeyboardDelClicked()
{
    Listcontroller->onDeleteItems(DeleteFewItems);
}

void MainWindow::onDoubleClicked()
{
    if (qobject_cast<QPushButton*>(sender()))
    {
        Listcontroller->onDeleteItems(DeleteFewItems);
    }
}
