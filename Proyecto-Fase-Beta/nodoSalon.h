#pragma once
#include"Salon.h"
class nodoSalon
{
private:
	Salon salon;
	nodoSalon* siguiente;

public:

	nodoSalon();

	nodoSalon(Salon salon, nodoSalon* siguiente);

	virtual ~nodoSalon();

	Salon& getSalon();

	void setSalon(Salon&);

	nodoSalon* getSiguiente();

	void setSiguiente(nodoSalon* elSiguiente);

	string toString();

	
	

};

