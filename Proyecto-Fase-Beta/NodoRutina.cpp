#include"NodoRutina.h"
#include"ListaRutina.h"

NodoRutina::NodoRutina(Rutina* dato, NodoRutina* siguiente)
	:dato(dato), siguiente(siguiente) {
}

NodoRutina::~NodoRutina() {
}

Rutina* NodoRutina::obtenerDato() {
	return dato;
}

NodoRutina* NodoRutina::obtenerSiguiente() {
	return siguiente;
}

void NodoRutina::definirDato(Rutina* r) {
	dato = r;
}

void NodoRutina::fijarSiguiente(NodoRutina* next) {
	siguiente = next;
}

