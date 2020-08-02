#pragma once
#include "NodoCliente.h"
class NodoDoble
{
private:
	NodoDoble* sig;
	NodoDoble* ant;
	int asiento;
	string ubicacion;
	int costo;
	NodoCliente* cliente;
public:
	NodoDoble();
	NodoDoble(int pAsiento, NodoDoble* siguiente,NodoDoble *Anterior);
	NodoDoble(int pAsiento, string pUbicacion, int pCosto, NodoCliente* pNodoCl);
	~NodoDoble();
	int getAsiento();
	void setAsiento(int pAsiento);
	string getUbicacion();
	void setUbicaicon(string pUbicacion);
	int getCosto();
	void setCosto(int pCosto);
	NodoCliente* getCliente();
	void setCliente(NodoCliente* pCL);

	//Operaciones de Nodos
	NodoDoble* getSiguiente()const;
	void setSiguiente(NodoDoble* siguiente);
	NodoDoble* getAnterior()const;
	void setAnterior(NodoDoble* Anterior);
	bool haySiguiente();

};
