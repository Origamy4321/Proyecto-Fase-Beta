#pragma once
#include"ListaSocio.h"
#include"ListaRutina.h"
class Rutina;
class ListaRutina;
class ListaSocio;
class Instructor
{
private:

	string cedula;
	string nombre;
	float calificacion;
	ListaSocio* listaS;
	ListaRutina* listaR;

public:

	Instructor();

	Instructor(string, string, float);

	~Instructor();

	const string& getCedula() const;

	void setCedula(const string& cedula);

	const string& getNombre() const;

	void setNombre(const string& nombre);

	float getCalificacion() const;

	void setCalificacion(float calificacion);

	ListaSocio* getListasocio() const;

	void setListasocio(ListaSocio* listasocio);

	ListaRutina* getListarutina() const;

	void setListarutina(ListaRutina* listarutina);

	string toString();

	void darDatosDelInstructor(Socio*);

	void agregarSocioLista(Socio*);

	float getCalificacion();

	void setCalficacion(float);

	void agregarRutina(Rutina*);
	
};

