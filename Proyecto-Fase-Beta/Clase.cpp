#include"Clase.h"

Clase::Clase(const string& nombre, Instructor* elInstructor, const string& horas, int capacidad, Salon* elSalon,
	ListaSocio* listaDeSocios) : nombre(nombre), elInstructor(elInstructor), horas(horas),
	capacidad(capacidad), elSalon(elSalon), listaDeSocios(listaDeSocios) {}

Clase::Clase() {}

const string& Clase::getNombre() const {
	return nombre;
}

void Clase::setNombre(const string& nombre) {
	Clase::nombre = nombre;
}

Instructor* Clase::getElInstructor() const {
	return elInstructor;
}

void Clase::setElInstructor(Instructor* elInstructor) {
	Clase::elInstructor = elInstructor;
}

const string& Clase::getHoras() const {
	return horas;
}

void Clase::setHoras(const string& horas) {
	Clase::horas = horas;
}

int Clase::getCapacidad() const {
	return capacidad;
}

void Clase::setCapacidad(int capacidad) {
	Clase::capacidad = capacidad;
}

Salon* Clase::getElSalon() const {
	return elSalon;
}

void Clase::setElSalon(Salon* elSalon) {
	Clase::elSalon = elSalon;
}

ListaSocio* Clase::getListaDeSocios() const {
	return listaDeSocios;
}

void Clase::setListaDeSocios(ListaSocio* listaDeSocios) {
	Clase::listaDeSocios = listaDeSocios;
}

void Clase::agregaSocios(Socio* s) {
	return listaDeSocios->agregarSocio(s);

}

string Clase::toString() {

	stringstream s;

	s << "----Los Datos de la clase son los siguientes:------" << endl;
	s << endl;
	s << "nombre: " << nombre << endl;
	s << endl;
	s << "Horario: " << horas << endl;
	s << endl;
	s << "Codigo: " << capacidad << endl;
	s << endl;
	if (elInstructor != nullptr) {
		s << "El instructor a cargo es: " << elInstructor->getNombre() << endl;
		s << endl;
	}
	else {
		s << "No hay un instructor asignado todavía" << endl;
	}
	if (elSalon != nullptr) {
		s << "El codigo del salon es: " << elSalon->getCodigo() << endl;
		s << endl;
	}
	else {

		s << "No hay salon asignando" << endl;
	}
	if (listaDeSocios->getCant() > 0) {

		s << "Se muestran los socios inscritos" << endl;
		s << listaDeSocios->toString() << endl;

	}
	else {

		s << "No hay socios inscritos en esta clase" << endl;
	}

	return s.str();

}
