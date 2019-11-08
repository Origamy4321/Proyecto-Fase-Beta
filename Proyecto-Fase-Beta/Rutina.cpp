#include "Rutina.h"

Rutina::Rutina(string code, string fec, Fecha* fech, string obj, Socio* soc) {


	codigo = code;
	fechaCreada = fec;
	fechaEstFinal = fech;
	objetivo = obj;
	_Socio = soc;
	coleccIns = new coleccionInstruccion(20);

}


Rutina::Rutina() {

	codigo = "";
	fechaCreada = "";
	fechaEstFinal = NULL;
	objetivo = "";
	coleccIns = NULL;
	_Socio = NULL;

}

string Rutina::getCodigo(){

	return codigo;
}

string Rutina::getFechaCreacion() {

	return fechaCreada;

}

Fecha* Rutina::getFecha() {

	return fechaEstFinal;

}

string Rutina::getObjetivo() {

	return objetivo;
}



Socio* Rutina::getSocio() {

	return _Socio;
}

void Rutina::setCodigo(string code) {

	codigo = code;

}

void Rutina::setFecha(Fecha* fec) {

	fechaEstFinal = fec;

}

void Rutina::setFechaCreacion(string hola) {

	fechaCreada = hola;

}


void Rutina::setObjetivo(string x) {

	objetivo = x;

}

void Rutina::setSocio(Socio* soc) {

	_Socio = soc;

}

string Rutina::toString(){
	stringstream k;
	k << "----Rutina Completa------" << endl;
	k << "Codigo asignado..." << codigo << endl;
	k << "Fecha de creacion..." << fechaCreada << endl;
	if (fechaEstFinal != NULL) {
		k << "Fecha estimada de finalizacion..." << fechaEstFinal->toString() << endl;
	}
	else {
		k << "Fecha estimada de finalizacion..." << fechaEstFinal << endl;
	}
	k << "Objetivo planteado..." << objetivo << endl;
	k << coleccIns->imprimir() << endl;
	if (_Socio != NULL) {
		k << "El socio asociado a esta rutina es..." << endl;
		k << "Identificacion del socio: " << _Socio->getNumCedula() << endl;
		k << "Nombre del socio" << _Socio->getNombre() << endl;
	}
	else {
		k << "El socio asociado a esta rutina es: " << _Socio->getNombre() << endl;
	}
	return k.str();

}

coleccionInstruccion* Rutina::getColecc() {
	return coleccIns;
}

void Rutina::setColecc(coleccionInstruccion* cole) {
	coleccIns = cole;
}
