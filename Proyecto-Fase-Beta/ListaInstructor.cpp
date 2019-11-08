#pragma once
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
		if (instruc->getCedula()== id) { //Revisar esta linea.
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

string ListaInstructor::imprimeLista() {

	stringstream j;
	NodoInstructor* n = primero;
	Instructor* inst;
	while (n != NULL) {
		inst = n->getDato();
		j << inst->toString() << endl;
		n = n->getSiguiente();
	}
	return j.str();

}

ListaInstructor* ListaInstructor::determinaMejorIns() {
	NodoInstructor* actual = primero;
	NodoInstructor* aux = NULL;
	Instructor* i = NULL;
	Instructor* h = NULL;
	Instructor* ganador = NULL;
	ListaInstructor* a = new ListaInstructor();
	float caliActual, caliAux;
	float guardador1 = 0;
	float guardador2 = 0;
	if (this->getCantidad() == 1) {
		i = actual->getDato();
		a->agregarInstructor(i);
		return a;
	}
	else {
		while (actual->getSiguiente() != NULL) {
			i = actual->getDato();
			aux = actual->getSiguiente();
			h = aux->getDato();
			caliAux = h->getCalificacion();
			caliActual = i->getCalificacion();
			if (caliAux > caliActual) {
				guardador2 = caliAux;
				if (guardador2 > guardador1) {
					ganador = aux->getDato();
					actual = actual->getSiguiente();
				}
			}
			else {
				guardador1 = caliActual;
				ganador = actual->getDato();
				actual = actual->getSiguiente();
			}
		}
		a->agregarInstructor(ganador);
		return a;

	}
}