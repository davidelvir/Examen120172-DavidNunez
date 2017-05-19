#include <iostream>
#include <string>
#include <vector>
#include "Escultura.h"
#include "Literatura.h"
#include "Diseno.h"
#include "Pintura.h"
#include "Obra.h"
#include <stdlib.h>

using namespace std;

string crearID();

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
        id = crearID();
        int sizeObras = obras.size();
        if(obras.size() == 0){
        
        }else{
          for(int i = 0; i< sizeObras; i++){
            if(id.compare(obras[i].getID())==0){
              id = crearID();
            }
          }
        }
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
        }//fin switch tipo de obra
          cout<<"Obra agregada !!"<<endl;
          break;
        }//fin case agregar
      case 2:{
        int size = obras.size();
        cout<<"Elija la obra que desea borrar: "<<endl;
        for(int i = 0; i < size; i++){
          cout<<i<<": "<<"  ID: "<<obras[i].getID()<<"  |Nombre: "<<obras[i].getNombre()<<"  |Autor: "<<obras[i].getAutor()<<"  |Fecha ingresado: "<<obras[i].getFecha()<<endl;
        }
        int borrar;
        cin>>borrar;
        obras.erase(obras.begin()+borrar);
        cout<<"Obra borrada!!"<<endl;
        break;
      }//fin case borrar
      case 3:{
        int size = obras.size();
        cout<<"Elija la obra que desea transferir: "<<endl;
        for(int i = 0; i<size;i++){
         cout<<i<<": "<<"  ID: "<<obras[i].getID()<<"  |Nombre: "<<obras[i].getNombre()<<"  |Autor: "<<obras[i].getAutor()<<"  |Fecha ingresado: "<<obras[i].getFecha()<<endl;

        }
        int transferir;
        cin>>transferir;
        transferidas.push_back(obras[transferir]);
        obras.erase(obras.begin()+transferir);
        cout<<"La obra ha sido transferida !!"<<endl;
        break;
      }//fin case trasnferir
      case 4:{
        int size = obras.size();
        int size2 = transferidas.size();
        cout<<"-----Obras en el museo-----"<<endl;
        for(int i = 0;i<size;i++){
          cout<<i<<": "<<"  ID: "<<obras[i].getID()<<"  |Nombre: "<<obras[i].getNombre()<<"  |Autor: "<<obras[i].getAutor()<<"  |Fecha ingresado: "<<obras[i].getFecha()<<endl;
         
        }
        cout<<"-------------------------"<<endl;
        cout<<"-----Obras transferidas-----"<<endl;
        for(int i = 0;i<size2;i++){

          cout<<i<<": "<<"  ID: "<<transferidas[i].getID()<<"  |Nombre: "<<transferidas[i].getNombre()<<"  |Autor: "<<transferidas[i].getAutor()<<"  |Fecha ingresado: "<<transferidas[i].getFecha()<<endl;
         
        }
        break;
      }//fin de listar
      case 5:{
        int size = obras.size();
        string filtro;
        string spam;
        getline(cin,spam);
        cout<<"Ingrese el nombre del artista que desea buscar: ";
        getline(cin,filtro);
        for(int i = 0;i<size;i++){
          if(filtro.compare(obras[i].getAutor())!=0){
            
          }else{
            //cout<<"Obras por "<<filtro<<": "<<endl;
            cout<<i<<": "<<"  ID: "<<obras[i].getID()<<"  |Nombre: "<<obras[i].getNombre()<<"  |Autor: "<<obras[i].getAutor()<<"  |Fecha ingresado: "<<obras[i].getFecha()<<endl;
           
          }
        }
        break;
      }//fin filtrar
      
      case 6:{
        vivo = false;
        cout << "Ha salido!"<<endl;
        break;
      }
    }//fin switch menu
  }//fin while
}//fin main

string crearID(){
  string retorno = "";
  int temporal;
  for(int i = 0; i<6;i++){
    temporal = rand()%16;
      if(temporal == 0){
        retorno += "0";
      }
      if(temporal == 1){
        retorno += "1";
      }
      if(temporal == 2){
        retorno += "2";
      }
      if(temporal == 3){
        retorno += "3";
      }
      if(temporal == 4){
        retorno += "4";
      }
      if(temporal == 5){
        retorno += "5";
      }
      if(temporal == 6){
        retorno += "6";
      }
      if(temporal == 7){
        retorno += "7";
      }
      if(temporal == 8){
        retorno += "8";
      }
      if(temporal == 9){
        retorno += "9";
      }
      if(temporal==10){
        retorno += "A";
      }
      if(temporal == 11){
        retorno += "B";
      }
      if(temporal == 12){
        retorno += "C";
      }
      if(temporal == 13){
        retorno += "D";
      }
      if(temporal == 14){
        retorno +="E";
      }
      if(temporal == 15){
        retorno += "F";
      }
    
  }
  return retorno;

}

