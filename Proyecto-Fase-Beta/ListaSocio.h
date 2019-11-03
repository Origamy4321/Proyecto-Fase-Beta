#pragma once
#include<iostream>
#include"NodoSocio.h"
class Socio;
class NodoSocio;
class ListaSocio {

private:

	NodoSocio* primero;
	NodoSocio* ultimo; //ULTIMO ES IGUAL A ACTUAL.
	int cantidad;

public:
	ListaSocio();

	virtual ~ListaSocio();

	virtual string toString();

	virtual string datosBasicos();

	virtual int getCant();

	virtual void setCant(int);

	virtual Socio* buscarSocio(string);

	virtual void agregarSocio(Socio*);

	void eliminarSocio(string);





};
