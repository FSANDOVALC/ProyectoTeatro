// ProyectoTeatro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GestorReservas.h"
using namespace std;
static GestorReservas* migestor = new GestorReservas();

void menu() {

    cout << "\n***********Menu de Teatro*************" << endl;
    cout << "OPCIONES GENERALES" << endl;
    cout << "1.Crear nueva localidad de Teatro" << endl;
    cout << "2.Mostrar localidades" << endl;
    cout << "OPCIONES USUARIO" << endl;
    cout << "3.Seleccionar localidad" << endl;
    cout << "4.Mostrar espacios de localidad" << endl;
    cout << "5.Reservar Area Preferencial" << endl;
    cout << "6.Reservar Graderia Preferencial" << endl;
    cout << "7.Reservar Graderia General" << endl;
    cout << "8.Salir" << endl;
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



int main()
{
    
    //ListaLocalidades miLista;

    //Localidad miLocalidad;

    //miLocalidad.liberarGraderias();

    //miLocalidad.reservarEspacioAP(3,"Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(7, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(1, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(9, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(5, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    //miLocalidad.reservarEspacioAP(2, "Luis", 83250161, 1131424);
    //cout << miLocalidad.imprimirEspaciosAP();

    //miLocalidad.reservarEspacioGP("Luis", 83250161,1131424);
    //miLocalidad.reservarEspacioGP("Luis", 83250163, 1131427);
    //miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    //miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    //miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    //miLocalidad.reservarEspacioGP("Luis", 83250164, 1131425);
    //cout << miLocalidad.imprimirEspaciosGP();
    //cout << "\nGraderia general\n";
    //miLocalidad.reservarEspacioGG("Francisco", 83250155, 1131489);
    //miLocalidad.reservarEspacioGG("Esteban", 83250155, 1131489);
    //miLocalidad.reservarEspacioGG("Marjorie", 83250155, 1131489);
    //miLocalidad.reservarEspacioGG("Fabiola", 83250155, 1131489);
    //cout << miLocalidad.imprimirEspaciosGG();
    //
    //miLocalidad.imprimirEspaciosGraderias();

    //cout << miLocalidad.imprimirColaGAP();


    //miLista.agregarAlInicio("TeatroCouluche","SanJose");
    //miLista.agregarAlInicio("TeatroMilan", "Alajuela");
    //cout << miLista.recorrerLista();
    //Localidad* tmpLC = miLista.getLocalidadById(1);
    //Localidad* tmpLC2 = miLista.getLocalidadById(2);
    //Localidad* tmpLC5 = miLista.getLocalidadById(5);
    //tmpLC->liberarGraderias();
    //tmpLC->reservarEspacioAP(3, "Luis", 83250161, 1131424);
    //tmpLC->imprimirEspaciosGraderias();
    //tmpLC2->liberarGraderias();
    //tmpLC2->reservarEspacioAP(1, "Luis", 83250161, 1131424);
    //tmpLC2->imprimirEspaciosGraderias();


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
        reservarEspacioGraderiaGeneral();
        main();
        break;
    case 9:
        reservarEspacioGraderiaGeneral();
        main();
        break;
    case 15:
        cout << "Hasta Luego";
        break;

    }

}

