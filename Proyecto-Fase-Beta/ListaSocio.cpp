#include"ListaSocio.h"


ListaSocio::ListaSocio() : primero(NULL), ultimo(NULL), cantidad(0) {
}

ListaSocio::~ListaSocio() {}


void ListaSocio::ListaSocio::agregarSocio(Socio* p) {


	NodoSocio* nuevoNodo;
	if (primero == NULL) {
		primero = new NodoSocio(NULL, p);
		cantidad++;
	}
	else {
		ultimo = primero;

		while (ultimo->getSiguiente() != NULL) {
			ultimo = ultimo->getSiguiente();
		}

		nuevoNodo = new NodoSocio(NULL, p);
		ultimo->setSiguiente(nuevoNodo);
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
		elSocio = ultimo->getDato();
		if (elSocio->getNumCedula() == cedula) {
			return elSocio;
		}
		ultimo = ultimo->getSiguiente();
	}
	return NULL;
}

string ListaSocio::toString() {
	stringstream s;
	ultimo = primero;
	Socio* soc;

	while (ultimo != NULL) {
		soc = ultimo->getDato();
		s << soc->toString();
		ultimo = ultimo->getSiguiente();
	}

	return s.str();
}

string ListaSocio::datosBasicos() {
	stringstream s;

	ultimo = primero;

	Socio* soc;

	while (ultimo != NULL) {
		soc = ultimo->getDato();
		s << soc->toString();
		ultimo = ultimo->getSiguiente();
	}

	return s.str();
}

void ListaSocio::eliminarSocio(string id) {

	ultimo = primero;
	NodoSocio* aux=NULL;
	Socio* socio=NULL;
	bool encontrado = false;
	while (ultimo != NULL && !encontrado) {
		socio = ultimo->getDato();
		encontrado = (socio->getNumCedula() == id);
		if (!encontrado) {
			socio = ultimo->getDato();
			aux = ultimo;
			ultimo = ultimo->getSiguiente();
		}
	}
	if (encontrado) {
		if (ultimo = primero) {
			primero = ultimo->getSiguiente();
		}
		else {
			aux->setSiguiente(ultimo->getSiguiente());
		}

		delete socio;
		ultimo = NULL;
		cantidad--;
	}

}
