#ifndef LISTCONTROLLER_H
#define LISTCONTROLLER_H

#include <QApplication>
#include <QListWidget>

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
    void onListDoubleClicked(const QModelIndex& index)
    {
        if (!index.isValid())
        {
            return;
        }
        if(QListWidget* listWgt = dynamic_cast<QListWidget*>( sender()))
        {
            if (QListWidgetItem* item = listWgt->takeItem(index.row()))
            {
                delete item;
            }
        }
    }
    void onDeleteItems()
    {
        if(m_listWgt)
        {
            QList<QListWidgetItem*> items = m_listWgt->selectedItems();
            foreach(QListWidgetItem* item, items)
            {
                int row = m_listWgt->row(item);
                m_listWgt->takeItem(row);
                delete item;
            }
        }
    }
private:
    QListWidget* m_listWgt;
};

#endif // LISTCONTROLLER_H
