#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidget>
#include <QShortcut>
#include <QLayout>
#include <QComboBox>
#include "datastructitem.h"
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
    void onCheckBoxClicked();
private:
    void makeItem(QListWidget* lstWgt);

    Ui::MainWindow *ui;
    ListController* listcontroller;
    QList<DataStructItem> Datastruct;
    QShortcut* shortcut;
    QLayout* l;
};

#endif // MAINWINDOW_H
