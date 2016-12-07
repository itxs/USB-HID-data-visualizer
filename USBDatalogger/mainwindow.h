#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidget>
#include <QShortcut>
#include <QLayout>
#include <QComboBox>
#include "listcontroller.h"

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
    void onCheckBoxClicked();
    void onKeyboardDelClicked();
    void onDoubleClicked();
private:
    void makeItem(QListWidget* lstWgt, ItemType type);

    Ui::MainWindow *ui;
    ListController* listcontroller;
   // QList<DataStructureField> Datastruct;
    QShortcut* shortcut[3];
    QLayout* l;
};

#endif // MAINWINDOW_H
