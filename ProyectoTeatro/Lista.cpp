#include "Lista.h"
#include<string>

Lista::Lista()
{
	this->cabeza = NULL;
	this->largo = 0;
}

bool Lista::agregarAlInicio(int pAsiento, string pUbicacion,int pCosto, string pNombre, int pNumero, int pId)
{
	NodoCliente* tmpNodoCL = new NodoCliente(pNombre, pNumero,pId);
	NodoBoleto* tmpNodo = new NodoBoleto(pAsiento, pUbicacion, pCosto, tmpNodoCL);
	if (getCabeza() == NULL) {
		setCabeza(tmpNodo);
	}
	else {
		tmpNodo->setSiguiente(getCabeza());
		setCabeza(tmpNodo);
	}
	largo++;
	return true;
}

string Lista::recorrerLista()
{
	string rslt = "";
	if (getCabeza() == NULL) {
		rslt = "Lista vacia";
	}
	else {
		NodoBoleto* aux = getCabeza();
		int contador = 1;

		//Recorre lista mientras que el nodo siguiente no sea NULL
		do {
			rslt +="Asiento: "
				 + to_string(aux->getAsiento())
				 + " / Ubicacion: "
				 + aux->getUbicacion()
				 + " / Costo: "
				 + to_string(aux->getCosto())
			     + " / Cliente: "
				 + aux->getCliente()->imprimir()
				 + "\n";
			aux = aux->getSiguiente();
			contador++;
		} while (aux != NULL);
	}
	return rslt;
}

NodoBoleto* Lista::getCabeza()
{
	return this->cabeza;
}

void Lista::setCabeza(NodoBoleto* pNodo)
{
	this->cabeza = pNodo;
}

int Lista::getLargo()
{
	return this->largo;
}

void Lista::setLargo(int pLargo)
{
	this->largo = pLargo;
}