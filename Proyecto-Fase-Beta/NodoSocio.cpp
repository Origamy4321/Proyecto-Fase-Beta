#include"nodoSocio.h"

nodoSocio::nodoSocio(Socio* dato, nodoSocio* siguiente)
	: dato(dato), siguiente(siguiente) {
}

nodoSocio::~nodoSocio() {
		
}

Socio* nodoSocio::obtenerDato() {
	return dato;
}

nodoSocio* nodoSocio::obtenerSiguiente() {
	return siguiente;
}

void nodoSocio::definirDato(Socio* x) {
	dato = x;
}

void nodoSocio::fijarSiguiente(nodoSocio* sig) {
	siguiente = sig;
}