#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H
#include "NodoDoble.h"
#include <string>
#include <iostream>
using namespace std;
class ListaDobleEnlazada
{
public:
	ListaDobleEnlazada();
	~ListaDobleEnlazada();
	bool insertar(int pAsiento, string pUbicacion, int pCosto, string pNombre, int pNumero, int pId);
	string mostrarDobleEn();
	string mostrarDobleEnTrasero();
	bool esVacia();
	void setCabeza(NodoDoble*);
	NodoDoble* getCabeza();
	void settrasero(NodoDoble*);
	NodoDoble* getTrasero();
	void setLargo(int);
	int getLargo();
private:
	NodoDoble* cabeza;
	NodoDoble* trasero;
	int largo;
};
#endif // !LISTADOBLEENLAZADA_H
