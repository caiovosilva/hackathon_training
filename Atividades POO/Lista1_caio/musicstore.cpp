#include "musicstore.h"
#include <QString>
#include <QTime>

MusicStore::MusicStore()
{
    owner = "sem dono";
    openingTime = QTime(9,0);
    closingTime = QTime(21,0);
}

QString MusicStore::displayHoursOfOperation(){
    return openedOrClosedMessage()+"\nPeríodo:\nDiariamente das "+openingTime.toString("HH:mm")+
            " - "+closingTime.toString("HH:mm")+"\n\n"+owner;
}

bool MusicStore::isOpen(){
    QTime now;
    now = now.currentTime();
    if(now>openingTime && now<closingTime)
        return true;
    return false;
}

void MusicStore::setOpeningTime(QTime time){
    openingTime = time;
}


void MusicStore::setClosingTime(QTime time){
    closingTime = time;
}

QString MusicStore::openedOrClosedMessage(){
    return isOpen()?"Estamos Abertos!":"Volte Amanhã!";
}

void MusicStore::setOwner(QString string){
    owner = string;
}
