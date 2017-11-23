#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imagewindow.h"
#include "Practica3.h"
#include <QImage>
#include <QFileDialog>
#include <QFileInfo>
#include "ordenawindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonImagen_clicked() {

    ImageWindow *img = new ImageWindow;
    img->show();

}

void MainWindow::on_ButtonOrdenacion_clicked() {

    OrdenaWindow *ord = new OrdenaWindow();
    ord->show();
}
