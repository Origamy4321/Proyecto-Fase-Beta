#pragma once
#include"Salon.h"
class NodoSalon
{
private:

	Salon* salon;
	NodoSalon* siguiente;

public:

	NodoSalon();

	NodoSalon(Salon* salon, NodoSalon* siguiente);

	virtual ~NodoSalon();

	Salon* getSalon();

	void setSalon(Salon*);

	NodoSalon* getSiguiente();

	void setSiguiente(NodoSalon* elSiguiente);

	string toString();




};
