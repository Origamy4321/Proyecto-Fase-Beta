#include "Persona.h"

Persona::Persona(const string& nombre, const string& correo, const string& telefono, const string& numCedula) : nombre(
	nombre), correo(correo), telefono(telefono), numCedula(numCedula) {}

Persona::Persona() {

	nombre = "";
	correo = "";
	telefono = "";
	numCedula = "";
}

Persona::~Persona() {
}

const string& Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(const string& nombre) {
	Persona::nombre = nombre;
}

const string& Persona::getCorreo() const {
	return correo;
}

void Persona::setCorreo(const string& correo) {
	Persona::correo = correo;
}

const string& Persona::getTelefono() const {
	return telefono;
}

void Persona::setTelefono(const string& telefono) {
	Persona::telefono = telefono;
}

const string& Persona::getNumCedula() const {
	return numCedula;
}

void Persona::setNumCedula(const string& numCedula) {
	Persona::numCedula = numCedula;
}

string Persona::toString() {

	string reporte;

	reporte = " Nombre completo: " + nombre + "Numero de Cedula: " + numCedula + "Correo Electronico: "
		+ correo + "Numero de Telefono: " + telefono + "\n";

	return reporte;

}
