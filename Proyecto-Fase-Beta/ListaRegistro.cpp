#include <sstream>
#include "ListaRegistro.h"

ListaRegistro::ListaRegistro(NodoRegistro* primero, NodoRegistro* ultimo, int n) : primero(NULL), ultimo(NULL),
n(0) {}

ListaRegistro::ListaRegistro() {


}

void ListaRegistro::agregarRegistro(RegistroEstadisticas* reg) {

	primero = new NodoRegistro(primero, reg);
	n++;
}

string ListaRegistro::listaRegistro() {
	stringstream s;
	ultimo = primero;
	RegistroEstadisticas* registroEstadisticas;
	while (ultimo != NULL) {
		registroEstadisticas = ultimo->getDato();
		s << registroEstadisticas->toString();
		ultimo = ultimo->getSiguiente();
	}
	return s.str();
}

int ListaRegistro::cantidadRegistros() {
	return n;
}

RegistroEstadisticas* ListaRegistro::buscar(Fecha* fecha) {

	ultimo = primero;
	RegistroEstadisticas* registroEstadisticas = nullptr;
	Fecha* aux = nullptr;
	while (ultimo != nullptr) {
		registroEstadisticas = ultimo->getDato();
		aux = registroEstadisticas->getFecha();
		if (aux->getDia() == fecha->getDia() && aux->getMes() == fecha->getMes() &&
			aux->getAnio() == fecha->getAnio()) {
			return registroEstadisticas;
		}
		ultimo = ultimo->getSiguiente();
	}

	return nullptr;
}

