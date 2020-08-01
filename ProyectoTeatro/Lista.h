#pragma once
#include "NodoBoleto.h"
#include <stddef.h>
#include <string>
using namespace std;
class Lista
{

private:
	NodoBoleto* cabeza;
	int largo;

public:
	Lista();
	bool agregarAlInicio(int pAsiento,string pUbicacion,int pCosto,string pNombre,int pNumero, int pId);
	string recorrerLista();

	//Getter and setters
	NodoBoleto* getCabeza();
	void setCabeza(NodoBoleto* pNodo);
	int getLargo();
	void setLargo(int pLargo);
};



