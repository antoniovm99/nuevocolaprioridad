#include <cstdlib>
#include <iostream>
#include <vector>
#include "colap.h"
#include "proceso.h"

using namespace std;


//obvio
ColaPrioridad :: ColaPrioridad(){}


//creada por mi e idea de compañeros
bool ColaPrioridad :: comparar(Proceso p1, Proceso p2){
	if(p1.getPrioridad() >= p2.getPrioridad()){
		return true;
	}
	else{
		return false;
	}
}

//unico metodo
void ColaPrioridad :: adicionar(Proceso p){
  buffer.push_back(p);
}

//unico metodo
void ColaPrioridad :: retirar(){
  buffer.pop_front();
}

//dado por garreta
bool ColaPrioridad :: estaVacia(){
	bool b= buffer.empty();
	return b;
}

//unico metodo
Proceso ColaPrioridad :: obtenerPrimero(){
	return buffer.front();
}

//dada por garreta
void ColaPrioridad :: mostrarse(){
  list <Proceso> :: iterator i;
	for (Proceso i = buffer.front(); i != buffer.back(); i++) {
      Proceso p = *i
      i.mostrarse();
    }
}
