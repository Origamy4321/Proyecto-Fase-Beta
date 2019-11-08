#include "Instructor.h"

Instructor::Instructor(string ced, string nom, float cal) {

	cedula = ced;
	nombre = nom;
	calificacion = cal;
	listaS = new ListaSocio();
	listaR = new ListaRutina();

}


Instructor::Instructor() {

	cedula = "";
	nombre = "";
	calificacion = 0.00;
	listaS = NULL;
	listaR = NULL;

}

Instructor::~Instructor() {

	delete listaS;
	delete listaR;

}

const string& Instructor::getCedula() const {
	return cedula;
}

void Instructor::setCedula(const string& cedula) {
	Instructor::cedula = cedula;
}

const string& Instructor::getNombre() const {
	return nombre;
}

void Instructor::setNombre(const string& nombre) {
	Instructor::nombre = nombre;
}

float Instructor::getCalificacion() const {
	return calificacion;
}

void Instructor::setCalificacion(float calificacion) {
	Instructor::calificacion = calificacion;
}

ListaSocio* Instructor::getListasocio() const {
	return listaS;
}

void Instructor::setListasocio(ListaSocio* listasocio) {
	Instructor::listaS = listasocio;
}

ListaRutina* Instructor::getListarutina() const {
	return listaR;
}

void Instructor::setListarutina(ListaRutina* listarutina) {
	Instructor::listaR = listarutina;
}

string Instructor::toString() {
	stringstream p;
	p << "---------DATOS DEL INSTRUCTOR-----" << endl;
	p << "Identificacion..." << cedula << endl;
	p << "Nombre..." << nombre << endl;
	p << "Calificacion del instructor..." << calificacion << endl;
	p << "-------Socios asignados-----" << endl;
	if (listaS->getCant() > 0) {
		p << listaS->toString() << endl;
	}
	else {
		p << "Este instructor no tiene socios asignados en estos momentos." << endl;
	}
	if (listaR->getCantidad() > 0) {
		p << "------Rutinas asignadas-----" << endl;
		p << listaR->imprimirListaRutina() << endl;
	}
	else {
		p << "No hay ninguna rutina por ver" << endl;
	}
	return p.str();

}

void Instructor::darDatosDelInstructor(Socio* soc) {
	soc->setInstructor(this);
}


void Instructor::agregarSocioLista(Socio* soc){

	listaS->agregarSocio(soc);
	this->darDatosDelInstructor(soc);

}


float Instructor::getCalificacion() {

	return calificacion;

}

void Instructor::setCalficacion(float x) {

	calificacion = x;
}