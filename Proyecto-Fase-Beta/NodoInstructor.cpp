#include "NodoInstructor.h"


NodoInstructor::NodoInstructor(NodoInstructor* siguiente, Instructor* dato) : siguiente(siguiente), dato(dato) {}

NodoInstructor* NodoInstructor::getSiguiente() const {
	return siguiente;
}

void NodoInstructor::setSiguiente(NodoInstructor* siguiente) {
	NodoInstructor::siguiente = siguiente;
}

Instructor* NodoInstructor::getDato() const {
	return dato;
}

void NodoInstructor::setDato(Instructor* dato) {
	NodoInstructor::dato = dato;
}

NodoInstructor::~NodoInstructor() {

}
