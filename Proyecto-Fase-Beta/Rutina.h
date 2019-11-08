#pragma once
#include"Socio.h"
#include"Fecha.h"
#include"ListaInstructor.h"
#include "coleccionInstruccion.h"
using namespace std;
class ListaInstructor;
class Fecha;
class Socio;
class Rutina
{

private:

	string codigo;
	string fechaCreada;
	Fecha* fechaEstFinal;
	string objetivo;
	Socio* _Socio;
	coleccionInstruccion* coleccIns;

public:

	Rutina();

	Rutina(string, string, Fecha*, string, Socio*);

	string getCodigo();

	void setCodigo(string);

	string getFechaCreacion();

	void setFechaCreacion(string);

	Fecha* getFecha();

	void setFecha(Fecha*);

	string getObjetivo();

	void setObjetivo(string);

	Socio* getSocio();

	void setSocio(Socio*);

	string toString();

	virtual ~Rutina();

	void setColecc(coleccionInstruccion*);

	coleccionInstruccion* getColecc();


};

