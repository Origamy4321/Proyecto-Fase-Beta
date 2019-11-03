#include"NodoSocio.h"

NodoSocio::NodoSocio(NodoSocio* siguiente, Socio* dato) : siguiente(siguiente), dato(dato) {}

NodoSocio::~NodoSocio() {

}

NodoSocio* NodoSocio::getSiguiente() const {
	return siguiente;
}

void NodoSocio::setSiguiente(NodoSocio* siguiente) {
	NodoSocio::siguiente = siguiente;
}

Socio* NodoSocio::getDato() const {
	return dato;
}

void NodoSocio::setDato(Socio* dato) {
	NodoSocio::dato = dato;
}
