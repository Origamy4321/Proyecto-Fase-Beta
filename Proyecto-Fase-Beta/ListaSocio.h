
#include<iostream>
#include"nodoSocio.h"

class ListaSocio {

private:

	nodoSocio* primero;
	nodoSocio* ultimo; //ULTIMO ES IGUAL A ACTUAL.
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

};

