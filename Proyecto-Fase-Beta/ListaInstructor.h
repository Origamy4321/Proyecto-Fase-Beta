#pragma once
#include<iostream>
#include"Socio.h"
#include"NodoInstructor.h"
#include"Instructor.h"
class Instructor;
class Socio;
class NodoInstructor;

class ListaInstructor {

private:

	NodoInstructor* primero;

	NodoInstructor* ultimo;

	int cantidad;

public:

	ListaInstructor();

	virtual ~ListaInstructor();

	virtual void setCantidad(int);

	virtual int getCantidad();

	virtual Instructor* buscarInstructor(string);

	virtual string toString();

	virtual void agregarInstructor(Instructor*);

};

