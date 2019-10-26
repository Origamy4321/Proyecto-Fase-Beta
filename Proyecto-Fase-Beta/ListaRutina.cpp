#include"listaRutina.h"

ListaRutina::ListaRutina() :primero(NULL), ultimo(NULL), cantidad(0) {}

ListaRutina::~ListaRutina() {

}

void ListaRutina::setCantidad(int cant) {
	cantidad = cant;
}
int ListaRutina::getCantidad() {
	return cantidad;
}

void ListaRutina::ListaRutina::agregarRutina(Rutina* p) {

	NodoRutina* actual;
	NodoRutina* nuevoNodo;
	if (primero == NULL) {
		primero = new NodoRutina(p, NULL);
	}
	else {
		actual = primero;

		while (actual->obtenerSiguiente() != NULL) {
			actual = actual->obtenerSiguiente();
		}

		nuevoNodo = new NodoRutina(p, NULL);
		actual->fijarSiguiente(nuevoNodo);
	}

}

Rutina* ListaRutina::buscarRutina(string cod) {
	NodoRutina* actual = primero;
	Rutina* pRutina = NULL;
	while (actual != NULL) {
		pRutina = actual->obtenerDato();
		if (pRutina->getCodigo() == cod) {
			return pRutina;
		}
		actual = actual->obtenerSiguiente();
	}
	return NULL;
}

string ListaRutina::toString() {
	stringstream e;
	NodoRutina* actual = primero;
	Rutina* pRutina;

	while (actual != NULL) {
		pRutina = actual->obtenerDato();
		e << pRutina->toString();
		actual = actual->obtenerSiguiente();
	}

	return e.str();
}
