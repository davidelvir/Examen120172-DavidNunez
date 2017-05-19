#include "Obra.h"
#include <string>
#ifndef ESCULTURA_H
#define ESCULTURA_H
using namespace std;

class Escultura : public Obra{

  public:
    double peso;
    string material;

    Escultura();

    Escultura(double,string,string,string,string,string);
};

#endif
