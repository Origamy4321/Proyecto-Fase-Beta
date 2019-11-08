#pragma once

#include<iostream>	
#include<sstream>
#include "ListaRegistro.h"
#include "ListaSocio.h"
#include "ListaClase.h"
#include "ListaInstructor.h"
#include "ListaRutina.h"
#include "ListaSalon.h"

class Gimnasio {

private:
	ListaSocio* listaSocio;
	ListaRegistro* listaRegistro;
	ListaClase* listaClase;
	ListaInstructor* listaInstructor;
	ListaRutina* listaRutina;
	ListaSalon* listaSalon;

public:

	Gimnasio();

	void agregarSocio(Socio*);

	void agregarRegistro(RegistroEstadisticas*);

	void agregarClase(Clase*);

	void agregarInstructor(Instructor*);

	void agregarRutina(Rutina*);

	void agregarSalon(Salon*);

	string imprimirListaSalon();

	string imprimirListaSocio();

	string imprimirListaRegistro();

	string imprimeInstructor();

	string imprimeRutina();

	string imprimeClase();

	Socio* buscarSocio(string);

	Rutina* buscarRutina(string);

	RegistroEstadisticas* buscarRegistro(Fecha*);

	Instructor* buscarInstructor(string);

	Clase* buscarClase(string, string);

	Salon* buscarSalon(string);

	string getListaSocios();

	string getListaClase();

	string getListaInstructor();

	int getTamListRut();

	ListaRutina* getRutVencida(int, int, int);

	int getTamanioListaSalones();

	int getCantidadListaIns();


};
