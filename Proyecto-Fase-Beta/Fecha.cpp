#include <sstream>
#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio) : dia(dia), mes(mes), anio(anio) {}

Fecha::Fecha() {}

int Fecha::getDia() const {
	return dia;
}

void Fecha::setDia(int dia) {
	Fecha::dia = dia;
}

int Fecha::getMes() const {
	return mes;
}

void Fecha::setMes(int mes) {
	Fecha::mes = mes;
}

int Fecha::getAnio() const {
	return anio;
}

void Fecha::setAnio(int anio) {
	Fecha::anio = anio;
}

string Fecha::toString() {
	stringstream s;
	string f = determinarMes(mes);
	s << dia << " de " << f << " de " << anio;
	return s.str();
}

string Fecha::determinarMes(int m) {
	switch (m) {
	case 1: return "Enero";
		break;
	case 2: return "Febrero";
		break;
	case 3: return "Marzo";
		break;
	case 4: return "Abril";
		break;
	case 5: return "Mayo";
		break;
	case 6: return "Junio";
		break;
	case 7: return "Julio";
		break;
	case 8: return "Agosto";
		break;
	case 9: return "Setiembre";
		break;
	case 10: return "Octubre";
		break;
	case 11: return "Noviembre";
		break;
	case 12: return "Diciembre";
		break;
	default:
		return "Digite un número entre 1 y 12";
	}
}

