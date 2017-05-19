#include "Escultura.h"

Escultura::Escultura(){

}

Escultura::Escultura(double peso,string material, string id, string nombre, string autor,string fecha):Obra(id,nombre,autor,fecha){
  this->peso = peso;
  this->material = material;
}
