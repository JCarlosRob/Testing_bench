#include "Practica3.h"
#include <QImage>
#include <QString>
#include <time.h>


Practica3::Practica3()
{

}

Practica3::~Practica3()
{

}

double Practica3::tratarImage(QImage img, QString path, QString pathSave)
{
    clock_t start, end;
    int gray;

    start = clock();

    img.load(path);

    for(int i=0; i<img.width(); i++){
        for(int j=0; j<img.height(); j++){
            gray = qGray(img.pixel(i,j));
            img.setPixelColor(i,j,QColor(gray,gray,gray,255));
        }
    }

    img.save(pathSave);

    end = clock();

    return (double(end-start))/CLOCKS_PER_SEC;

}

double Practica3::ordenarVector(vector<int> v)
{
    clock_t start, end;
    int nElements = v.size();

    start = clock();

    for (int i = 1; i < nElements; i++) {
        for (int j = 0; j < nElements-i; j++) {
            if (v[j] > v[j+1]) {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    end = clock();

    return (double(end-start))/CLOCKS_PER_SEC;

}
