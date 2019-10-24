#include"Instructor.h"

Instructor::Instructor(string correo, string telefono):Persona(nombre), Persona(ano) {
	this->correo = correo;
	this->telefono = telefono;
}
/
Instructor::~Instructor(){}

void Instructor::setCorreo(string correo) {
	Instructor::correo = correo;
}

void Instructor::setTelefono(string telefono) {
	Instructor::telefono = telefono;
}

void Instructor::setNombre() {
	Instructor::nombre = nombre;
}

void Instructor::setAno(int ano) {
	Instructor::ano = ano;
}