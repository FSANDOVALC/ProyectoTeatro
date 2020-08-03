#pragma once
#include "NodoCliente.h"
#include <string>
#include <iostream>
using namespace std;

class ColaClientes
{

private:
	int longitud;
	NodoCliente* frente;
	NodoCliente* final;

public:
	ColaClientes();

	int getLongitud();
	void setLongitud(int pL);
	void insertarElemento(string nombre, int numero, int id);
	bool eliminarElemento();
	int eliminarElementoReturn();
	bool eliminarElementoPos(int pPos);

	bool esVacia();
	string imprimir();

};

