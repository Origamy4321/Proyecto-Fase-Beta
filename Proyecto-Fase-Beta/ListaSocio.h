#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include"NodoSocio.h"
using namespace std;
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

	float pedirNotasPorSocio();

	void desasignarTodosLosSocios();

	ListaSocio* getListita();

	virtual ~ListaSocio();






};
