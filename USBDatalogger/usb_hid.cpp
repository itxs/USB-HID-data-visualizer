#include "usb_hid.h"

USB_HID::USB_HID(quint16 vid, quint16 pid)
{
    venddor_id = vid;
    product_id = pid;
    hid_init();
}

void USB_HID::Enumerate(quint16 vid, quint16 pid)
{
    hid_enumerate(vid, pid);
}

void USB_HID::Open(quint16 vid, quint16 pid, QString serial)
{
    wchar_t str[128];
    serial.toWCharArray(str);
    handle = hid_open(vid, pid, str);
}

QString USB_HID::GetManufacturer()
{
    QString qstr;
    wchar_t str[128];
    hid_get_manufacturer_string(handle, str, sizeof(str) - 1);
    qstr.fromWCharArray(str);
    return qstr;
}

QString USB_HID::GetProduct()
{
    QString qstr;
    wchar_t str[128];
    hid_get_product_string(handle, str, sizeof(str) - 1);
    qstr.fromWCharArray(str);
    return qstr;
}

QString USB_HID::GetSerial()
{
    QString qstr;
    wchar_t str[128];
    hid_get_serial_number_string(handle, str, sizeof(str) - 1);
    qstr.fromWCharArray(str);
    return qstr;
}

QString USB_HID::GetStringByIndex(qint32 index)
{
    QString qstr;
    wchar_t str[128];
    hid_get_indexed_string(handle, index, str, sizeof(str) - 1);
    qstr.fromWCharArray(str);
    return qstr;
}

void USB_HID::SetReadingMode(ReadingMode mode)
{
    hid_set_nonblocking(handle, mode);
}

void USB_HID::SetFeature(quint8 *buffer, quint8 size)
{
    hid_send_feature_report(handle, buffer, size);
}

void USB_HID::GetFeature(quint8 *buffer, quint8 size)
{
    hid_get_feature_report(handle, buffer, size);
}

void USB_HID::Read(quint8 *buffer, quint8 size)
{
    hid_read(handle, buffer, size);
}

void USB_HID::Write(quint8 *buffer, quint8 size)
{
    hid_write(handle, buffer, size);
}

void USB_HID::Close()
{
    hid_close(handle);
}
