#ifndef NODO_SOCIO_H
#define NODO_SOCIO_H
#include<iostream>
#include"Socio.h"


class nodoSocio {

private:

	nodoSocio* siguiente;

	Socio* dato;

public:

	nodoSocio(Socio*, nodoSocio*);

	virtual ~nodoSocio();

	virtual Socio* obtenerDato();

	virtual nodoSocio* obtenerSiguiente();

	virtual void definirDato(Socio*);

	virtual void fijarSiguiente(nodoSocio*);



};
#endif //NODO_SOCIO_H

