
#include<iostream>
#include"nodoInstructor.h"

class ListaInstructor {

private:

	nodoInstructor* primero;

	nodoInstructor* ultimo;

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


