#ifndef NODO_RUTINA_H
#define NODO_RUTINA_H
#include<iostream>
#include"Rutina.h"
class Rutina;
class NodoRutina;
class NodoRutina {
private:
	NodoRutina* siguiente;
	Rutina* dato;
public:
	NodoRutina(Rutina*, NodoRutina*);

	virtual ~NodoRutina();

	virtual Rutina* obtenerDato();

	virtual NodoRutina* obtenerSiguiente();

	virtual void definirDato(Rutina*);

	virtual void fijarSiguiente(NodoRutina*);


};
#endif //#define NODO_RUTINA_H

