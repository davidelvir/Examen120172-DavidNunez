#ifndef OBRA_H
#define OBRA_H
#include <string>
using namespace std;

class Obra{

  public:
    string id;
    string nombre;
    string autor;
    string fecha;

    Obra();
    Obra(string,string,string,string);

    string getID();
    string getNombre();
    string getAutor();
    string getFecha();
    
};
#endif
