#pragma once
#include "NodoCliente.h"
class NodoBoleto
{

private:
	int asiento;
	string ubicacion;
	int costo;
	NodoCliente* cliente;
	NodoBoleto* sgte;

public:
	NodoBoleto();
	NodoBoleto(int pAsiento,string pUbicacion,int pCosto, NodoCliente* pNodoCl);

	//Getters and setters
	void setAsiento(int pAsiento);
	int getAsiento();
	void setSiguiente(NodoBoleto* pNodo);
	NodoBoleto* getSiguiente();
	void setUbicacion(string pUbicacion);
	string getUbicacion();
	NodoCliente* getCliente();
	void setCliente(NodoCliente* pNCL);
	void setCosto(int pCosto);
	int getCosto();

};

