#ifndef USB_HID_H
#define USB_HID_H

#include <QObject>
#include <QString>
#include "hidapi.h"

enum ReadingMode
{
    Sync = 0,
    Async
};

class USB_HID
{
public:
    explicit USB_HID(quint16 pid, quint16 vid);
    void Enumerate(quint16 pid = 0, quint16 vid = 0);
    void Open(quint16 pid, quint16 vid, QString serial);
    QString GetManufacturer();
    QString GetProduct();
    QString GetSerial();
    QString GetStringByIndex(qint32 index);
    void SetReadingMode(ReadingMode mode);
    void SetFeature(quint8* buffer, quint8* size);
    void GetFeature(quint8* buffer, quint8* size);
    void Read(quint8* buffer, quint8* size);
    void Write(quint8* buffer, quint8* size);
    void Close();
private:
    hid_device* handle;
    quint16 device_id;
    quint16 product_id;
    QString product_serial;
};

#endif // USB_H
