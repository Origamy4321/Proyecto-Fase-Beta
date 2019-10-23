#ifndef LISTA_INSTRUCTOR_H
#define LISTA_INSTRUCTOR_H
#include<iostream>
#include"NodoInstructor.h"
class ListaInstructor;
class NodoInstructor;
class Rutina;
class Instructor;
//class Grupal;

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
#endif //LISTA_INSTRUCTOR_H
