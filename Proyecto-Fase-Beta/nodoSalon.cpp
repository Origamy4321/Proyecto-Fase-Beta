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

void setSiguiente(nodoSalon* elSiguiente) {




}

string toString();



