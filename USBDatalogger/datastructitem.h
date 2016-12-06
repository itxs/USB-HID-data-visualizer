#ifndef DATASTRUCTITEM_H
#define DATASTRUCTITEM_H

#include <QListWidget>

enum ItemType
{
    ItemAdder = 0,
    Unsigned8,
    Unsigned16,
    Unsigned32,
    Signed8,
    Signed16,
    Signed32,
    Float,
    Double
};

class DataStructItem : public QListWidgetItem
{
public:
    explicit DataStructItem(QListWidgetItem *parent = 0);
    //DataStructItem(QListWidget *parent = 0, ItemType type = Unsigned8, bool selected = false) : Type(type), Selected(selected){};
signals:

public slots:
private:
    ItemType Type;
    bool Selected;
};

#endif // DATASTRUCTITEM_H
