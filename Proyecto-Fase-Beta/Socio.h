#include<iostream>
#include<string>
#include"Persona.h"
class Socio: public Persona{
private:
	string correo;
	string telefono;
	string fechaInscripcion;
public:
	Socio(string, int, string, string, string);

	~Socio();

	void setCorreo(string);
	void setTelefono(string);
	void setFechaInscripcion(string);
	

	string getCorreo();
	string getTelefono();
	string getFechaInscripcion();
	

	string toString();

	string getNombre();
	void setNombre(string nombre);
	int getAno() const;
	void setAno(int ano);

















};
