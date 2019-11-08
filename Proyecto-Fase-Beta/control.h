#pragma once
#include "Interfaz.h"
using namespace std;
class Interfaz;
class control {
public:
	control();
	void controlDeMenu();
	void controlSocios();
	void controlInstruc();
	void controlRutina();
	void controlGrupos();
	void controlRegistroCali();
	void controlRegistroEst();
	void controlAgregarSocio();
	void controlImprimeSocio();
	void controlEliminaSocio();
	void controlAgregarIns();
	void controlImprimeIns();
	void controlEliminaInstruc();
	void controlAIASo();
	void controlAsignarRutina();
	void controlBuscarRutina();
	void controlActualizarFRUV();
	void controlActualizarRegistroEst();
	void controlBuscarRegistroEs();
	void controlCrearGrupo();
	void controlAsignarInstructorClase();
	void controlMatricularSocioGrupo();
	void controlCrearSalon();
	void controlRegistrarCaliSociAIns();
	void controlVisualizarInsMayorCali();
	void desmatricularSocioDeGrupo();
	virtual ~control();
private:
	Interfaz* inter;
};

