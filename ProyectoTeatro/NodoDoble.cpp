#include "NodoDoble.h"


NodoDoble::NodoDoble()
{
	setAsiento(0);
	setSiguiente(NULL);
	setAnterior(NULL);
}

NodoDoble::NodoDoble(int pAsiento, NodoDoble* siguiente,NodoDoble* anterior){
	this->asiento = pAsiento;
	this->sig = siguiente;
	this->ant = anterior;
}

NodoDoble::NodoDoble(int pAsiento, string pUbicacion, int pCosto, NodoCliente* pNodoCl){
	this->asiento = pAsiento;
	this->ubicacion = pUbicacion;
	this->costo = pCosto;
	this->cliente = pNodoCl;
}

NodoDoble::~NodoDoble()
{
}

int NodoDoble::getAsiento()
{
	return this->asiento;
}

void NodoDoble::setAsiento(int pAsiento)
{
	this->asiento = pAsiento;
}

string NodoDoble::getUbicacion()
{
	return this->ubicacion;
}

void NodoDoble::setUbicaicon(string pUbicacion)
{
	this->ubicacion = pUbicacion;
}

int NodoDoble::getCosto()
{
	return this->costo;
}

void NodoDoble::setCosto(int pCosto)
{
	this->costo = pCosto;
}

NodoCliente* NodoDoble::getCliente()
{
	return this->cliente;
}

void NodoDoble::setCliente(NodoCliente* pCL)
{
	this->cliente = pCL;
}


NodoDoble* NodoDoble::getSiguiente()const {
	return sig;

}
void NodoDoble::setSiguiente(NodoDoble* siguiente) {
	NodoDoble::sig = siguiente;
}
NodoDoble* NodoDoble::getAnterior()const {
	return ant;

}
void NodoDoble::setAnterior(NodoDoble* anterior) {
	NodoDoble::ant= anterior;
}


bool NodoDoble::haySiguiente() {
	return NodoDoble::sig != NULL;
}
