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
	stringstream m;
	m << "--------Datos del socio----------" << endl;
	m << "Cedula....." << getNumCedula() << endl;
	m << "Nombre Completo....." << getNombre() << endl;
	m << "Correo electronico....." << getCorreo() << endl;
	m << "Telefono....." << getTelefono() << endl;
	if (fecha!= NULL) {
		m << "Fecha de inscripcion...." << fecha->toString() << endl;
	}
	else {
		m << "Fecha de inscripcion..." << fecha << endl;
	}
	if (instructor != NULL) {
		m << "Instructor asignado..." << instructor->getNombre() << endl;
	}
	else {
		m << "Instructor asignado... No tiene." << endl;
	}
	if (rutinas != NULL) {
		m << rutinas->toString();
	}
	else {
		m << "Rutina asignada... No tiene" << endl;
	}
	m << "Registro de datos por dia del socio" << endl;
	if (listaRegistro->cantidadRegistros() > 0) {
		m << listaRegistro->toString();
	}
	else {
		m << "No tiene datos registrados en este momento." << endl;
	}
	return m.str();
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





