#include "ordenawindow.h"
#include "ui_ordenawindow.h"
#include <QTime>

OrdenaWindow::OrdenaWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::OrdenaWindow)
{
    ui->setupUi(this);
    this->numEjecuciones = 0;
}

OrdenaWindow::~OrdenaWindow()
{
    delete ui;
}

void OrdenaWindow::on_buttonInitBurbuja_clicked() {

    qsrand(QTime::currentTime().msec());

    double t1, t2, t3, t4, t5;
    vector<int> v;

    for (int i = 0; i < 10000; i++) {
        v.push_back(rand()%100);
    }

    this->numEjecuciones++;

    switch (numEjecuciones) {
        case 1:
            t1 = practica3.ordenarVector(v);
            ui->valueTime1->setText(QString::number(t1));
            break;
        case 2:
            t2 = practica3.ordenarVector(v);
            ui->valueTime2->setText(QString::number(t2));
            break;
        case 3:
            t3 = practica3.ordenarVector(v);
            ui->valueTime3->setText(QString::number(t3));
            break;
        case 4:
            t4 = practica3.ordenarVector(v);
            ui->valueTime4->setText(QString::number(t4));
            break;
        case 5:
            t5 = practica3.ordenarVector(v);
            ui->valueTime5->setText(QString::number(t5));
            break;
    }

    if (this->numEjecuciones >= 5) {

        double TE1 = ui->valueTime1->text().toDouble();
        double TE2 = ui->valueTime2->text().toDouble();
        double TE3 = ui->valueTime3->text().toDouble();
        double TE4 = ui->valueTime4->text().toDouble();
        double TE5 = ui->valueTime5->text().toDouble();

        double tMedia = (TE1 + TE2 + TE3 + TE4 + TE5) / 5;
        ui->valueTimeMedia->setText(QString::number(tMedia));

        ui->buttonInitBurbuja->setEnabled(false);
    }

    /*
    t1 = practica3.ordenarVector(v);
    t2 = practica3.ordenarVector(v);
    t3 = practica3.ordenarVector(v);
    t4 = practica3.ordenarVector(v);
    t5 = practica3.ordenarVector(v);

    tMedia = (t1+t2+t3+t4+t5) / 5;

    ui->valueTime1->setText(QString::number(t1));
    ui->valueTime2->setText(QString::number(t2));
    ui->valueTime3->setText(QString::number(t3));
    ui->valueTime4->setText(QString::number(t4));
    ui->valueTime5->setText(QString::number(t5));

    ui->valueTimeMedia->setText(QString::number(tMedia));
    */

}
