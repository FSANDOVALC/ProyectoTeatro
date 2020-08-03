#include "GestorReservas.h"

GestorReservas::GestorReservas()
{

}

string GestorReservas::insertarLocalidad(string pNombre, string pDireccion)
{
	int rslt  = miListaLoc.agregarAlInicio(pNombre,pDireccion);
	if (rslt) {
		return "\nSe agrego la Localidad nueva\n";
	}
	else {
		return "\nNo se pudo agregar la Localidad nueva\n";
	}
}

string GestorReservas::listarLocalidades()
{
	return miListaLoc.recorrerLista();
}

string GestorReservas::seleccionarLocalidad(int pId)
{
	if (miListaLoc.getLocalidadById(pId) == NULL) {
		return "No existe localidad con ese ID";
	}
	else {
		localidadSeleccionada = miListaLoc.getLocalidadById(pId);
		return "La localidad con id " + to_string(pId) +" ha sido seleccionada\n";
	}
}

void GestorReservas::mostrarEspaciosTeatro()
{
	if (localidadSeleccionada == NULL) {
		cout << "No existen localidades registradas";
	}
	else {
		localidadSeleccionada->imprimirEspaciosGraderias();
	}
}

string GestorReservas::reservarAreaPreferencial(int pAsiento, string pNombre, int pNumero, int pCedula)
{
	bool rslt = localidadSeleccionada->reservarEspacioAP(pAsiento, pNombre, pNumero, pCedula);
	if (rslt) {
		return "Se reservo el espacio: " + pAsiento;
	}
	else {
		return "No se pudo reservar el espacio: " + pAsiento;
	}
}

string GestorReservas::reservarGraderiaPreferencial(string pNombre, int pNumero, int pCedula)
{
	bool rslt = localidadSeleccionada->reservarEspacioGP(pNombre,pNumero,pCedula);
	if (rslt) {
		return "Se reservo un espacio";
	}
	else {
		return "No se pudo reservar un espacio";
	}
}

string GestorReservas::reservarGraderiaGeneral(string pNombre, int pNumero, int pCedula)
{
	bool rslt = localidadSeleccionada->reservarEspacioGG(pNombre, pNumero, pCedula);
	if (rslt) {
		return "Se reservo un espacio";
	}
	else {
		return "No se pudo reservar un espacio";
	}
}


