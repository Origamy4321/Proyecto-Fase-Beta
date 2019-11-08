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

void ListaRegistro::eliminarRegistro(float peso){

	NodoRegistro* p = primero;
	NodoRegistro* aux= NULL;
	RegistroEstadisticas* so= NULL;
	bool encontrado = false;
	while (p != NULL && !encontrado) {
		so = p->getDato();
		encontrado = (so->getPeso() == peso);
		if (!encontrado) {
			aux = p;
			p = p->getSiguiente();
		}
	}
	if (encontrado) {
		if (p == primero) {
			primero = p->getSiguiente();
		}
		else {
			aux->setSiguiente(p->getSiguiente());
		}
		delete so;
		p = NULL;
	}

}

RegistroEstadisticas* ListaRegistro::buscarRegistro(Fecha* p){
	
	NodoRegistro* actual = primero;
	RegistroEstadisticas* rec1 = NULL;
	Fecha* a = NULL;
	while (actual != NULL) {
		rec1 = actual->getDato();
		a = rec1->getFecha();
		if (a->getAnio() == p->getAnio() && a->getMes() == p->getMes() && a->getDia() == p->getDia()) {
			return rec1;
		}
		actual = actual->getSiguiente();
	}
	return NULL;


}

ListaRegistro::~ListaRegistro(){
	NodoRegistro* p = primero;
	NodoRegistro* aux;
	while (p != NULL) {
		aux = p->getSiguiente();
		delete p;
		p = aux;
	}
	primero = NULL;

}

string ListaRegistro::toString(){

	stringstream s;
	NodoRegistro* actual = primero;
	RegistroEstadisticas* _registro;
	while (actual != NULL) {
		_registro = actual->getDato();
		s << _registro->toString();
		actual = actual->getSiguiente();
	}
	return s.str();

}