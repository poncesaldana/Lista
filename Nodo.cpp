 /**
Nombre de los integrantes: Ponce Dominguez Isaac Luis
		           Saldaña Avila Armando
*/
 #include "Nodo.h"

/**
Constructor de un nodo con un dato y el apuntador al siguiente nodo
*/
Nodo::Nodo(int Dato, Nodo *Sig){
	this->Dato = Dato;
	this->Sig = Sig;
}
/**
Constructor de un nodo con un dato y el siguiente apuntando a NULL
*/
Nodo::Nodo(int Dato){
	this->Dato = Dato;
	this->Sig = NULL;
}
/**
asignamos un dato a un nodo
*/
void Nodo::setDato(int Dato){
	this->Dato = Dato;
}
/**
asignamos el elemento al que va a apuntar el nodo
*/
void Nodo::setSig(Nodo *Sig){
	this->Sig = Sig;
}
/**
obtenemos el dato del nodo
*/
int Nodo::getDato(){
	return this->Dato;
}
/**
obtenemos el elemento siguiente del nodo
*/
Nodo *Nodo::getSig(){
	return this->Sig;
}
