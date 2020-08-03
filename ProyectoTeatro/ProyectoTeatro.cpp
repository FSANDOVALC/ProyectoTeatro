// ProyectoTeatro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GestorReservas.h"
using namespace std;
static GestorReservas* migestor = new GestorReservas();

void menu() {

    cout << "\n***********Menu de Teatro*************" << endl;
    cout << endl;
    cout << "OPCIONES GENERALES" << endl;
    cout << "1.Crear nueva localidad de Teatro" << endl;
    cout << "2.Mostrar localidades" << endl;
    cout << endl;
    cout << "OPCIONES USUARIO" << endl;
    cout << "3.Seleccionar localidad" << endl;
    cout << "4.Mostrar espacios de localidad" << endl;
    cout << "5.Reservar Area Preferencial" << endl;
    cout << "6.Reservar Graderia Preferencial" << endl;
    cout << "7.Reservar Graderia General" << endl;
    cout << endl;
    cout << "REPORTES" << endl;
    cout << "8.Mostrar reservas Area Preferencial" << endl;
    cout << "9.Mostrar reservas Graderia Preferencial" << endl;
    cout << "10.Mostrar reservas Graderia General" << endl;
    cout << "11.Mostrar cola Area Preferencial" << endl;
    cout << "12.Mostrar cola Graderia Preferencial" << endl;
    cout << "13.Mostrar cola Graderia General" << endl;
    cout << "14.Salir" << endl;
    cout << "Digite una opcion" << endl;
}

void crearLocalidad() {
    string nom,dir;
    cout << "Ingrese el nombre de la localidad(sin espacios):\n";
    cin >> nom;
    cout << "Ingrese la direccion de la localidad(sin espacios):\n";
    cin >> dir;
    cout << migestor->insertarLocalidad(nom,dir);
}

void listarLocalidades() {
    cout << "\nLocalidades de Teatro:\n";
    cout << migestor->listarLocalidades();
}

void seleccionarLocalidad() {
    int pId;
    cout << "Ingrese el Id de la localidad a seleccionar:\n";
    cin >> pId;
    cout << migestor->seleccionarLocalidad(pId);
}

void mostrarEspaciosLocalidad() {
    migestor->mostrarEspaciosTeatro();
}

void reservarEspacioAreaPreferencial() {
    string nom;
    int asiento,num, cedula;
    cout << "Ingrese el asiento deseado:\n";
    cin >> asiento;
    cout << "Ingrese su nombre:\n";
    cin >> nom;
    cout << "Ingrese su numero de contacto:\n";
    cin >> num;
    cout << "Ingrese su cedula:\n";
    cin >> cedula;
    cout << migestor->reservarAreaPreferencial(asiento,nom,num,cedula);
}

void reservarEspacioGraderiaPreferencial() {
    string nom;
    int num, cedula;
    cout << "Ingrese su nombre:\n";
    cin >> nom;
    cout << "Ingrese su numero de contacto:\n";
    cin >> num;
    cout << "Ingrese su cedula:\n";
    cin >> cedula;
    cout << migestor->reservarGraderiaPreferencial(nom,num,cedula);
}

void reservarEspacioGraderiaGeneral() {
    string nom;
    int num, cedula;
    cout << "Ingrese su nombre:\n";
    cin >> nom;
    cout << "Ingrese su numero de contacto:\n";
    cin >> num;
    cout << "Ingrese su cedula:\n";
    cin >> cedula;
    cout << migestor->reservarGraderiaGeneral(nom, num, cedula);
}

void mostrarBoletosGAP() {
    cout << migestor->imprimirBoletosGAP();
}

void mostrarBoletosGP() {
    cout << migestor->imprimirBoletosGP();
}

void mostrarBoletosGG() {
    cout << migestor->imprimirBoletosGG();
}

void mostrarColaGAP() {
    cout << migestor->imprimirColaGAP();
}

void mostrarColaGP() {
    cout << migestor->imprimirColaGP();
}

void mostrarColaGG() {
    cout << migestor->imprimirColaGG();
}



int main()
{
    menu();
    int opc = 1;
    cin >> opc;

    switch (opc) {

    case 1:
        crearLocalidad();
        main();
        break;

    case 2:
        listarLocalidades();
        main();
        break;
    case 3:
        seleccionarLocalidad();
        main();
        break;
    case 4:
        mostrarEspaciosLocalidad();
        main();
        break;
    case 5:
        reservarEspacioAreaPreferencial();
        main();
        break;
    case 6:
        reservarEspacioGraderiaPreferencial();
        main();
        break;
    case 7:
        reservarEspacioGraderiaGeneral();
        main();
        break;
    case 8:
        mostrarBoletosGAP();
        main();
        break;
    case 9:
        mostrarBoletosGP();
        main();
        break;
    case 10:
        mostrarBoletosGG();
        main();
        break;
    case 11:
        mostrarColaGAP();
        main();
        break;
    case 12:
        mostrarColaGP();
        main();
        break;
    case 13:
        mostrarColaGG();
        main();
        break;
    case 14:
        cout << "Hasta Luego";
        break;

    }

}

