#include "coleccionInstruccion.h"

coleccionInstruccion::coleccionInstruccion(int tam) :tama(tam), can(0), colecc(new instruccionesR* [tam]) {
	for (int i = 0; i < tam; i++) {
		colecc[i] = NULL;
	}
}
bool coleccionInstruccion::agregarInstruccion(instruccionesR* ins) {
	if (can < tama) {
		colecc[can++] = ins;
		return true;
	}
	return false;
}
void coleccionInstruccion::setTam(int ta) {
	tama = ta;
}
int coleccionInstruccion::getTam() {
	return tama;
}
instruccionesR** coleccionInstruccion::getVector() {
	return colecc;
}

coleccionInstruccion::~coleccionInstruccion() {
	for (int i = 0; i < can; i++) {
		delete colecc[i];
	}
	delete[] colecc;
}
string coleccionInstruccion::imprimir() {
	stringstream p;
	p << "Lista de instrucciones de la rutina" << endl;
	for (int i = 0; i < can; i++) {
		if (colecc[i] != NULL) {
			p << colecc[i]->imprimirInstru() << endl;
		}
	}
	return p.str();
}

