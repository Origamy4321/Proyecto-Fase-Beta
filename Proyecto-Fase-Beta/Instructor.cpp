#include"Instructor.h"

Instructor::Instructor(const string& nombre, const string& correo, const string& telefono, const string& numCedula)
	: Persona(nombre, correo, telefono, numCedula) {}

string Instructor::toString() {
	return Persona::toString();
}

