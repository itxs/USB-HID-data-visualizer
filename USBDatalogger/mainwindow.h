#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidget>
#include <QShortcut>
#include <QLayout>
#include <QComboBox>
#include <QLabel>
#include <QVector>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include "listcontroller.h"
#include "usb_hid.h"
#include "chartview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void onPushButtonIncrease();
    void onPushButtonDecrease();
    void onPushButtonClear();
    void onCheckBoxClicked(int newstate);
    void onKeyboardDelClicked();
    void onDoubleClicked();
private:
    void makeItem(QListWidget* lstWgt, ItemType type);

    Ui::MainWindow *ui;
    ListController* Listcontroller;
    QShortcut* Shortcuts[3];
    USB_HID* USB;
    QLabel* DevStatus;
    QGraphicsScene* Chart;
    ChartView* chartview;
    QVector<QGraphicsItem*> plots;
};

#endif // MAINWINDOW_H
