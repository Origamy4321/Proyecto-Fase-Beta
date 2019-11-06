#include"Socio.h"




const string& Socio::getFechaInscripcion() const {
	return fechaInscripcion;
}

void Socio::setFechaInscripcion(const string& fechaInscripcion) {
	Socio::fechaInscripcion = fechaInscripcion;
}

Instructor* Socio::getInstructor() const {
	return instructor;
}

void Socio::setInstructor(Instructor* instructor) {
	Socio::instructor = instructor;
}
string Socio::toString() {
	string reporte;

	reporte = +"Los datos del socio son los siguientes" + Persona::toString() + "Fecha de inscripcion: " +
		fechaInscripcion + "El instructor asignado es: " + instructor->getNombre() + "Las rutinas del socio son las siguientes:"
		+ rutinas->getDescripcion();


	return reporte;
}

Rutina* Socio::getRutinas() const {
	return rutinas;
}

void Socio::setRutinas(Rutina* rutinas) {
	Socio::rutinas = rutinas;
}

Socio::Socio() {

}

ListaRegistro* Socio::getListaRegistro() const {
	return listaRegistro;
}

void Socio::setListaRegistro(ListaRegistro* listaRegistro) {
	Socio::listaRegistro = listaRegistro;
}

Socio::Socio(const string& nombre, const string& correo, const string& telefono, const string& numCedula,
	const string& fechaInscripcion, Instructor* instructor, Rutina* rutinas)
	: Persona(nombre, correo, telefono, numCedula), fechaInscripcion(fechaInscripcion), instructor(instructor),
	rutinas(rutinas) {

	listaRegistro = new ListaRegistro();

}





