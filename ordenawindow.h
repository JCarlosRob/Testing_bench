#ifndef ORDENAWINDOW_H
#define ORDENAWINDOW_H

#include <QMainWindow>
#include "Practica3.h"
#include <QString>
#include <vector>

namespace Ui {
    class OrdenaWindow;
}

class OrdenaWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrdenaWindow(QWidget *parent = 0);
    ~OrdenaWindow();

private:
    Ui::OrdenaWindow *ui;
    Practica3 practica3;

    int numEjecuciones;

private slots:
    void on_buttonInitBurbuja_clicked();

};

#endif // ORDENAWINDOW_H
