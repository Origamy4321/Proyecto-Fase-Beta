#include "NodoClase.h"

NodoClase::NodoClase(Clase* clase, NodoClase* siguiente) : clase(clase), siguiente(siguiente) {}

NodoClase::NodoClase() {

	clase = nullptr;
	siguiente = nullptr;
}

Clase* NodoClase::getClase() const {
	return clase;
}

void NodoClase::setClase(Clase* clase) {
	NodoClase::clase = clase;
}

NodoClase* NodoClase::getSiguiente() const {
	return siguiente;
}

void NodoClase::setSiguiente(NodoClase* siguiente) {
	NodoClase::siguiente = siguiente;
}
