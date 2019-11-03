#pragma once
#include "RegistroEstadisticas.h"

class NodoRegistro {

private:

	NodoRegistro* siguiente;
	RegistroEstadisticas* dato;

public:

	NodoRegistro(NodoRegistro* siguiente, RegistroEstadisticas* dato);

	virtual ~NodoRegistro();

	NodoRegistro* getSiguiente() const;

	void setSiguiente(NodoRegistro* siguiente);

	RegistroEstadisticas* getDato() const;

	void setDato(RegistroEstadisticas* dato);

};
