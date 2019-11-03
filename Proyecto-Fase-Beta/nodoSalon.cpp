#include "NodoSalon.h"

NodoSalon::NodoSalon(Salon* salon, NodoSalon* siguiente) : salon(salon), siguiente(siguiente) {}

NodoSalon::~NodoSalon() {}

Salon* NodoSalon::getSalon() {

	return salon;
}

void NodoSalon::setSalon(Salon* elSalon) {

	salon = elSalon;
}

NodoSalon* NodoSalon::getSiguiente() {

	return siguiente;
}

void NodoSalon::setSiguiente(NodoSalon* siguiente) {
	NodoSalon::siguiente = siguiente;
}

string NodoSalon::toString() {
	return salon->toString();
}

