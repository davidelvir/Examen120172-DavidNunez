#include "Diseno.h"
#include <string>
using namespace std;

Diseno::Diseno(){

}

Diseno::Diseno(string terreno, string id, string nombre, string autor, string fecha):Obra(id,nombre,autor,fecha){
  this-> terreno = terreno;
}
