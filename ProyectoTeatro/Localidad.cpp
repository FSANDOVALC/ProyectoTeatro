#include "Localidad.h"

Localidad::Localidad()
{
	this->nombre = "";
	this->direccion = "";
	this->cantidadMaxima = 50;
}

string Localidad::getNombre()
{
	return this->nombre;
}

void Localidad::setNombre(string pNombre)
{
	this->nombre = pNombre;
}

string Localidad::getDireccion()
{
	return this->direccion;
}

void Localidad::setDireccion(string pDireccion)
{
	this->direccion = pDireccion;
}

int Localidad::getCantidadMaxima()
{
	return this->cantidadMaxima;
}

void Localidad::setCantidadMaxima(int pCantidad)
{
	this->cantidadMaxima = pCantidad;
}

bool Localidad::reservarEspacioGG(string nombre, int numero, int id)
{
	if (graderiaGeneral.getLargo() >= 20) {
		return false;
	}
	else if (graderiaGeneral.getLargo() == 0) {
		return graderiaGeneral.agregarAlInicio(1,"GraderiaGeneral",4000,nombre,numero,id);
	}
	else {
		return graderiaGeneral.agregarAlInicio(graderiaGeneral.getLargo()+1, "GraderiaGeneral",4000, nombre, numero,id);
	}
}

string Localidad::imprimirEspaciosGG()
{
	return graderiaGeneral.recorrerLista();
}

bool Localidad::reservarEspacioGP(string nombre, int numero,int id)
{
	if (graderiaPreferencial.getTope() == NULL) {
		return graderiaPreferencial.pushElemento(1,"GraderiaPreferencial",5500,nombre,numero,id);
	}
	else {
		int tmpAsientoTope = graderiaPreferencial.getTope()->getAsiento();
		if (tmpAsientoTope >= 20) {
			return false; //TODO agregar a cola
		}
		else {
			return graderiaPreferencial.pushElemento(tmpAsientoTope + 1, "GraderiaPreferencial",5500, nombre, numero,id);
		}
	}
}

string Localidad::imprimirEspaciosGP()
{
	return graderiaPreferencial.imprimir();
}


