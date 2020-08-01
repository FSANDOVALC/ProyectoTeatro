#pragma once
class Nodo
{

private:
	int dato;
	Nodo* sgte;

public:
	Nodo();
	Nodo(int pDato);

	//Getters and setters
	void setDato(int pDato);
	int getDato();
	void setSiguiente(Nodo* pNodo);
	Nodo* getSiguiente();

};


