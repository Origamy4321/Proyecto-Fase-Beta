#include"ListaSocio.h"
#include"NodoSocio.h"

ListaSocio::ListaSocio() :primero(NULL), ultimo(NULL), cantidad(0) {}
ListaSocio::~ListaSocio() {}
void ListaSocio::ListaSocio::agregarSocio(Socio* p) {

	NodoSocio* actual;
	NodoSocio* nuevoNodo;
	if (primero == NULL) {
		primero = new NodoSocio(p, NULL);
		cantidad++;
	}
	else {
		actual = primero;

		while (actual->obtenerSiguiente() != NULL) {
			actual = actual->obtenerSiguiente();
		}

		nuevoNodo = new NodoSocio(p, NULL);
		actual->fijarSiguiente(nuevoNodo);
		cantidad++;
	}

}

ListaSocio::~ListaSocio() {
}
int ListaSocio::getCant() {
	return cantidad;
}
void ListaSocio::setCant(int cant) {
	cantidad = cant;
}
Socio* ListaSocio::buscarSocio(string ced) {
	NodoSocio* actual = primero;
	Socio* soc = NULL;
	while (actual != NULL) {
		soc = actual->obtenerDato();
		if (soc->getCedula() == ced) {
			return soc;
		}
		actual = actual->obtenerSiguiente();
	}
	return NULL;
}

string ListaSocio::toString() {
	stringstream s;
	NodoSocio* actual = primero;
	Socio* soc;

	while (actual != NULL) {
		soc = actual->obtenerDato();
		s << soc->toString();
		actual = actual->obtenerSiguiente();
	}

	return s.str();
}

string ListaSocio::datosBasicos() const {
	stringstream s;
	NodoSocio* actual = primero;
	Socio* soc;

	while (actual != NULL) {
		soc = actual->obtenerDato();
		s << soc->datos();
		actual = actual->obtenerSiguiente();
	}

	return s.str();
}
