#include"NodoInstructor.h"

NodoInstructor::NodoInstructor(Instructor* dato, NodoInstructor* siguiente)
	:dato(dato), siguiente(siguiente) {
}

NodoInstructor::~NodoInstructor() {
	/*if (siguiente != NULL) {
		delete siguiente;
	}*/
}

Instructor* NodoInstructor::obtenerDato() {
	return dato;
}

NodoInstructor* NodoInstructor::obtenerSiguiente() {
	return siguiente;
}

void NodoInstructor::definirDato(Instructor* x) {
	dato = x;
}

void NodoInstructor::fijarSiguiente(NodoInstructor* sigui) {
	siguiente = sigui;
}
