#include "Localidad.h"

Localidad::Localidad()
{
	this->nombre = "";
	this->direccion = "";
	this->id = 0;
}

Localidad::Localidad(int pId,string pNom, string pDir)
{
	this->id = pId;
	this->nombre = pNom;
	this->direccion = pDir;
}

string Localidad::getNombre()
{
	return this->nombre;
}

void Localidad::setNombre(string pNombre)
{
	this->nombre = pNombre;
}

string Localidad::getDireccion()
{
	return this->direccion;
}

void Localidad::setDireccion(string pDireccion)
{
	this->direccion = pDireccion;
}

int Localidad::getIdLocalidad()
{
	return this->id;
}

void Localidad::setIdLocalidad(int pId)
{
	this->id = pId;
}

void Localidad::setSiguiente(Localidad* pLocalidad)
{
	this->sgte = pLocalidad;
}

Localidad* Localidad::getSiguiente()
{
	return this->sgte;
}

bool Localidad::reservarEspacioAP(int asiento,string nombre, int numero, int id)
{
	bool rslt;

		if (graderiaAreaPreferencial.getCabeza() == NULL) {
			rslt = graderiaAreaPreferencial.insertar(asiento, "GraderiaAreaPreferencial", 7000, nombre, numero, id);
			if (rslt) {
				llenarEspacioGraderiaAreaPreferencial(asiento);
			}
			return rslt;
		}
		//Valida si el dato ya existe reserva con ese numero de asiento
		else if (graderiaAreaPreferencial.existeDato(asiento)) {
			return false;
		}
		else{
			int tmpAsientoTope = graderiaAreaPreferencial.getLargo();
			if (tmpAsientoTope >= 10) {
				colaGAP.insertarElemento(nombre, numero, id);
				return false;
			}
			else {
				rslt = graderiaAreaPreferencial.insertar(asiento, "GraderiaAreaPreferencial", 7000, nombre, numero, id);
				llenarEspacioGraderiaAreaPreferencial(asiento);
				return rslt;
			}
		}
}

string Localidad::imprimirEspaciosAP()
{
	return graderiaAreaPreferencial.mostrarDobleEn();
}

bool Localidad::existeReserva(int pDato)
{
	return graderiaAreaPreferencial.existeDato(pDato);
}

bool Localidad::reservarEspacioGG(string nombre, int numero, int id)
{
	bool rslt;
	if (graderiaGeneral.getLargo() >= 20) {
		return false;
	}
	else if (graderiaGeneral.getLargo() == 0) {
		rslt = graderiaGeneral.agregarAlInicio(1,"GraderiaGeneral",4000,nombre,numero,id);
		llenarEspacioGraderiaGeneral(graderiaGeneral.getLargo());
		return rslt;
	}
	else {
		rslt = graderiaGeneral.agregarAlInicio(graderiaGeneral.getLargo()+1, "GraderiaGeneral",4000, nombre, numero,id);
		llenarEspacioGraderiaGeneral(graderiaGeneral.getLargo());
		return rslt;
	}
}

string Localidad::imprimirEspaciosGG()
{
	return graderiaGeneral.recorrerLista();
}

bool Localidad::reservarEspacioGP(string nombre, int numero,int id)
{
	bool rslt;
	if (graderiaPreferencial.getTope() == NULL) {
		rslt = graderiaPreferencial.pushElemento(1,"GraderiaPreferencial",5500,nombre,numero,id);
		llenarEspacioGraderiaPreferencial(graderiaPreferencial.getTope()->getAsiento());
		return rslt;
	}
	else {
		int tmpAsientoTope = graderiaPreferencial.getTope()->getAsiento();
		if (tmpAsientoTope >= 20) {
			return false; //TODO agregar a cola
		}
		else {
			rslt = graderiaPreferencial.pushElemento(tmpAsientoTope + 1, "GraderiaPreferencial",5500, nombre, numero,id);
			llenarEspacioGraderiaPreferencial(graderiaPreferencial.getTope()->getAsiento());
			return rslt;
		}
	}
}

string Localidad::imprimirEspaciosGP()
{
	return graderiaPreferencial.imprimir();
}

void Localidad::liberarGraderias()
{
	liberarGraderiaAreaPreferencial();
	liberarGraderiaPreferencial();
	liberarGraderiaGeneral();
}

void Localidad::liberarGraderiaAreaPreferencial()
{
	//Liberar graderias Area Preferencial
	int i, j;
	int c = 1;
	for (i = 0; i < 2; ++i)
		for (j = 0; j < 5; ++j)
		{
			gradAreaPreferencial[i][j] = c;
			c++;
		}
}

void Localidad::liberarGraderiaPreferencial()
{
	int i, j;
	int c = 1;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
		{
			gradPrefMatrix[i][j] = c;
			c++;
		}
}

void Localidad::liberarGraderiaGeneral()
{
	int i, j;
	int c = 1;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
		{
			gradGenMatrix[i][j]=c;
			c++;
		}
}

void Localidad::imprimirEspaciosGraderias()
{
	cout << "Espacios de Localidad: " + getNombre() << endl;
	imprimirAreaPreferencial();
	imprimirMatrizGradPref();
	imprimirMatrizGradGeneral();
	cout << "\n**Los espacios con el numero 0 ya estan reservados\n";
}

void Localidad::imprimirAreaPreferencial()
{
	int i, j;
	cout << "\nEspacios Area Preferencial: \n";
	for (i = 0; i < 2; ++i)
		for (j = 0; j < 5; ++j)
		{
			cout << right << setw(4) << gradAreaPreferencial[i][j];
			if (j == 5 - 1)
				cout << endl;
		}
}

void Localidad::llenarEspacioGraderiaAreaPreferencial(int pDato)
{
	int i, j;
	for (i = 0; i < 2; ++i)
		for (j = 0; j < 5; ++j)
		{
			if (gradAreaPreferencial[i][j] == pDato) {
				gradAreaPreferencial[i][j] = 0;
				return;
			}
		}
}

void Localidad::imprimirMatrizGradPref()
{
	int i, j;
	cout << "\nEspacios Graderia Preferencial: \n";
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
		{
			cout << right << setw(4) << gradPrefMatrix[i][j];
			if (j == 5 - 1)
				cout << endl;
		}
}

void Localidad::llenarEspacioGraderiaPreferencial(int pDato)
{
	int i, j;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
		{
			if (gradPrefMatrix[i][j] == pDato) {
				gradPrefMatrix[i][j] = 0;
				return;
			}
		}
}

void Localidad::imprimirMatrizGradGeneral()
{
	int i, j;
	cout << "\nEspacios Graderia General: \n";
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
		{
			cout << right << setw(4) << gradGenMatrix[i][j];
			if (j == 5 - 1)
				cout << endl;
		}
}

void Localidad::llenarEspacioGraderiaGeneral(int pDato)
{
	int i, j;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
		{
			if (gradGenMatrix[i][j] == pDato) {
				gradGenMatrix[i][j] = 0;
				return;
			}
		}
}

string Localidad::imprimirColaGAP()
{
	string rslt = "\nDatos de cola Graderia Area Preferencial\n";
	return rslt+=colaGAP.imprimir();
}

int Localidad::getCantClientesColaGAP()
{
	return colaGAP.getLongitud();
}

string Localidad::imprimirColaGP()
{
	string rslt = "\nDatos de cola Graderia Preferencial\n";
	return rslt += colaGP.imprimir();
}

int Localidad::getCantClientesColaGP()
{
	return colaGP.getLongitud();
}

string Localidad::imprimirColaGG()
{
	string rslt = "\nDatos de cola Graderia General\n";
	return rslt += colaGG.imprimir();
}

int Localidad::getCantClientesColaGG()
{
	return colaGG.getLongitud();
}


