#include"Socio.h"
Socio::Socio(string correo, string telefono, string fechaInscripcion, string nombre, int ano) : Persona(nombre), Persona(ano) {
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

void Socio::setNombre(string nombre) {
	Socio::nombre = nombre;
}

void Socio::setAno(int ano) {
	Socio::ano = ano;
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

string Socio::getNombre() {
	return nombre;
}

int Socio::getAno() {
	return ano;
}

string Socio::toString(){}