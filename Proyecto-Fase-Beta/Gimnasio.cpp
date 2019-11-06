#include"Gimnasio.h"

Gimnasio::Gimnasio() {

	listaSalon = new ListaSalon();
	listaRutina = new ListaRutina();
	listaInstructor = new ListaInstructor();
	listaClase = new ListaClase();
	listaRegistro = new ListaRegistro();
	listaSocio = new ListaSocio();

}

void Gimnasio::agregarSocio(Socio* socio) {

	return listaSocio->agregarSocio(socio);

}

void Gimnasio::agregarRegistro(RegistroEstadisticas* reg) {

	return listaRegistro->agregarRegistro(reg);

}

void Gimnasio::agregarClase(Clase* clase) {

	return listaClase->agregarClase(clase);

}

void Gimnasio::agregarInstructor(Instructor* instructor) {

	return listaInstructor->agregarInstructor(instructor);

}

void Gimnasio::agregarRutina(Rutina* rutina) {

	return listaRutina->agregarRutina(rutina);

}

void Gimnasio::agregarSalon(Salon* salon) {

	return listaSalon->insertarInicio(salon);

}

string Gimnasio::imprimirListaSalon() {
	return listaSalon->toString();
}

string Gimnasio::imprimirListaSocio() {
	return listaSocio->toString();
}

string Gimnasio::imprimirListaRegistro() {
	return listaRegistro->listaRegistro();
}

string Gimnasio::imprimeInstructor() {
	return listaInstructor->toString();
}

string Gimnasio::imprimeRutina() {
	return listaRutina->toString();
}

string Gimnasio::imprimeClase() {
	return listaClase->imprimirListaClase();
}

Socio* Gimnasio::buscarSocio(string id) {
	return listaSocio->buscarSocio(id);
}

Rutina* Gimnasio::buscarRutina(string nombre) {
	return listaRutina->buscarRutina(nombre);
}

RegistroEstadisticas* Gimnasio::buscarRegistro(Fecha* fecha) {
	return listaRegistro->buscar(fecha);
}

Instructor* Gimnasio::buscarInstructor(string instructor) {
	return listaInstructor->buscarInstructor(instructor);
}

Clase* Gimnasio::buscarClase(string a, string b) {
	return listaClase->buscarGrupo(a, b);
}

Salon* Gimnasio::buscarSalon(string codigo) {
	return listaSalon->buscarSalon(codigo);
}

int Gimnasio::getListaSocios() {
	return listaSocio->getCant();
}

string Gimnasio::getListaClase() {
	return listaClase->imprimirListaClase();
}

string Gimnasio::getListaInstructor() {
	return listaInstructor->toString();
}
