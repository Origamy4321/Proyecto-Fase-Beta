#include "control.h"
control::control() :inter(new Interfaz()) {
}
void control::controlDeMenu() {
	int num = 0;
	do {
		num = inter->menuPrincipal();
		if (num != 6) {
			switch (num) {
			case 1:controlSocios();
				break;
			case 2:controlInstruc();
				break;
			case 3:controlGrupos();
				break;
			case 4:controlRutina();
				break;
			case 5:controlRegistroEst();
				break;

			}
		}
	} while (num != 6);
}
void control::controlInstruc() {
	int num = 0;
	do {
		num = inter->subMenuInstructores();
		if (num != 5) {
			switch (num) {
			case 1:controlAgregarIns();
				break;
			case 2:controlImprimeIns();
				break;
			case 3:controlEliminaInstruc();
				break;
			case 4:controlAIASo();
				break;

			}
		}
	} while (num != 5);
}

control::~control() {
	delete inter;
}
void control::controlSocios() {
	int num = 0;
	do {
		num = inter->subMenuSocios();
		if (num != 4) {
			switch (num) {
			case 1:controlAgregarSocio();
				break;
			case 2:controlImprimeSocio();
				break;
			case 3:controlEliminaSocio();
				break;

			}
		}
	} while (num != 4);
}
void control::controlRutina() {
	int num = 0;
	do {
		num = inter->subMenuRutinas();
		if (num != 4) {
			switch (num) {
			case 1:controlAsignarRutina();
				break;
			case 2:controlBuscarRutina();
				break;
			case 3:controlActualizarFRUV();
				break;
			}
		}
	} while (num != 4);
}
void control::controlGrupos() {
	int num = 0;
	do {
		num = inter->subMenuGrupos();
		if (num != 8) {
			switch (num) {
			case 1:controlCrearGrupo();
				break;
			case 2:controlAsignarInstructorClase();
				break;
			case 3:controlCrearSalon();
				break;
			case 4: controlMatricularSocioGrupo();
				break;
			case 5:desmatricularSocioDeGrupo();
				break;

			}
		}
	} while (num != 9);

}
void control::controlRegistroEst() {
	int num = 0;
	do {
		num = inter->subMenuRegistroEst();
		if (num != 4) {
			switch (num) {
			case 1:controlActualizarRegistroEst();
				break;
			case 2:controlBuscarRegistroEs();
				break;

			}
		}
	} while (num != 4);
}
void control::controlRegistroCali() {
	int num = 0;
	do {
		num = inter->subMenuRegistrarCali();
		if (num != 4) {
			switch (num) {
			case 1:controlRegistrarCaliSociAIns();
				break;
			case 2:controlVisualizarInsMayorCali();
				break;


			}
		}
	} while (num != 4);
}
void control::controlAgregarSocio() {
	inter->incluirSocio();
}
void control::controlAgregarIns() {
	inter->incluirInstructor();
}
void control::controlImprimeIns() {
	inter->incluirInstructor();
}
void control::controlEliminaInstruc() {
	inter->eliminarInstructor();
}
void control::controlAIASo() {
	inter->asignarInstructorASocio();
}
void control::controlImprimeSocio() {
	inter->visualizarDatosSocio();
}
void control::controlEliminaSocio() {
	inter->eliminarSocio();
}
void control::controlAsignarRutina() {
	inter->asignarRutinaASocio();
}
void control::controlBuscarRutina() {
	inter->buscarRutina();
}
void control::controlActualizarFRUV() {
	inter->actualizarRuVencidas();
}
void control::controlActualizarRegistroEst() {
	inter->actualizarRegistroEstSocio();
}
void control::controlBuscarRegistroEs() {
	inter->buscarRegistro();
}
void control::controlCrearGrupo() {
	inter->crearGrupo();
}
void control::controlAsignarInstructorClase() {
	inter->asignarIntructorGrupo();
}
void control::controlMatricularSocioGrupo() {
	inter->matricularSocioGrupos();
}
void control::controlCrearSalon() {
	inter->crearSalon();
}
void control::controlRegistrarCaliSociAIns() {
	inter->registrarNotaDeSocioAInstructor();
}
void control::controlVisualizarInsMayorCali() {
	inter->obtenerInstructorConMayorCalif();
}
void control::desmatricularSocioDeGrupo() {
	inter->desmatricularSociosDeGrupo();
}

