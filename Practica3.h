#ifndef PRACTICA3_H
#define PRACTICA3_H

#include <QImage>
#include <QString>
#include <vector>

using namespace std;

class Practica3
{
public:
    Practica3();
    ~Practica3();
    double tratarImage(QImage img, QString path, QString pathSave);
    double ordenarVector(vector<int> v);

};

#endif // PRACTICA3_H
