#include "Nodo.h"
#include <stddef.h>

Nodo::Nodo()
{
    setDato(0);
    setSiguiente(NULL);
}

Nodo::Nodo(int pDato)
{
    this->dato = pDato;
}

void Nodo::setDato(int pDato)
{
    this->dato = pDato;
}

int Nodo::getDato()
{
    return this->dato;
}

void Nodo::setSiguiente(Nodo* pNodo)
{
    this->sgte = pNodo;
}

Nodo* Nodo::getSiguiente()
{
    return this->sgte;
}
