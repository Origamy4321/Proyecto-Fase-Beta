#include"ListaSocio.h"


ListaSocio::ListaSocio() :primero(NULL), ultimo(NULL), cantidad(0) {
}
ListaSocio::~ListaSocio() {}


void ListaSocio::ListaSocio::agregarSocio(Socio* p) {


	nodoSocio* nuevoNodo;
	if (primero == NULL) {
		primero = new nodoSocio(p, NULL);
		cantidad++;
	}
	else {
		ultimo = primero;

		while (ultimo->obtenerSiguiente() != NULL) {
			ultimo = ultimo->obtenerSiguiente();
		}

		nuevoNodo = new nodoSocio(p, NULL);
		ultimo->fijarSiguiente(nuevoNodo);
		cantidad++;
	}

}


int ListaSocio::getCant() {
	return cantidad;
}
void ListaSocio::setCant(int cant) {
	cantidad = cant;
}
Socio* ListaSocio::buscarSocio(string cedula) {

	ultimo = primero;
	Socio* elSocio = NULL;
	while (ultimo != NULL) {
		elSocio =	ultimo->obtenerDato();
		if (elSocio->getNumCedula() == cedula) {
			return elSocio;
		}
		ultimo = ultimo->obtenerSiguiente();
	}
	return NULL;
}

string ListaSocio::toString() {
	stringstream s;
	ultimo = primero;
	Socio* soc;

	while (ultimo != NULL) {
		soc = ultimo->obtenerDato();
		s << soc->toString();
		ultimo = ultimo->obtenerSiguiente();
	}

	return s.str();
}

string ListaSocio::datosBasicos(){
	stringstream s;

	ultimo = primero;

	Socio* soc;

	while (ultimo != NULL) {
		soc = ultimo->obtenerDato();
		s << soc->toString();
		ultimo = ultimo->obtenerSiguiente();
	}

	return s.str();
}
