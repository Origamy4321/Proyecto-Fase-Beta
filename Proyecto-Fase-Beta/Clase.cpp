#include"Clase.h"

Clase::Clase() {
	nombre = "";
	horario = "";
	automatico = "";
	listSo = NULL;
	ins = NULL;
	sa = NULL;
}
Clase::Clase(string nom, string hor, string au, Instructor* in, Salon* s) //
{
	nombre = nom;
	horario = hor;
	automatico = au;
	listSo = new ListaSocio();
	ins = in;
	sa = s;
}

Clase::~Clase() {
	delete listSo;
	delete ins;
	delete sa;
}

string Clase::getAutomatico() {
	return automatico;
}
string Clase::getHorario() {
	return horario;
}
string Clase::getNombre() {
	return nombre;
}
ListaSocio* Clase::getListaSocios() {
	return listSo;
}
Instructor* Clase::getInstructor() {
	return ins;
}
Salon* Clase::getSalon() {
	return sa;
}
void Clase::setAutomatico(string a) {
	automatico = a;
}
void Clase::setHorario(string s) {
	horario = s;
}
void Clase::setNombre(string nom) {
	nombre = nom;
}
void Clase::setInstructor(Instructor* in) {
	ins = in;
}
void Clase::setListaSocios(ListaSocio* list) {
	listSo = list;
}
void Clase::setSalon(Salon* s) {
	sa = s;
}
void Clase::agregar(Socio* a) {
	return listSo->agregarSocio(a);
}
string Clase::toString() {
	stringstream p;
	p << "---------DATOS DEL GRUPO---------" << endl;
	p << "Nombre : " << nombre << endl;
	p << "Horario :" << horario << endl;
	p << "Codigo :" << automatico << endl;
	if (ins != NULL) {
		p << "Instructor asignado" << ins->getNombre() << endl;
	}
	else {
		p << "Instructor asignado" << ins << endl;
	}
	if (sa != NULL) {
		p << "Codigo del salon asignado " << sa->getCodigo() << endl;
	}
	else {
		p << "Codigo del salon asignado " << sa << endl;
	}
	if (listSo->getCant() > 0) {
		p << "Socios inscritos..." << endl;
		p << listSo->toString() << endl;
	}
	else {
		p << "No hay socios matriculados en este grupo" << endl;
	}
	return p.str();


}