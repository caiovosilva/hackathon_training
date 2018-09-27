#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contacorrente.h"
#include "contapoupanca.h"
#include "cliente.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ContaPoupanca contaPoupanca = ContaPoupanca("999");
    contaPoupanca.setSaldo(10);

    Cliente cliente = Cliente("Caio");
    cliente.setConta(&contaPoupanca);

    ui->label->setText(cliente.toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}


//QMessageBox::information(
//       this,
//       tr("Music Store"),
//       tr(musicStore.displayHoursOfOperation().toUtf8().constData()));
