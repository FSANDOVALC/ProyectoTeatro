// ProyectoTeatro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Localidad.h"

int main()
{
    
    Localidad miLocalidad;

    miLocalidad.liberarGraderias();

    miLocalidad.reservarEspacioAP(3,"Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(7, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(1, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(9, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    cout << miLocalidad.imprimirEspaciosAP();

    miLocalidad.reservarEspacioGP("Luis", 83250161,1131424);
    miLocalidad.reservarEspacioGP("Luis", 83250163, 1131427);
    miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    cout << miLocalidad.imprimirEspaciosGP();
    cout << "\nGraderia general\n";
    miLocalidad.reservarEspacioGG("Francisco", 83250155, 1131489);
    miLocalidad.reservarEspacioGG("Esteban", 83250155, 1131489);
    miLocalidad.reservarEspacioGG("Marjorie", 83250155, 1131489);
    miLocalidad.reservarEspacioGG("Fabiola", 83250155, 1131489);
    cout << miLocalidad.imprimirEspaciosGG();
    
    miLocalidad.imprimirEspaciosGraderias();

    cout << miLocalidad.imprimirColaGAP();
}

