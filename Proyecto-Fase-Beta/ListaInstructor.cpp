#include"ListaInstructor.h"
#include<sstream>

ListaInstructor::ListaInstructor() : primero(NULL), ultimo(NULL), cantidad(0) {}
ListaInstructor::~ListaInstructor() {}
void ListaInstructor::setCantidad(int cant) {
	ListaInstructor::cantidad = cant;
}

int ListaInstructor::getCantidad() {
	return cantidad;
}


void ListaInstructor::ListaInstructor::agregarInstructor(Instructor* p) {

	NodoInstructor* actual;
	NodoInstructor* nuevoNodo;
	if (primero == NULL) {
		primero = new NodoInstructor(p, NULL);
	}
	else {
		actual = primero;

		while (actual->obtenerSiguiente() != NULL) {
			actual = actual->obtenerSiguiente();
		}

		nuevoNodo = new NodoInstructor(p, NULL);
		actual->fijarSiguiente(nuevoNodo);
	}

}

Instructor* ListaInstructor::buscarInstructor(string id) {
	NodoInstructor* actual = primero;
	Instructor* instruc = NULL;
	while (actual != NULL) {
		instruc = actual->obtenerDato();
		if (instruc->obtenerDato() == id) {
			return instruc;
		}
		actual = actual->obtenerSiguiente();
	}
	return NULL;
}

string ListaInstructor::toString() {
	stringstream r;
	NodoInstructor* actual = primero;
	Instructor* instruct;

	while (actual != NULL) {
		instruct = actual->obtenerDato();
		r << instruct->toString();
		actual = actual->obtenerSiguiente();
	}

	return r.str();
}
