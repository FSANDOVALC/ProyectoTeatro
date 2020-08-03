#pragma once
#include "ListaLocalidades.h"
class GestorReservas
{

private:
	ListaLocalidades miListaLoc;
	Localidad* localidadSeleccionada;
public:

	GestorReservas();

	string insertarLocalidad(string pNombre, string pDireccion);
	string listarLocalidades();
	string seleccionarLocalidad(int pId);

	void mostrarEspaciosTeatro();
	string reservarAreaPreferencial(int pAsiento,string pNombre,int pNumero,int pCedula);
	string reservarGraderiaPreferencial(string pNombre, int pNumero, int pCedula);
	string reservarGraderiaGeneral(string pNombre, int pNumero, int pCedula);

	string imprimirBoletosGAP();
	string imprimirBoletosGP();
	string imprimirBoletosGG();

	string imprimirColaGAP();
	string imprimirColaGP();
	string imprimirColaGG();

};

