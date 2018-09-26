#ifndef MUSICSTORE_H
#define MUSICSTORE_H
#include <QString>
#include <QTime>

class MusicStore
{
public:
    MusicStore();
    virtual QString displayHoursOfOperation();
    void setOwner(QString string);
    void setOpeningTime(QTime time);
    void setClosingTime(QTime time);
private:
    bool isOpen();
    QString openedOrClosedMessage();
    QString owner;
    QTime openingTime;
    QTime closingTime;
};

#endif // MUSICSTORE_H
