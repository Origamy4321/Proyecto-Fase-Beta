#include "Persona.h"
#include <iostream>

Persona::Persona() = default;

Persona::Persona(const std::string & nombre, int ano) : nombre(nombre), ano(ano) {}

const std::string& Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(const std::string & nombre) {
	Persona::nombre = nombre;
}

int Persona::getAno() const {
	return ano;
}
void Persona::setAno(int ano) {
	Persona::ano = ano;
}
std::ostream& operator<<(std::ostream & os, const Persona & persona) {
	os << "nombre: " << persona.nombre << " ano: " << persona.ano;
	return os;
}