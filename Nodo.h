/**
Nombre de los integrantes: Ponce Dominguez Isaac Luis
		           Saldaña Avila Armando
Descripcion: La clase Nodo, con atributos y metodos que 
hacen posible el funcionamiento de la clase lista, ya que 
sin nodos no hay lista (a menos que este vacia).
*/

#include <iostream>

class Nodo
{

	int Dato;
	Nodo *Sig;

	//constructores
	Nodo(int Dato, Nodo *Sig);
	Nodo(int Dato);
	
	Nodo(int Dato, Nodo *Sig){
		this->Dato=Dato;
		this->Sig=Sig;
	}

	Nodo(int Dato){
		this->Dato=Dato;
		this->Sig=NULL;
};

