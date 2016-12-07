#include "listcontroller.h"

void ListController::onListDoubleClicked(const QModelIndex& index)
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

void ListController::onDeleteItems(DeleteItemType delete_type)
{
    if(m_listWgt)
    {
        if (delete_type == DeleteAllItems)
        {
            m_listWgt->clear();
        }
        else
        {
            if (delete_type == DeleteFewItems)
            {
                QList<QListWidgetItem*> items = m_listWgt->selectedItems();
                foreach(QListWidgetItem* item, items)
                {
                    if (item->type() != Adder)
                    {
                        delete m_listWgt->takeItem(m_listWgt->row(item));
                    }
                }
            }
            else if (delete_type == DeleteLastItem)
            {
                delete m_listWgt->takeItem(m_listWgt->count() - 2);
            }
            else if (delete_type == DeleteAdder)
            {
                delete m_listWgt->takeItem(m_listWgt->count() - 1);
            }
        }
    }
}

void ListController::onCreateItems()
{

}
