#pragma once
#include"Gimnasio.h"
using namespace std;

class Interfaz
{

private:

	Gimnasio* Gym;

public:

	Interfaz();

	Interfaz(Gimnasio*);

	~Interfaz();

	void incluirSocio();

	void visualizarDatosSocio();

	void eliminarSocio();

	void incluirInstructor();

	void imprimeListaInstructor();

	void eliminarInstructor();

	void asignarInstructorASocio();

	void asignarRutinaASocio();

	void buscarRutina();

	void actualizarRutinasVencidas();

	void actualizarRegistroEstSocio();

	void buscarRegistro();

	void visualizarRegistroEstSocioEsp();

	void incluirSocioAlgrupo();

	void crearGrupo();

	void crearSalon();

	void aisgnarInstructorGrupo();

	void matricularSocioGrupos();

	void desmatricularSociosGrupos();

	void evitarLetras(string num);

	int tomarEntero();

	void registrarNotaDeSocioaInstructor();

	void obtenerInstructorConMayorCalfica();

	void actualizarRuVencidas();

	void  incluirSocioAGrupo();

	void asignarIntructorGrupo();

	void desmatricularSociosDeGrupo();


	bool validacionDeNumeroEntero(string numero);

	void registrarNotaDeSocioAInstructor();

	void obtenerInstructorConMayorCalif()





};

