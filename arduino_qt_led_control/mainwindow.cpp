#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int ret = A.connect_arduino();
    qDebug()<< "ret = " << ret;
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
    //le slot update_label suite à la reception du signal readyRead (reception des données)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clicked()
{
    A.write_to_arduino("1");
}

void MainWindow::off_clicked()
{
    A.write_to_arduino("0");
}

void MainWindow::plus_clicked()
{
    A.write_to_arduino("2");
}

void MainWindow::moins_clicked()
{
    A.write_to_arduino("3");
}

void MainWindow::update_label()
{
    QByteArray data = A.read_from_arduino();
    if (data =="1")
    {
        ui-> etat_led_13_label-> setText("ON");
    }
    else if (data =="0")
    {
        ui-> etat_led_13_label-> setText("OFF");
    }

}
