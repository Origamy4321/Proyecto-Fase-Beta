#ifndef NODO_INSTRUCTOR_H
#define NODO_INSTRUCTOR_H
#include<iostream>
#include"Instructor.h"
class NodoInstructor {
private:
	NodoInstructor* siguiente;
	Instructor* dato;
public:
	NodoInstructor(Instructor*, NodoInstructor*);

	virtual ~NodoInstructor();

	virtual Instructor* obtenerDato();

	virtual NodoInstructor* obtenerSiguiente();

	virtual void definirDato(Instructor*);

	virtual void fijarSiguiente(NodoInstructor*);



};
#endif //NODO_INSTRUCTOR_H

