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

	NodoInstructor* nuevoNodo;

	if (primero == NULL) {
		primero = new NodoInstructor(nullptr, p);
	}
	else {
		ultimo = primero;

		while (ultimo->getSiguiente() != NULL) {
			ultimo = ultimo->getSiguiente();
		}

		nuevoNodo = new NodoInstructor(NULL, p);
		ultimo->setSiguiente(nuevoNodo);
	}

}

Instructor* ListaInstructor::buscarInstructor(string id) { //pendiente
	ultimo = primero;
	Instructor* instruc = NULL;
	while (ultimo != NULL) {
		instruc = ultimo->getDato();
		if (instruc->getNumCedula() == id) { //Revisar esta linea.
			return instruc;
		}
		ultimo = ultimo->getSiguiente();
	}
	return NULL;
}

string ListaInstructor::toString() { //pendiente
	stringstream r;
	ultimo = primero;
	Instructor* instruct;

	while (ultimo != NULL) {
		instruct = ultimo->getDato();
		r << instruct->toString();
		ultimo = ultimo->getSiguiente();
	}

	return r.str();
}