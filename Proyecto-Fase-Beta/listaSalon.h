#pragma once
#include"nodoSalon.h"

class listaSalon
{
	nodoSalon* primero;
	nodoSalon* actual;

public:

	listaSalon();

	virtual ~listaSalon();

	void insertarInicio(Salon& salon);

	int totalNodos();

	nodoSalon* getPrimero();

	void setPrimer(nodoSalon* primero);

	nodoSalon* getActual();

	void setActual(nodoSalon* actual);

	string toString();

};

