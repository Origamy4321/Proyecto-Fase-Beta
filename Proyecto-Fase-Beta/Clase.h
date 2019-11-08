#pragma once
#include<iostream>
#include<string>
#include "Instructor.h"
#include "Salon.h"
#include "ListaSocio.h"
using namespace std;
class Instructor;
class ListaSocio;
class Clase {

private:

	string nombre;
	string horario;
	string automatico;
	ListaSocio* listSo;
	Instructor* ins;
	Salon* sa;

public:

	Clase(string, string, string, Instructor*, Salon*);
	Clase();
	string getNombre();
	string getHorario();
	string getAutomatico();
	ListaSocio* getListaSocios();
	Instructor* getInstructor();
	Salon* getSalon();
	void setNombre(string);
	void setHorario(string);
	void setAutomatico(string);
	void setListaSocios(ListaSocio*);
	void setInstructor(Instructor*);
	void setSalon(Salon*);
	void agregar(Socio*);
	string toString();
	virtual ~Clase();


};

