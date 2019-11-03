#include "ListaSalon.h"

ListaSalon::ListaSalon() {

	primero = nullptr;
	actual = nullptr;
}


ListaSalon::~ListaSalon() {

	while (primero != nullptr) {

		actual = primero;
		primero = primero->getSiguiente();
		delete (actual);
	}
}

void ListaSalon::insertarInicio(Salon* salon) {

	actual = new NodoSalon(salon, nullptr);
	if (primero == nullptr) {

		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

string ListaSalon::toString() {

	string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;

}

void ListaSalon::setActual(NodoSalon* _actual) {

	actual = _actual;

}

void ListaSalon::setPrimer(NodoSalon* primer) {

	primero = primer;

}

NodoSalon* ListaSalon::getActual() {

	return actual;
}

NodoSalon* ListaSalon::getPrimero() {

	return primero;
}

Salon* ListaSalon::buscarSalon(string codigo) {

	actual = primero;
	Salon* salon = nullptr;
	while (actual != nullptr) {
		salon = actual->getSalon();
		if (salon->getCodigo() == codigo) {
			return salon;
		}
		actual = actual->getSiguiente();
	}

	return nullptr;
}

