#pragma once
#include <string>
#include "Pila.h"
#include "Lista.h"
#include "ListaDobleEnlazada.h"
#include "ColaClientes.h"
#include <iomanip>
using namespace std;
class Localidad
{

private:
	int id;
	string nombre;
	string direccion;
	int gradAreaPreferencial[2][5],gradPrefMatrix[4][5], gradGenMatrix[4][5];
	Pila graderiaPreferencial;
	Lista graderiaGeneral;
	ListaDobleEnlazada graderiaAreaPreferencial;
	ColaClientes colaGAP;
	ColaClientes colaGP;
	ColaClientes colaGG;
	Localidad* sgte;

public:
	Localidad();
	Localidad(int pId, string pNom, string pDir);

	//Operaciones Localidad
	string getNombre();
	void setNombre(string pNombre);
	string getDireccion();
	void setDireccion(string pDireccion);
	int getIdLocalidad();
	void setIdLocalidad(int pCantidad);
	void setSiguiente(Localidad* pLocalidad);
	Localidad* getSiguiente();

	//Operaciones area preferencial
	bool reservarEspacioAP(int asiento,string nombre, int numero, int id);
	string imprimirEspaciosAP();
	bool existeReserva(int pDato);

	//Operaciones graderia general
	bool reservarEspacioGG(string nombre, int numero, int id);
	string imprimirEspaciosGG();

	//Operaciones graderia preferencial
	bool reservarEspacioGP(string nombre, int numero, int id);
	string imprimirEspaciosGP();

	//Operaciones matrizes
	void liberarGraderias();
	void liberarGraderiaAreaPreferencial();
	void liberarGraderiaPreferencial();
	void liberarGraderiaGeneral();
	void imprimirEspaciosGraderias();
	void imprimirAreaPreferencial();
	void llenarEspacioGraderiaAreaPreferencial(int pDato);
	void imprimirMatrizGradPref();
	void llenarEspacioGraderiaPreferencial(int pDato);
	void imprimirMatrizGradGeneral();
	void llenarEspacioGraderiaGeneral(int pDato);

	//Operaciones de cola
	string imprimirColaGAP();
	int getCantClientesColaGAP();
	string imprimirColaGP();
	int getCantClientesColaGP();
	string imprimirColaGG();
	int getCantClientesColaGG();


};

