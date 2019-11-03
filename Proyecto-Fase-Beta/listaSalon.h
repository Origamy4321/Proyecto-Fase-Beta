#pragma once
#include"NodoSalon.h"

class ListaSalon
{
	NodoSalon* primero;
	NodoSalon* actual;

public:

	ListaSalon();

	virtual ~ListaSalon();

	void insertarInicio(Salon* salon);

	int totalNodos();

	NodoSalon* getPrimero();

	void setPrimer(NodoSalon* primero);

	NodoSalon* getActual();

	void setActual(NodoSalon* actual);

	string toString();

	Salon* buscarSalon(string);

};