#include "ListaClase.h"

ListaClase::ListaClase(NodoClase* primero, NodoClase* ultimo, int n) : primero(NULL), ultimo(NULL), n(0) {}

ListaClase::ListaClase() {
}

void ListaClase::agregarClase(Clase* c) {

	primero = new NodoClase(c, primero);
	n++;
}

string ListaClase::imprimeSociosPorClase() {

	ultimo = primero;
	stringstream s;
	Clase* clases = nullptr;
	while (ultimo != nullptr) {
		clases = ultimo->getClase();
		s << clases->toString() << endl;
		ultimo = ultimo->getSiguiente();

	}

	return s.str();
}

string ListaClase::imprimirListaClase() {

	stringstream s;
	ultimo = primero;
	Clase* clase = nullptr;
	while (ultimo != nullptr) {
		clase = ultimo->getClase();
		s << clase->toString() << endl;
		ultimo = ultimo->getSiguiente();

	}
	return s.str();
}

int ListaClase::getN() const {
	return n;
}

void ListaClase::setN(int n) {
	ListaClase::n = n;
}

Clase* ListaClase::buscarGrupo(string nombre, string hora) {

	ultimo = primero;
	Clase* clases = nullptr;
	while (ultimo != nullptr) {

		clases = ultimo->getClase();
		if (clases->getNombre() == nombre && clases->getHoras() == hora) {
			return clases;
		}
		ultimo = ultimo->getSiguiente();
	}
	return NULL;

}
