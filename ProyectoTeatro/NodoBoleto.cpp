#include "NodoBoleto.h"

NodoBoleto::NodoBoleto()
{
	this->asiento = 0;
	this->ubicacion = "";
	this->cliente = NULL;
	this->sgte = NULL;
}

NodoBoleto::NodoBoleto(int pAsiento, string pUbicacion, int pCosto, NodoCliente* pNodoCl)
{
	this->asiento = pAsiento;
	this->ubicacion = pUbicacion;
	this->costo = pCosto;
	this->cliente = pNodoCl;
}

void NodoBoleto::setAsiento(int pAsiento)
{
	this->asiento = pAsiento;
}

int NodoBoleto::getAsiento()
{
	return this->asiento;
}

void NodoBoleto::setSiguiente(NodoBoleto* pNodo)
{
	this->sgte = pNodo;
}

NodoBoleto* NodoBoleto::getSiguiente()
{
	return this->sgte;
}

void NodoBoleto::setUbicacion(string pUbicacion)
{
	this->ubicacion = pUbicacion;
}

string NodoBoleto::getUbicacion()
{
	return this->ubicacion;
}

NodoCliente* NodoBoleto::getCliente()
{
	return this->cliente;
}

void NodoBoleto::setCliente(NodoCliente* pNCL)
{
	this->cliente = pNCL;
}

void NodoBoleto::setCosto(int pCosto)
{
	this->costo = pCosto;
}

int NodoBoleto::getCosto()
{
	return this->costo;
}
