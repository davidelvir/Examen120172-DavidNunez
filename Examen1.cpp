#include <iostream>
#include <string>
#include <vector>
#include "Escultura.h"
#include "Literatura.h"
#include "Diseno.h"
#include "Pintura.h"
#include "Obra.h"

using namespace std;
int main(){
  vector<Obra>obras;
  vector<Obra>transferidas;
  /*Obra ob;
  Escultura es;
  Literatura lit;
  Diseno dis;
  Pintura p;

  vector<Diseno>prueba;
  prueba.push_back(dis);*/

  bool vivo = true;

  while(vivo){
    int op;
    cout<<"----------Menu----------"<<endl;
    cout<<"1. Agregar obra"<<endl;
    cout<<"2. Eliminar obra"<<endl;
    cout<<"3. Transferir obra"<<endl;
    cout<<"4. Listar"<<endl;
    cout<<"5. Busqueda"<<endl;
    cout<<"6. Salir"<<endl;
    cin >> op;
    switch(op){
      case 1:{
        string id;
        string nombre;
        string autor;
        string fecha;
        cout<<"Ingrese los datos generales:"<<endl;
        getline(cin,nombre);
        cout<<"Nombre de la obra:";
        getline(cin,nombre);
        cout<<"Autor de la obra:";
        getline(cin,autor);
        cout<<"Fecha en que se ingresa:";
        getline(cin,fecha);
        
             
        break;
             }
      /*case 6:
        vivo = false;
        cout << "Ha salido!"<<endl;
        break;*/
    }
  }
}

