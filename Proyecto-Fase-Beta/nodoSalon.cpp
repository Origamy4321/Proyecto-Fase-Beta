#include "nodoSalon.h"

nodoSalon::nodoSalon(Salon salon, nodoSalon* siguiente):salon(salon), siguiente(siguiente){}

nodoSalon::~nodoSalon(){}

Salon& nodoSalon::getSalon() {

	return salon;
}

void nodoSalon::setSalon(Salon& elSalon) {

	salon = elSalon;
}

nodoSalon *nodoSalon::getSiguiente() {

	return siguiente;
}

void nodoSalon::setSiguiente(nodoSalon *siguiente) {
    nodoSalon::siguiente = siguiente;
}

string nodoSalon::toString() {
	return salon.toString();
}


