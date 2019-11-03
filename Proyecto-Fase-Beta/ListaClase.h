#pragma once
#include "NodoClase.h"
using namespace std;

class ListaClase {

private:

	NodoClase* primero;
	NodoClase* ultimo;
	int n;

public:

	ListaClase(NodoClase* primero, NodoClase* ultimo, int n);

	ListaClase();

	void agregarClase(Clase*);

	string imprimeSociosPorClase();

	string imprimirListaClase();

	int getN() const;

	void setN(int n);

	Clase* buscarGrupo(string, string);



};

