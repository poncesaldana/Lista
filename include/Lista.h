/**
Nombre de los integrantes: Ponce Dominguez Isaac Luis
		           Saldaña Avila Armando
Descripcion: La clase lista, con atributos y metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/
#include "Nodo.h" 

class Lista
{
public:
	Nodo *H;
	Nodo *T;
	//constructores
	Lista();
	Lista(int Dato);
	//metodos
	void InsertarP(int dato);
	void InsertarF(int dato);
	void InsertarRef(int dato, int ref);
	bool isVacio();
	Nodo Buscar(int ref);
	Nodo Buscar(int ref, Nodo n);
	void BorrarP();
	void BorrarF();
	void BorrarRef(int ref);
	
};
