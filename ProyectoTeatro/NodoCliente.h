#pragma once
#include <stddef.h>
#include <string>
using namespace std;
class NodoCliente
{

private:
	string nombre;
	int numeroTelefono;
	int identificacion;
	NodoCliente* sgte;
public:
	NodoCliente();
	NodoCliente(string nom, int num, int id);

	void setNombre(string pNombre);
	void setNumeroTel(int pNumero);
	void setId(int pId);
	string getNombre();
	int getNumero();
	int getId();

	//Operaciones para listas,colas,pilas
	void setSiguiente(NodoCliente* pNodo);
	NodoCliente* getSiguiente();

	string imprimir();

};

