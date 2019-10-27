#include"Persona.h"
#pragma once
class Instructor : public Persona {

private:



public:


	Instructor(const string& nombre, const string& correo, const string& telefono, const string& numCedula);

	string toString();

};
