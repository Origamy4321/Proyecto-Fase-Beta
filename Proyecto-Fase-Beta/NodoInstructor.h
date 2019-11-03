#pragma once
#include<iostream>
#include"Instructor.h"

class NodoInstructor
{

private:

	NodoInstructor* siguiente;

	Instructor* dato;

public:

	NodoInstructor(NodoInstructor* siguiente, Instructor* dato);

	NodoInstructor* getSiguiente() const;

	void setSiguiente(NodoInstructor* siguiente);

	Instructor* getDato() const;

	void setDato(Instructor* dato);

	virtual ~NodoInstructor();

};
