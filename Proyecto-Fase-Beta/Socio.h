#include "Instructor.h"
#include"Persona.h"
#pragma once
class Socio: public Persona {

private:

	string fechaInscripcion;
	Instructor* instructor;


public:


	Socio(const string& nombre, const string& correo, const string& telefono, const string& numCedula,
		const string& fechaInscripcion, Instructor* instructor);

	Socio();


	const string& getFechaInscripcion() const;

	void setFechaInscripcion(const string& fechaInscripcion);

	Instructor* getInstructor() const;

	void setInstructor(Instructor* instructor);

	string toString();




};
