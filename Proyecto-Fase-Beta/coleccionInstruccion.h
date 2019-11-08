#pragma once
#include "instruccionesR.h"
#include <sstream>
class coleccionInstruccion
{
private:
	instruccionesR** colecc;
	int tama;
	int can;
public:
	coleccionInstruccion(int);
	string imprimir();
	bool agregarInstruccion(instruccionesR*);
	int getTam();
	void setTam(int);
	instruccionesR** getVector();
	virtual ~coleccionInstruccion();

};

