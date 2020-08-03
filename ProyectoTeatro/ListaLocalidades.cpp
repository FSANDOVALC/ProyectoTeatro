#include "ListaLocalidades.h"

ListaLocalidades::ListaLocalidades()
{
	this->cabeza = NULL;
	this->largo = 0;
}

bool ListaLocalidades::agregarAlInicio(string pNombre, string direccion)
{
	Localidad* tmpLocalidad = new Localidad(getLargo() + 1, pNombre, direccion);
	if (getCabeza() == NULL) {
		setCabeza(tmpLocalidad);
		tmpLocalidad->liberarGraderias();
	}
	else {
		tmpLocalidad->setSiguiente(getCabeza());
		setCabeza(tmpLocalidad);
		tmpLocalidad->liberarGraderias();
	}
	largo++;
	return true;
}

string ListaLocalidades::recorrerLista()
{
	string rslt = "";
	if (getCabeza() == NULL) {
		rslt = "Lista vacia";
	}
	else {
		Localidad* aux = getCabeza();
		int contador = 1;

		//Recorre lista mientras que el nodo siguiente no sea NULL
		do {
			rslt += " Id: " + to_string(aux->getIdLocalidad())
				+ " Nombre: " + aux->getNombre()
				+ " Direccion: " + aux->getDireccion()
				+ "\n";
			aux = aux->getSiguiente();
			contador++;
		} while (aux != NULL);
	}
	return rslt;
}

Localidad* ListaLocalidades::getCabeza()
{
	return this->cabeza;
}

void ListaLocalidades::setCabeza(Localidad* pLocalidad)
{
	this->cabeza = pLocalidad;
}

int ListaLocalidades::getLargo()
{
	return this->largo;
}

void ListaLocalidades::setLargo(int pLargo)
{
	this->largo = pLargo;
}

Localidad* ListaLocalidades::getLocalidadById(int pId)
{
	Localidad* aux = getCabeza();
	if (aux==NULL) {
		return aux;
	}
	else {
		do {
			if (aux->getIdLocalidad() == pId) {
				return aux;
			}
			aux = aux->getSiguiente();
		} while (aux != NULL);
	}
}
