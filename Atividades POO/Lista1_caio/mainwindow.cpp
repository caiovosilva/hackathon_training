#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "musicstore.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    MusicStore *musicStore = new MusicStore;
//    musicStore->setOwner("Roberto, Propietário");
//    ui->label->setText(musicStore->displayHoursOfOperation());




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MusicStore musicStore;
    musicStore.setOwner("Roberto, Propietário");
    musicStore.setOpeningTime(ui->openingTime->time());
    musicStore.setClosingTime(ui->closingTime->time());

    QMessageBox::information(
        this,
        tr("Music Store"),
        tr(musicStore.displayHoursOfOperation().toUtf8().constData()));
}
