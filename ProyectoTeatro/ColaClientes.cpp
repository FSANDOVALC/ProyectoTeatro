#include "ColaClientes.h"

ColaClientes::ColaClientes()
{
	this->longitud = 0;
	this->frente = NULL;
	this->final = NULL;
}

int ColaClientes::getLongitud()
{
	return this->longitud;
}

void ColaClientes::setLongitud(int pL)
{
	this->longitud = pL;
}

void ColaClientes::insertarElemento(string nombre, int numero, int id)
{
	NodoCliente* nuevo = new NodoCliente(nombre,numero,id);
	if (this->esVacia()) {
		frente = nuevo;
		final = nuevo;
	}
	else {
		final->setSiguiente(nuevo);
		final = nuevo;
	}
	longitud++;
}

bool ColaClientes::eliminarElemento()
{
	NodoCliente* aux;
	if (!(this->esVacia())) {
		aux = frente;
		frente = frente->getSiguiente();
		longitud--;
		delete aux;
		return true;
	}
	else {
		return false;
	}
}

int ColaClientes::eliminarElementoReturn()
{
	NodoCliente* aux;
	int dato;
	if (!(this->esVacia())) {
		aux = frente;
		dato = aux->getId();
		frente = frente->getSiguiente();
		longitud--;
		delete aux;
		return dato;
	}
	else {
		return -999;
	}
}

bool ColaClientes::eliminarElementoPos(int pPos)
{
	NodoCliente* aux = this->frente;
	int pos = 0;
	do {
		if (pPos == 0) {
			frente = aux->getSiguiente();
			//delete aux; //revisar
				return true;
		}
		else if (pPos >= 1) {
			if(pPos = pos) {
				//Delete
				return true;
			}
			else {
				//Sumar al contador de posicion
				pos++;
			}
		}
	} while (aux->getSiguiente()!=NULL);
}

bool ColaClientes::esVacia()
{
	if (this->longitud == 0) {
		return true;
	}
	else {
		return false;
	}
}

string ColaClientes::imprimir()
{
	NodoCliente* aux = frente;
	string cola = "";
	while (aux != NULL) {
		cola += aux->imprimir();
			 + "\n";
		aux = aux->getSiguiente();
	}
	return cola;
}
