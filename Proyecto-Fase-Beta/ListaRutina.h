#ifndef LISTA_RUTINA_H
#define LISTA_RUTINA_H
#include<iostream>
#include"NodoRutina.h"
using std::string;
class NodoRutina;
class ListaRutina;
class Clase;
class Rutina;
class Socio;
class ListaRutina {
private:
	NodoRutina* primero;
	NodoRutina* ultimo;
	int cantidad;

public:
	ListaRutina();
	virtual ~ListaRutina();
	virtual void agregarRutina(Rutina*);
	virtual Rutina* buscarRutina(string);
	virtual string toString();
	virtual void setCantidad(int);
	virtual int getCantidad();

};
#endif //LISTA_RUTINA_H
