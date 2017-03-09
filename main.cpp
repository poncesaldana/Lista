/**
Nombre de los integrantes: Ponce Dominguez Isaac Luis
		           Saldaña Avila Armando
*/
#include "Lista.h"

int main()
{
	Lista l = Lista(3);
	l.isVacia();
	l.insertarP(4);
	l.insertarF(5);
	l.insertarRef(5);
	l.BorrarP();
	l.BorrarF();
	l.BorrarRef(5);
	return 0;
}
