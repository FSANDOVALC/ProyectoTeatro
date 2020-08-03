#pragma once
#include "Localidad.h"
class ListaLocalidades
{
private:
	Localidad* cabeza;
	int largo;

public:
	ListaLocalidades();
	bool agregarAlInicio(string pNombre, string direccion);
	string recorrerLista();

	//Getter and setters
	Localidad* getCabeza();
	void setCabeza(Localidad* pLocalidad);
	int getLargo();
	void setLargo(int pLargo);
	Localidad* getLocalidadById(int pId);
};

