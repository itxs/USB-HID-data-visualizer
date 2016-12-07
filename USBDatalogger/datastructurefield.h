#ifndef DATASTRUCTUREFIELD_H
#define DATASTRUCTUREFIELD_H

#include <QListWidgetItem>
#include <QListWidget>

enum FieldType
{
    OneBit = 0,
    Unsigned8,
    Unsigned16,
    Unsigned32,
    Unsigned64,
    Signed8,
    Signed16,
    Signed32,
    Signed64,
    Float,
    Double
};


class DataStructureField : public QListWidgetItem
{
public:
    DataStructureField(QListWidget* parent);
    FieldType type;
    bool ShowOnChart;
private:
};

#endif // DATASTRUCTUREFIELD_H
