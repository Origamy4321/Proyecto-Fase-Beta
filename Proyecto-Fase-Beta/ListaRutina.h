#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"NodoRutina.h"
#include"Clase.h"
#include"ListaSocio.h"
#include"Rutina.h"
#include"Fecha.h"
#include"Socio.h"
using namespace std;
class Fecha;
class NodoRutina;
class Clase;
class Rutina;
class Socio;
class ListaRutina {
private:
	NodoRutina* primero;
	NodoRutina* ultimo;
	int cantidad;
	bool n;

public:
	ListaRutina();
	string imprimirListaRutina();
	void eliminarRutina(string);
	virtual ~ListaRutina();
	virtual void agregarRutina(Rutina*);
	virtual Rutina* buscarRutina(string);
	virtual string toString();
	virtual void setCantidad(int);
	virtual int getCantidad();
	void asignarCodigo(Rutina*);
	ListaRutina* getVencidas(int, int, int);
	void actualizarVencidas(Fecha*);

	void setN(bool);
	bool getN();
};

