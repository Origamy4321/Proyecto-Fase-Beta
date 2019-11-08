
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

#include"ListaSocio.h"
#include"ListaInstructor.h"
#include"ListaSalon.h"
#include"ListaClase.h"

class Archivo {
public:

	virtual void salvarDatosSocio();
	virtual void recuperarDatosSocio();

	virtual void salvarDatosInstructor();
	virtual void recuperarDatosInstructor();

	virtual void salvarDatosClase();
	virtual void recuperarDatosClase();

	virtual void salvarDatosSalon();
	virtual void recuperarDatosSalon();

	//Archivos para Socio(PASARLOS A LA CLASE SOCIO)
	friend ostream& operator<<(ostream&, const ListaSocio&);
	friend istream& operator>>(istream&, ListaSocio&);


	//Archivos para Instructor(PASARLOS A LA CLASE INSTRUCTOR)
	friend ostream& operator<<(ostream&, const ListaInstructor&);
	friend istream& operator>>(istream&, ListaInstructor&);


	//Archivos para Clase(PASARLOS A LA CLASE CLASE)
	friend ostream& operator<<(ostream&, const ListaClase&);
	friend istream& operator>>(istream&, ListaClase&);


	//Archivos para Salon(PASARLOS A LA CLASE SALON)
	friend ostream& operator<<(ostream&, const ListaSalon&);
	friend istream& operator>>(istream&, ListaSalon&);

};
