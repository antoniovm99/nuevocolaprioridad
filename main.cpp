#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unidadp.h"
#include "proceso.h"
#include "colap.h"


using namespace std;

int main(){
	ColaPrioridad cp;
	UnidadProcesamiento cpu;

	for(int i=0; i<=100; i++){
		Proceso p(i);
		p.mostrarse();
		cp.adicionar(p);
	}

	while(cp.estaVacia() != true){
		cp.mostrarse();
		Proceso q = cp.obtenerPrimero();
		cp.retirar();
		cpu.procesar(q);
		if(getEstado()!="Finished"){
			cpu.adicionar(q);
		}
	}
	return 0;
}
