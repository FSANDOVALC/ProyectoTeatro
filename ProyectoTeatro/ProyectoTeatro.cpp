// ProyectoTeatro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Localidad.h"

int main()
{
    
    Localidad miLocalidad;

    miLocalidad.reservarEspacioGP("Luis", 83250161,1131424);
    miLocalidad.reservarEspacioGP("Luis", 83250163, 1131427);
    miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    cout << miLocalidad.imprimirEspaciosGP();
    cout << "\nGraderia general\n";
    miLocalidad.reservarEspacioGG("Francisco", 83250155, 1131489);
    miLocalidad.reservarEspacioGG("Esteban", 83250155, 1131489);
    miLocalidad.reservarEspacioGG("Marjorie", 83250155, 1131489);
    miLocalidad.reservarEspacioGG("Fabiola", 83250155, 1131489);
    cout << miLocalidad.imprimirEspaciosGG();


}

