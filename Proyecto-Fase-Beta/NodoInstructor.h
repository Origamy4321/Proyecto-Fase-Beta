#pragma once
#include<iostream>
#include"Instructor.h"

class nodoInstructor
{
 
	private:

		nodoInstructor* siguiente;

		Instructor* dato;

	public:

		nodoInstructor(Instructor*, nodoInstructor*);

		virtual ~nodoInstructor();

		virtual Instructor* obtenerDato();

		virtual nodoInstructor* obtenerSiguiente();

		virtual void definirDato(Instructor*);

		virtual void fijarSiguiente(nodoInstructor*);



	
};

