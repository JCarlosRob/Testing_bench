#ifndef IMAGEWINDOW_H
#define IMAGEWINDOW_H

#include <QMainWindow>
#include "Practica3.h"
#include <QImage>
#include <QFileDialog>
#include <QFileInfo>

namespace Ui {
class ImageWindow;
}


class ImageWindow : public QMainWindow
{

     Q_OBJECT

public:

    explicit ImageWindow(QWidget *parent=0);
    ~ImageWindow();

private:
    Ui::ImageWindow *ui;
    Practica3 practica3;
    int iteracion;
    QString pathImage;
    QString pathSave;
    QImage img;
    QFileInfo file;

private slots:
    void on_Button_clicked();
    void on_ButtonEjecutar_clicked();
};

#endif // IMAGEWINDOW_H
