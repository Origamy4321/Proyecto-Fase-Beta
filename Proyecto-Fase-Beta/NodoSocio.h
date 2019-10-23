#ifndef NODO_SOCIO_H
#define NODO_SOCIO_H
#include<iostream>
#include"Socio.h"
class Socio;
class NodoSocio;
class NodoSocio {
private:
	NodoSocio* siguiente;
	Socio* dato;
public:
	NodoSocio(Socio*, NodoSocio*);

	virtual ~NodoSocio();

	virtual Socio* obtenerDato();

	virtual NodoSocio* obtenerSiguiente();

	virtual void definirDato(Socio*);

	virtual void fijarSiguiente(NodoSocio*);



};
#endif //NODO_SOCIO_H

