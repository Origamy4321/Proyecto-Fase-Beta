#pragma once
#include<iostream>
#include"Socio.h"

class Socio;
class NodoSocio {

private:

	NodoSocio* siguiente;

	Socio* dato;

public:

	NodoSocio(NodoSocio* siguiente, Socio* dato);

	virtual ~NodoSocio();

	NodoSocio* getSiguiente() const;

	void setSiguiente(NodoSocio* siguiente);

	Socio* getDato() const;

	void setDato(Socio* dato);
};
