#include"Socio.h"
Socio::Socio(string nombre, int anno, string correo, string telefono, string fechaInscripcion) : Persona::Persona(nombre,anno){
	this->correo = correo;
	this->telefono = telefono;
	this->fechaInscripcion = fechaInscripcion;
}

Socio::~Socio() {}

void Socio::setCorreo(string correo) {
	Socio::correo = correo;
}

void Socio::setTelefono(string telefono) {
	Socio::telefono = telefono;
}

void Socio::setFechaInscripcion(string fechaInscripcion) {
	Socio::fechaInscripcion = fechaInscripcion;
}


string Socio::getCorreo() {
	return correo;
}

string Socio::getTelefono() {
	return telefono;
}

string Socio::getFechaInscripcion() {
	return fechaInscripcion;
}

void Socio::setAno(int ano) {
	Persona::setAno(ano);
}

string Socio::toString(){
}

string Socio::getNombre(){
	return Persona::getNombre();
}

void Socio::setNombre(string nombre) {
	Persona::setNombre(nombre);
}

int Socio::getAno() const {
	return Persona::getAno();
}

void Socio::setAno(int ano) {
	Persona::setAno(ano);
}
