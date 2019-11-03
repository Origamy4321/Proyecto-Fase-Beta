#include <sstream>
#include "RegistroEstadisticas.h"

RegistroEstadisticas::RegistroEstadisticas(float porcentajeMusculo, float porcentajeGrasa, float peso, Fecha* fecha)
	: porcentajeMusculo(porcentajeMusculo), porcentajeGrasa(porcentajeGrasa), peso(peso), fecha(fecha) {}

RegistroEstadisticas::RegistroEstadisticas() {}

float RegistroEstadisticas::getPorcentajeMusculo() const {
	return porcentajeMusculo;
}

void RegistroEstadisticas::setPorcentajeMusculo(float porcentajeMusculo) {
	RegistroEstadisticas::porcentajeMusculo = porcentajeMusculo;
}

float RegistroEstadisticas::getPorcentajeGrasa() const {
	return porcentajeGrasa;
}

void RegistroEstadisticas::setPorcentajeGrasa(float porcentajeGrasa) {
	RegistroEstadisticas::porcentajeGrasa = porcentajeGrasa;
}

float RegistroEstadisticas::getPeso() const {
	return peso;
}

void RegistroEstadisticas::setPeso(float peso) {
	RegistroEstadisticas::peso = peso;
}

Fecha* RegistroEstadisticas::getFecha() const {
	return fecha;
}

void RegistroEstadisticas::setFecha(Fecha* fecha) {
	RegistroEstadisticas::fecha = fecha;
}

void RegistroEstadisticas::calcularIMC() {

}

string RegistroEstadisticas::toString() {
	stringstream s;
	if (fecha != nullptr) {
		s << "Fecha: " << fecha->toString() << endl;
	}
	else {
		s << "Fecha..." << fecha << endl;
	}
	s << "El porcentaje de grasa Corporal es: " << porcentajeGrasa << endl;
	s << "Porcentaje de masa muscular es: " << porcentajeMusculo << endl;
	s << "El peso en kilos es de: " << peso << endl;

	return s.str();

}
