#include "Obra.h"
#include <string>

using namespace std;
Obra::Obra(){

}

Obra::Obra(string id, string nombre, string autor, string fecha){

  this->id = id;
  this->nombre = nombre;
  this->autor = autor;
  this->fecha = fecha;
}

