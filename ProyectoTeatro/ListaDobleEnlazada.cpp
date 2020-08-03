#include "ListaDobleEnlazada.h"




ListaDobleEnlazada::ListaDobleEnlazada() {
	setCabeza(nullptr);
	settrasero(nullptr);
	setLargo(0);
}



ListaDobleEnlazada::~ListaDobleEnlazada() {}


bool ListaDobleEnlazada::insertar(int pAsiento, string pUbicacion, int pCosto, string pNombre, int pNumero, int pId) {

	NodoCliente* tmpCL = new NodoCliente(pNombre, pNumero, pId);
	NodoDoble* aux = new NodoDoble(pAsiento, "AreaGeneral", 7000, tmpCL);

	if (getLargo() < 10) {

		//Si la lista esta vacia
		if (esVacia()) {
			setCabeza(aux);
			setLargo(getLargo() + 1);
		}
		// Si se inserta el nodo al inicio de la lista
		else if (getCabeza()->getAsiento() > aux->getAsiento()) {
			aux->setSiguiente(getCabeza());
			aux->getSiguiente()->setAnterior(aux);
			setCabeza(aux);
			setLargo(getLargo() + 1);
		}
		else {
			NodoDoble* tmp = getCabeza();

			//Localizar el nodo despues que debemos insertar
			while (tmp->getSiguiente() != NULL && tmp->getSiguiente()->getAsiento() < aux->getAsiento()) {
				tmp = tmp->getSiguiente();
			}

			//Hacer los links apropiados
			aux->setSiguiente(tmp->getSiguiente());

			// Si el nuevo nodo no es insertado al final de la lista
			if (tmp->getSiguiente() != NULL) {
				aux->getSiguiente()->setAnterior(aux);
			}

			tmp->setSiguiente(aux);
			aux->setAnterior(tmp);
			setLargo(getLargo() + 1);
		}
		return true;
	}
	else {
		return false;
	}
}

string ListaDobleEnlazada::mostrarDobleEn() {
	string mensaje = "";
	if (esVacia()) {

		mensaje = "La lista esa vacia";
	}
	else {
		NodoDoble* aux = getCabeza();
		while (aux != nullptr) {
			mensaje += "Elemento:" + to_string(aux->getAsiento()) + "\n";
			aux = aux->getSiguiente();
		}
	}
	return mensaje;
}
string ListaDobleEnlazada::mostrarDobleEnTrasero() {
	string mensaje = "";
	NodoDoble* aux = getTrasero();
	if (esVacia()) {
		mensaje = "La lista esa vacia";
	}
	else {
		while (aux != nullptr) {
			mensaje += "Elemento:" + to_string(aux->getAsiento()) + "\n";
			aux = aux->getAnterior();
		}
	}
	return mensaje;
}


bool ListaDobleEnlazada::esVacia() {
	if (getCabeza() == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void ListaDobleEnlazada::setCabeza(NodoDoble* cabeza) {
	ListaDobleEnlazada::cabeza = cabeza;
}
NodoDoble* ListaDobleEnlazada::getCabeza() {
	return this->cabeza;
}
void ListaDobleEnlazada::settrasero(NodoDoble* trasero) {
	ListaDobleEnlazada::trasero = trasero;
}
NodoDoble* ListaDobleEnlazada::getTrasero() {
	return this->trasero;
}
void ListaDobleEnlazada::setLargo(int largo) {
	ListaDobleEnlazada::largo = largo;
}
int ListaDobleEnlazada::getLargo() {
	return this->largo;
}

bool ListaDobleEnlazada::existeDato(int pDato)
{
	bool rslt = false;
	NodoDoble* aux = getCabeza();
	while (aux != nullptr) {
		if (aux->getAsiento()==pDato) {
			rslt = true;
		}
		aux = aux->getSiguiente();
	}
	return rslt;
}

