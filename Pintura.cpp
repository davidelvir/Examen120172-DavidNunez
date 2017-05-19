#include "Pintura.h"
#include <string>

using namespace std; 

Pintura::Pintura(){

}

Pintura::Pintura(string material,string tecnica,string id, string nombre, string autor, string fecha):Obra(id, nombre, autor, fecha){

  this->material = material;
  this->tecnica = tecnica;

}
