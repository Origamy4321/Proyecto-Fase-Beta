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

      nodoInstructor* nuevoNodo;

	if (primero == NULL) {
		primero = new nodoInstructor(p, NULL);
	}
	else {
		ultimo = primero;

		while (ultimo->obtenerSiguiente() != NULL) {
			ultimo = ultimo->obtenerSiguiente();
		}

		nuevoNodo = new nodoInstructor(p, NULL);
		ultimo->fijarSiguiente(nuevoNodo);
	}

}

Instructor* ListaInstructor::buscarInstructor(string id) { //pendiente
	ultimo = primero;
	Instructor* instruc = NULL;
	while (ultimo != NULL) {
		instruc = ultimo->obtenerDato();
		if (instruc->getNumCedula() == id) { //Revisar esta linea.
			return instruc;
		}
		ultimo = ultimo->obtenerSiguiente();
	}
	return NULL;
}

string ListaInstructor::toString() { //pendiente
	stringstream r;
	ultimo = primero;
	Instructor* instruct;

	while (ultimo != NULL) {
		instruct = ultimo->obtenerDato();
		r << instruct->toString();
		ultimo = ultimo->obtenerSiguiente();
	}

	return r.str();
}
