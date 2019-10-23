#include"NodoSocio.h"

NodoSocio::NodoSocio(Socio* dato, NodoSocio* siguiente)
	: dato(dato), siguiente(siguiente) {
}

NodoSocio::~NodoSocio() {
	/*if (siguiente != NULL) {
		delete siguiente;
	}*/
}


Socio* NodoSocio::obtenerDato() {
	return dato;
}

NodoSocio* NodoSocio::obtenerSiguiente() {
	return siguiente;
}

void NodoSocio::definirDato(Socio* x) {
	dato = x;
}

void NodoSocio::fijarSiguiente(NodoSocio* sig) {
	siguiente = sig;
}