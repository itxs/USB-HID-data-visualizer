#ifndef USB_HID_H
#define USB_HID_H

#include <QObject>
#include <QString>
#include "hidapi.h"

enum ReadingMode
{
    BlockingMode = 0,
    NonbBockingMode = 1
};

class USB_HID
{
public:
    USB_HID(quint16 vid, quint16 pid);
    void Enumerate(quint16 vid = 0, quint16 pid = 0);
    void Open(quint16 vid, quint16 pid, QString serial);
    QString GetManufacturer();
    QString GetProduct();
    QString GetSerial();
    QString GetStringByIndex(qint32 index);
    void SetReadingMode(ReadingMode mode);
    void SetFeature(quint8* buffer, quint8 size);
    void GetFeature(quint8* buffer, quint8 size);
    void Read(quint8* buffer, quint8 size);
    void Write(quint8* buffer, quint8 size);
    void Close();
private:
    hid_device* handle;
    quint16 venddor_id;
    quint16 product_id;
    QString product_serial;
};

#endif // USB_H
