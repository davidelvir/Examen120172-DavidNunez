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
        cout<<"Ingrese los datos generales: "<<endl;
        getline(cin,nombre);
        cout<<"Nombre de la obra: ";
        getline(cin,nombre);
        cout<<"Autor de la obra: ";
        getline(cin,autor);
        cout<<"Fecha en que se ingresa: ";
        getline(cin,fecha);
        cout<<endl;

        cout<<"-----Elija el tipo de obra que desea agregar-----"<<endl;
        cout<<"1. Literatura"<<endl;
        cout<<"2. Escultura"<<endl;
        cout<<"3. Pintura"<<endl;
        cout<<"4. Diseño arquitectonico"<<endl;
        int op2;
        cin>>op2;
        switch(op2){
          case 1:{
            string genero;
            string epoca;
            cout<<"Ingrese el genero: ";
            cin>>genero;
            cout<<"Ingrese la epoca: ";
            cin>>epoca;
            Literatura lit(genero,epoca,id,nombre,autor,fecha);
            obras.push_back(lit);
            //cout<<obras[0].getNombre();
            break;
            }
          case 2:{
            double peso;
            string material;
            cout<<"Ingrese el peso: ";
            cin>>peso;
            cout<<"Ingrese el material: ";
            cin>>material;
            Escultura esc(peso,material,id,nombre,autor,fecha);
            obras.push_back(esc);
            break;
            }
          case 3:{
            string material;
            string tecnica;
            cout<<"Ingrese el material del lienzo: ";    
            cin>>material;
            cout<<"Ingrese la tecnica usada: ";
            cin>>tecnica;
            Pintura pin(material,tecnica,id,nombre,autor,fecha);
            obras.push_back(pin);
            break;
          }
          case 4:{
            string terreno;
            cout<<"Ingrese el terreno: ";
            cin>>terreno;
            Diseno dis(terreno,id,nombre,autor,fecha);
            obras.push_back(dis);
            break;
            }
        }
          break;
        }
        case 2:{
          int size = obras.size();
          cout<<"Elija la obra que desea borrar."<<endl;
          for(int i = 0; i < size; i++){
            cout<<i<<": "<<obras[i].getNombre()<<endl;
          }
          int borrar;
          cin>>borrar;
          obras.erase(obras.begin()+borrar);
          break;
        }
      
      /*case 6:
        vivo = false;
        cout << "Ha salido!"<<endl;
        break;*/
    }
  }
}

