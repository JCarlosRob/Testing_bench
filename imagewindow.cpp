#include "imagewindow.h"
#include "ui_imagewindow.h"
#include "Practica3.h"
#include <QImage>
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>

ImageWindow::ImageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageWindow)
{
    ui->setupUi(this);
    iteracion = 1;
}

ImageWindow::~ImageWindow()
{

    delete ui;

}

void ImageWindow::on_Button_clicked()
{
    QFileDialog filedlg;

    pathImage = filedlg.getOpenFileName();
    file.setFile(pathImage);
    ui->lineEditRuta->setText(file.absoluteFilePath());

}

void ImageWindow::on_ButtonEjecutar_clicked()
{

    QMessageBox msg;
    double prueba1=0, prueba2=0, prueba3=0, prueba4=0, prueba5=0;

    if (pathImage==""){

        msg.setText("Error, no se ha seleccionado imagen.");
        msg.exec();

     }
     else {

        switch (iteracion){
            case 1:
                pathSave = file.absolutePath()+"/Copy1_"+file.fileName();
                prueba1 = practica3.tratarImage(img, pathImage, pathSave);
                ui->lineEdit1->setText(QString::number(prueba1));
                break;

            case 2:
                pathSave = file.absolutePath()+"/Copy2_"+file.fileName();
                prueba2 = practica3.tratarImage(img, pathImage, pathSave);
                ui->lineEdit2->setText(QString::number(prueba2));
                break;

            case 3:
                pathSave = file.absolutePath()+"/Copy3_"+file.fileName();
                prueba3 = practica3.tratarImage(img, pathImage, pathSave);
                ui->lineEdit3->setText(QString::number(prueba3));
                break;

            case 4:
                pathSave = file.absolutePath()+"/Copy4_"+file.fileName();
                prueba4 = practica3.tratarImage(img, pathImage, pathSave);
                ui->lineEdit4->setText(QString::number(prueba4));
                break;

            case 5:
                pathSave = file.absolutePath()+"/Copy5_"+file.fileName();
                prueba5 = practica3.tratarImage(img, pathImage, pathSave);
                ui->lineEdit5->setText(QString::number(prueba5));
                break;

        }

        iteracion++;

        if (this->iteracion>5) {

            double TE1 = ui->lineEdit1->text().toDouble();
            double TE2 = ui->lineEdit2->text().toDouble();
            double TE3 = ui->lineEdit3->text().toDouble();
            double TE4 = ui->lineEdit4->text().toDouble();
            double TE5 = ui->lineEdit5->text().toDouble();

            double tMedia = (TE1 + TE2 + TE3 + TE4 + TE5) / 5;
            ui->lineEditMedia->setText(QString::number(tMedia));

            ui->ButtonEjecutar->setEnabled(false);
        }

     }
}
