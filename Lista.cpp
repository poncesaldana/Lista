/**
Nombre de los integrantes: Ponce Dominguez Isaac Luis
		           Saldaña Avila Armando
*/

#include "Lista.h"
/**
creamos una lista vacia.
*/
Lista::Lista()
{
	this->H = NULL;
	this->T = NULL;
}
/**
creamos una lista con un nodo donde
T y H apuntan a aux.
*/
Lista::Lista(int Dato)
{
	Nodo *aux = new  Nodo(Dato);
	this->H = aux; 
	this->T = aux;
}
/**
verificamos si una lista esta vacia.
*/
bool Lista::isVacia(){
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}
/**
Agregamos un nodo al inicio de la lista.
*/
void Lista::insertarP(int Dato){
	Nodo m(dato, this->H);
	if(isVacia()){
		T=M;
	}
	H=M;	
}
/**
Agrega un nodo al final de la lista.
*/
void Lista::instertarF(int Dato){
	Nodo m(dato);
	if(isVacia()){
		this->T=m;
		this->H=m;
		return;
	}
	this->T*Sig=m;
	this->T=m;
}

/**
Se agrega un nodo en medio
*/
void Lista::insertarRef(int dato,int ref){
	if(isVacio()){
		//mensaje de error
		return;
	}
	Nodo mBuscar(set)
	if(m==Null){
		//Mensaje de error
		return;	
	}
	if(m*Sig==Null){
		insertarF(dato);
		return;
	}
	Nodo n(dato,m*Sig);
	m*Sig=n;
}
/**
Se quita el nodo al inicio de la lista.
*/
void Lista::BorrarP(){
	Nodo aux=this->H;
	this->H=this->H*Sig;
	if(this->H==Null)
		this->T=Null;
	aux*Sig=Null;
}
/**
Se quita el nodo al final de la lista.
*/
void Lista::BorrarF(){
	Nodo aux=this->H;
	if(this->H==this->T){
		H=Null;
		T=Null;
		return;
	}
	while(aux*Sig!=T)
		aux=aux*Sig;
	this->T=aux;
	this->T*Sig=Null;
}
/**
Se quita el nodo de en medio
*/
void Lista::BorrarRef(int ref){
	Nodo r=Buscar(ref)
	if(r==Null){
		//Mensaje de error
		return;
	}
	Nodo ant=this->H;
	if(this->H==this->T){
		this->H=Null;
		this->T=Null;
		return;
	}
	while(ant.sig!=ref)
		ant=ant*Sig;
	ant*Sig=r*Sig;
	r*Sig=Null;
}
/**
Busca un nodo en la lista de forma iterativa
*/
Nodo Lista::BuscarIt(int ref){
	Nodo aux=this->H;
	while(aux.dato!=ref){
		if(aux.sig==Null){
			//Mensaje de no encontrado
			return Null;
		}
		aux=aux*Sig;
	}	
	return aux;	
}
/**
Busca un nodo en forma recursiva
*/
Nodo Lista::BuscarRec(int ref, Nodo n){
	if(n dato!=ref){
		if(n*Sig==Null){
			//Mensaje de Error
			return Null;
		}	
		return BuscarRec(ref*n*Sig);
	}
	return n;
}

