#ifndef LISTA_SOCIO_H
#define LISTA_SOCIO_H
#include<iostream>
#include"NodoSocio.h"
class ListaSocio;
class Clase;
class Rutina;
class Socio;
class NodoSocio;
class ListaSocio {
private:
	NodoSocio* primero;
	NodoSocio* ultimo;
	int cantidad;
public:
	ListaSocio();
	virtual ~ListaSocio();
	virtual string toString();
	virtual string datosBasicos()const;
	virtual int getCant();
	virtual void setCant(int);
	virtual Socio* buscarSocio(string);
	virtual void agregarSocio(Socio*);

};
#endif //LISTA_SOCIO_H
