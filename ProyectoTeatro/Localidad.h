#pragma once
#include <string>
#include "Pila.h"
#include "Lista.h"
using namespace std;
class Localidad
{

private:
	string nombre;
	string direccion;
	int cantidadMaxima;
	Pila graderiaPreferencial;
	Lista graderiaGeneral;

public:
	Localidad();

	//Operaciones Localidad
	string getNombre();
	void setNombre(string pNombre);
	string getDireccion();
	void setDireccion(string pDireccion);
	int getCantidadMaxima();
	void setCantidadMaxima(int pCantidad);

	//Operaciones graderia general
	bool reservarEspacioGG(string nombre, int numero, int id);
	string imprimirEspaciosGG();

	//Operaciones graderia preferencial
	bool reservarEspacioGP(string nombre, int numero, int id);
	string imprimirEspaciosGP();



};

