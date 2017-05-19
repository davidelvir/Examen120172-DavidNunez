#include "Obra.h"
#include <string>
using namespace std;
#ifndef DISENO_H
#define DISENO_H

class Diseno : public Obra{
  public:
    
    string terreno;

    Diseno();

    Diseno(string,string,string,string,string);

};

#endif
