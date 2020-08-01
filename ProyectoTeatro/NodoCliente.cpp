#include "NodoCliente.h"

NodoCliente::NodoCliente()
{
	this->nombre = "";
	this->numeroTelefono = 0;
}

NodoCliente::NodoCliente(string pNom, int pNum, int pId)
{
	this->nombre = pNom;
	this->numeroTelefono = pNum;
	this->identificacion = pId;
}

void NodoCliente::setNombre(string pNombre)
{
	this->nombre = pNombre;
}

void NodoCliente::setNumeroTel(int pNumero)
{
	this->numeroTelefono = pNumero;
}

string NodoCliente::getNombre()
{
	return this->nombre;
}

int NodoCliente::getNumero()
{
	return this->numeroTelefono;
}

void NodoCliente::setId(int pId)
{
	this->identificacion = pId;
}

int NodoCliente::getId()
{
	return this->identificacion;
}

string NodoCliente::imprimir()
{
	return "Nombre: " + this->getNombre() + " Telefono: "+ to_string(this->getNumero()) + " Identificacion: " + to_string(this->getId()) +"\n";
}
