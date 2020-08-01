#pragma once
#include "NodoBoleto.h"
#include <string>
#include <iostream>
using namespace std;

class Pila
{

private:
	int longitud;
	NodoBoleto* tope;

public:
	Pila();
	~Pila();
	int getLongitud();
	void setLongitud(int l);
	NodoBoleto* getTope();
	void setTope(NodoBoleto* nodo);
	bool esVacia();

	//Metodos
	bool pushElemento(int pAsiento, string pUbicacion, int pCosto, string pNombre, int pNumero, int pId);
	bool popElemento();
	int popElementoReturn();
	string imprimir();

};

