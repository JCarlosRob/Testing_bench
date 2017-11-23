#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Practica3.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ButtonImagen_clicked();
    void on_ButtonOrdenacion_clicked();

private:
    Ui::MainWindow *ui;
    Practica3 practica3;
};

#endif // MAINWINDOW_H
