#include "listaSalon.h"

listaSalon::listaSalon() {

	primero = nullptr;
	actual = nullptr;
}


listaSalon::~listaSalon() {

	while (primero != nullptr) {

		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void listaSalon::insertarInicio(Salon& salon) {

	actual = new nodoSalon(salon, NULL);
	if (primero == nullptr) {

		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

string listaSalon::toString() {

	string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;

}

void listaSalon::setActual(nodoSalon*_actual) {

	actual = _actual;

}
void listaSalon::setPrimer(nodoSalon* primer) {

	primero = primer;

}

nodoSalon* listaSalon::getActual() {

	return actual;
}

nodoSalon* listaSalon::getPrimero() {

	return primero;
}