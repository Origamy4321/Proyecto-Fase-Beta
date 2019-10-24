#include<iostream>
#include<string>
#include"Persona.h"
class Socio: public Persona{
private:
	string correo;
	string telefono;
	string fechaInscripcion;
public:
	Socio(string, string, string, string, int);

	~Socio();

	void setCorreo(string);
	void setTelefono(string);
	void setFechaInscripcion(string);
	void setNombre(string);
	void setAno(int);

	string getCorreo();
	string getTelefono();
	string getFechaInscripcion();
	string getNombre();
	int getAno();

	string toString();
















};
