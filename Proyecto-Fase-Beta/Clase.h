#pragma once
#include<iostream>
#include<string>
#include "Instructor.h"
#include "Salon.h"
#include "ListaSocio.h"
using namespace std;

class Clase {

private:

	string nombre;
	Instructor* elInstructor;
	string horas;
	int capacidad;
	Salon* elSalon;
	ListaSocio* listaDeSocios;


public:

	Clase(const string& nombre, Instructor* elInstructor, const string& horas, int capacidad, Salon* elSalon,
		ListaSocio* listaDeSocios);

	Clase();

	const string& getNombre() const;

	void setNombre(const string& nombre);

	Instructor* getElInstructor() const;

	void setElInstructor(Instructor* elInstructor);

	const string& getHoras() const;

	void setHoras(const string& horas);

	int getCapacidad() const;

	void setCapacidad(int capacidad);

	Salon* getElSalon() const;

	void setElSalon(Salon* elSalon);

	ListaSocio* getListaDeSocios() const;

	void setListaDeSocios(ListaSocio* listaDeSocios);

	void agregaSocios(Socio* s);

	string toString();


};

