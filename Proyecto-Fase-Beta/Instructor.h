#include<iostream>
#include<string>
#include"Persona.h"
using namespace std;

class Instructor: class Persona {
private:
	string correo;
	string telefono;

public:

	Instructor(string, string, string, int);

	~Instructor();

	void setCorreo(string);
	void setTelefono(string);
	void setNombre(string);
	void setAno(int);

	string getCorreo();
	string getTelefono();
	string getNombre();
	int getAno();

	string toString();

};
