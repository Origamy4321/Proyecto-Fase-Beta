#include"Salon.h"
#include<sstream>

Salon::Salon(string nombre, string codigo, int cap) :nombre(nombre), codigo(codigo), capacidad(cap) {}
Salon::~Salon() {}

string Salon::getNombre() {
	return nombre;
}
void Salon::setNombre(string n) {
	nombre = n;
}

int Salon::getCapacidad() {
	return capacidad;
}
void Salon::setCapacidad(int cap) {
	capacidad = cap;
}
void Salon::setCodigo(string cod) {
	codigo = cod;
}

string Salon::getCodigo() {
	return codigo;
}

string Salon::toString()const {
	stringstream x;
	x << "Nombre: " << nombre << "\n";
	x << "Capacidad: " << capacidad << "\n";
	x << "Codigo del salon: " << "[" << codigo << "]" << "\n";
	return x.str();
}