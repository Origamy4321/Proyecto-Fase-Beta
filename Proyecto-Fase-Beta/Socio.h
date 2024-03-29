#pragma once
#include "Instructor.h"
#include"Persona.h"
#include "Rutina.h"
#include "ListaRegistro.h"
class Instructor;
class Rutina;
class Socio : public Persona {

private:

	string fechaInscripcion;
	Instructor* instructor;
	Rutina* rutinas;
	ListaRegistro* listaRegistro;
	Fecha* fecha;


public:


	Socio(const string& nombre, const string& correo, const string& telefono, const string& numCedula,
		const string& fechaInscripcion, Instructor* instructor, Rutina* rutinas);

	Socio();


	const string& getFechaInscripcion() const;

	void setFechaInscripcion(const string& fechaInscripcion);

	Instructor* getInstructor() const;

	void setInstructor(Instructor* instructor);

	string toString();

	Rutina* getRutinas() const;

	void setRutinas(Rutina* rutinas);

	ListaRegistro* getListaRegistro() const;

	void setListaRegistro(ListaRegistro* listaRegistro);

};

