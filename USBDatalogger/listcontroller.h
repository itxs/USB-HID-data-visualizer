#ifndef LISTCONTROLLER_H
#define LISTCONTROLLER_H

#include <QApplication>
#include <QListWidget>

enum ItemType
{
    DataField = 0,
    Adder
};

enum DeleteItemType
{
    DeleteFewItems = 1,
    DeleteAllItems,
    DeleteLastItem,
    DeleteAdder
};

static const QStringList LIST_ITEMS = QStringList() << "uint8_t"
                                                    << "uint16_t"
                                                    << "uint32_t"
                                                    << "int8_t"
                                                    << "int16_t"
                                                    << "int32_t"
                                                    << "float"
                                                    << "double";

class ListController : public QObject
{
    Q_OBJECT
public:
    ListController( QListWidget* listWgt ) : m_listWgt( listWgt ) { }
signals:

public slots:
    void onListDoubleClicked(const QModelIndex& index);
    void onDeleteItems(DeleteItemType delete_type);
    void onCreateItems();
private:
    QListWidget* m_listWgt;
};

#endif // LISTCONTROLLER_H
