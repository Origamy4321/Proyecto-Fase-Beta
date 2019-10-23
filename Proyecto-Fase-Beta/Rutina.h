#ifndef RUTINA_H
#define RUTINA_H
#include<iostream>
#include<sstream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include "Salon.h"
#include "Instructor.h"
#include "Socio.h"
#include "ListaSocio.h"
using std::string;
class Socio;
class Rutina;
class Salon;
class Instructor;
class ListaSocio;
using namespace std;

class Rutina {

private:
	string descripcion;
	string codigo;
	Salon* sal;
	string fechaIN;
	string fechaEND;
	string objetivo;
	Instructor* instr;
	ListaSocio* list;

public:	
	Rutina(string, string, Salon*, string, string, string, Instructor*, ListaSocio*);
	virtual ~Rutina();
	virtual void setDescripcion(string);
	virtual void setCodigo(string);
	virtual void setSalon(Salon*);
	virtual void setInstructor(ListaSocio*);
	virtual void setSocio(ListaSocio*);
	virtual ListaSocio getSocio();
	virtual string getDescripcion();
	virtual string getCodigo();
	virtual Salon* getSalon();
	virtual void darDatosRutina(Socio*);
	virtual Instructor* getInstructor();
	virtual string toString()const;



};
#endif //RUTINA_H