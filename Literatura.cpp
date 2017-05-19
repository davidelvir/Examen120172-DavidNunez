#include "Literatura.h"
#include <string>
using namespace std;
Literatura::Literatura(){

}

Literatura::Literatura(string genero,string epoca,string id,string nombre, string autor, string fecha):Obra(id,nombre,autor,fecha){

  this->genero = genero;
  this->epoca = epoca;

}
