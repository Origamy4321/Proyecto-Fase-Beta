#include "NodoRegistro.h"

NodoRegistro::NodoRegistro(NodoRegistro* siguiente, RegistroEstadisticas* dato) : siguiente(siguiente), dato(dato) {}

NodoRegistro::~NodoRegistro() {

}

NodoRegistro* NodoRegistro::getSiguiente() const {
	return siguiente;
}

void NodoRegistro::setSiguiente(NodoRegistro* siguiente) {
	NodoRegistro::siguiente = siguiente;
}

RegistroEstadisticas* NodoRegistro::getDato() const {
	return dato;
}

void NodoRegistro::setDato(RegistroEstadisticas* dato) {
	NodoRegistro::dato = dato;
}

