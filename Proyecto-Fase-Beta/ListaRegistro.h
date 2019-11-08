#pragma once
#include "NodoRegistro.h"
#include "Fecha.h"
using namespace std;
class ListaRegistro {

private:

	NodoRegistro* primero;
	NodoRegistro* ultimo;
	int n;

public:

	ListaRegistro(NodoRegistro* primero, NodoRegistro* ultimo, int n);

	ListaRegistro();

	void agregarRegistro(RegistroEstadisticas*);

	void eliminarRegistro(float);

	RegistroEstadisticas* buscarRegistro(Fecha*);

	virtual ~ListaRegistro();

	string listaRegistro();

	int cantidadRegistros();

	RegistroEstadisticas* buscar(Fecha*);

	string toString();

};

