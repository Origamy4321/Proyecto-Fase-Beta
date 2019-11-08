#include "instruccionesR.h"

instruccionesR::instruccionesR(string ins, int re, int se) :instruccion(ins), repeticiones(re), series(se) {
}
string instruccionesR::getInstruccion() {
	return instruccion;
}
int instruccionesR::getRepeticion() {
	return repeticiones;
}
int instruccionesR::getSerie() {
	return series;
}
void instruccionesR::setInstruccion(string ins) {
	instruccion = ins;
}
void instruccionesR::setRepeticion(int re) {
	repeticiones = re;
}
void instruccionesR::setSerie(int se) {
	series = se;
}
string instruccionesR::imprimirInstru() const {
	stringstream p;
	p << "Instruccion..." << instruccion << endl;
	p << "Repeticiones..." << repeticiones << endl;
	p << "Series..." << series << endl;
	return p.str();
}
instruccionesR::~instruccionesR() {
}

