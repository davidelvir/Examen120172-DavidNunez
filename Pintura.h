#include "Obra.h"
#include <string>
#ifndef PINTURA_H
#define PINTURA_H
using namespace std;

class Pintura : public Obra{

  public:
    string material;
    string tecnica;

    Pintura();

    Pintura(string,string,string,string,string,string);
};

#endif
