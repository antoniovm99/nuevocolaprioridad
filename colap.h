#ifndef __COLAP_H__
#define __COLAP_H__

#include <list>
#include "colap.h"
#include "proceso.h"

class ColaPrioridad {
	private:
		list <Proceso> buffer;
	public:
		ColaPrioridad ();
		bool comparar(Proceso p1, Proceso p2);
		void adicionar (Proceso p);
		void retirar ();
		bool estaVacia ();
		Proceso obtenerPrimero ();
		void mostrarse ();
};
#endif
