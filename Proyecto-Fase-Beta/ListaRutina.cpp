#include"ListaRutina.h"

ListaRutina::ListaRutina() :primero(NULL), ultimo(NULL), cantidad(0) {}

ListaRutina::~ListaRutina() {

	NodoRutina* n = primero;
	NodoRutina* aux= NULL;
	while (n != NULL) {

		aux->obtenerSiguiente();
		n = aux;
	}
	primero = NULL;

}

string ListaRutina::imprimirListaRutina() {

	stringstream m;
	NodoRutina* nodo = primero;
	Rutina* laRutina;
	while (nodo != NULL) {

		laRutina = nodo->obtenerDato(),
			m << laRutina->toString() << endl;
		nodo = nodo->obtenerSiguiente();

	}
	return m.str();

}

void ListaRutina::eliminarRutina(string code) {
	NodoRutina* p = primero;
	NodoRutina* aux = NULL;
	Rutina* rut= NULL;
	bool encontrado = false;
	while (p != NULL && !encontrado) {
		rut = p->obtenerDato();
		encontrado = (rut->getCodigo() == code );
		if (!encontrado) {
			aux = p;
			p = p->obtenerSiguiente();
		}
	}
	if (encontrado) {
		if (p == primero) {
			primero = p->obtenerSiguiente();
		}
		else {
			aux->fijarSiguiente(p->obtenerSiguiente());
		}
		delete rut;
		cantidad--;
		p = NULL;
	}
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

void ListaRutina::asignarCodigo(Rutina* ru) {

	int cont = 0;
	NodoRutina* actual = primero;
	Rutina* _rutina = NULL;
	string p, n;
	Socio* so = ru->getSocio();
	if (so != NULL) {
		string letra = so->getNombre();
		while (actual != NULL) {
			_rutina = actual->obtenerDato();
			p = _rutina->getCodigo();
			if (p[0] == letra[0]) {
				cont++;
			}
			actual = actual->obtenerSiguiente();
		}
		stringstream m;
		m << cont + 1;
		string a = letra[0] + m.str();
		ru->setCodigo(a);
	}
	else {
		return;
	}
}

ListaRutina* ListaRutina::getVencidas(int d, int m, int a) {

	Fecha* fechitaa = new Fecha(d, m, a);
	Fecha* f2 = NULL;
	NodoRutina* actual = primero;
	ListaRutina* listita = new ListaRutina();
	Rutina* ru = NULL;
	while (actual != NULL) {
		ru = actual->obtenerDato();
		f2 = ru->getFecha();
		if (f2->getAnio() <= fechitaa->getAnio() && f2->getMes() <= fechitaa->getMes() && f2->getDia() <= fechitaa->getDia()) {
			listita->agregarRutina(ru);
			listita->setN(true);
		}
		actual = actual->obtenerSiguiente();
	}
	return listita;

}


void ListaRutina::actualizarVencidas(Fecha* n) {
	NodoRutina* actual = primero;
	Rutina* ra = NULL;
	while (actual != NULL) {
		ra = actual->obtenerDato();
		ra->setFecha(n);
		actual = actual->obtenerSiguiente();
	}
	return;


}

bool ListaRutina::getN() {
	return n;
}
void ListaRutina::setN(bool g) {
	n = g;
}