
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;

#include"ListaSocio.h"
#include"ListaInstructor.h"
#include"ListaSalon.h"
#include"ListaClase.h"

class Archivo {


private:

	ListaSocio* listaS;
	ListaInstructor* listaI;


public:

	Archivo();

	virtual void salvarDatosSocio(Socio*);
	virtual void recuperarDatosSocio();

	virtual void salvarDatosInstructor(Instructor*);
	virtual void recuperarDatosInstructor();

	
	

};
