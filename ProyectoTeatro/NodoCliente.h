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
public:
	NodoCliente();
	NodoCliente(string nom, int num, int id);

	void setNombre(string pNombre);
	void setNumeroTel(int pNumero);
	string getNombre();
	int getNumero();
	void setId(int pId);
	int getId();

	string imprimir();

};

