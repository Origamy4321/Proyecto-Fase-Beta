#include "nodoInstructor.h"


nodoInstructor::nodoInstructor(Instructor* dato, nodoInstructor* siguiente)
	:dato(dato), siguiente(siguiente) {
}

nodoInstructor::~nodoInstructor() { //destructor pendiente
	/*if (siguiente != NULL) {
		delete siguiente;
	}*/
}

Instructor* nodoInstructor::obtenerDato() {
	return dato;
}

nodoInstructor* nodoInstructor::obtenerSiguiente() {
	return siguiente;
}

void nodoInstructor::definirDato(Instructor* x) {
	dato = x;
}

void nodoInstructor::fijarSiguiente(nodoInstructor* sigui) {
	siguiente = sigui;
}
