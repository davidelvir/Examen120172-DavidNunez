#ifndef LITERATURA_H
#define LITERATURA_H
#include "Obra.h"
#include <string>
using namespace std;

class Literatura : public Obra{
  public: 
    string genero;
    string epoca;
    
    Literatura();
    Literatura(string,string,string,string,string,string);

};
#endif
