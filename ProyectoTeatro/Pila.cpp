#include "Pila.h"

Pila::Pila()
{
	this->longitud = 0;
	this->tope = NULL;
}

Pila::~Pila()
{

}

int Pila::getLongitud()
{
	return this->longitud;
}

void Pila::setLongitud(int l)
{
	this->longitud = l;
}

NodoBoleto* Pila::getTope()
{
	return this->tope;
}

void Pila::setTope(NodoBoleto* pNodo)
{
	this->tope = pNodo;
}

bool Pila::esVacia()
{
	if (this->getLongitud() == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Pila::pushElemento(int pAsiento, string pUbicacion,int pCosto, string pNombre, int pNumero, int pId)
{
	NodoCliente* tmpCliente = new NodoCliente(pNombre,pNumero,pId);
	NodoBoleto* nuevo = new NodoBoleto(pAsiento, pUbicacion, pCosto, tmpCliente);
	if (nuevo == NULL) {
		return false;
	}
	else {
		if (this->esVacia()) {
			tope = nuevo;
		}
		else {
			nuevo->setSiguiente(tope);
			tope = nuevo;
		}
		longitud++;
		return true;
	}
}

bool Pila::popElemento()
{
	NodoBoleto* aux;
	if (!(this->esVacia())) {
		aux = tope;
		tope = tope->getSiguiente();
		longitud--;
		delete aux;
		return true;
	}
	else {
		return false;
	}
}

int Pila::popElementoReturn()
{
	NodoBoleto* aux;
	int asiento;
	if (!(this->esVacia())) {
		aux = tope;
		asiento = aux->getAsiento();
		tope = tope->getSiguiente();
		longitud--;
		delete aux;
		return asiento;
	}
	else {
		return -999;
	}
}

string Pila::imprimir()
{
	NodoBoleto* aux = tope;
	string pila = "Graderia Preferencial\n";
	while (aux != NULL) {
		pila += "Asiento: " + to_string(aux->getAsiento())
				+ " / Ubicacion: " + aux->getUbicacion()
				+ " / Costo: " + to_string(aux->getCosto())
				+ " / Cliente: " + aux->getCliente()->imprimir()
				+ "\n";
		aux = aux->getSiguiente();
	}
	return pila;
}
