#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Persona {

	string nombre;
	string correo;
	string telefono;
	string numCedula;

public:

	Persona(const string& nombre, const string& correo, const string& telefono, const string& numCedula);

	Persona();

	virtual ~Persona();

	const string& getNombre() const;

	void setNombre(const string& nombre);

	const string& getCorreo() const;

	void setCorreo(const string& correo);

	const string& getTelefono() const;

	void setTelefono(const string& telefono);

	const string& getNumCedula() const;

	void setNumCedula(const string& numCedula);

	virtual string toString();



};

