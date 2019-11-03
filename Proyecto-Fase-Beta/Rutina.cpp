#include"Rutina.h"

Rutina::Rutina(string descripcion, string codigo, Salon* salonazo
	, string fechaInicio, string fechaFinal, string objetivo, Instructor* instructor, ListaSocio* lista) {

	this->descripcion = descripcion;
	this->codigo = codigo;
	sal = salonazo;
	fechaIN = fechaInicio;
	fechaEND = fechaFinal;
	this->objetivo = objetivo;
	instr = instructor;
	list = lista;
}

Rutina::~Rutina() {}

void Rutina::setDescripcion(string f) {
	descripcion = f;
}
string Rutina::getDescripcion() {
	return descripcion;
}

void Rutina::setCodigo(string cod) {
	cod = "RU";
	int aux2;
	string x;
	stringstream s;
	srand(time(0));
	aux2 = 500 + rand() % (500 - 680);
	s << aux2;
	x = cod + s.str();
	codigo = x;
}




void Rutina::setSalon(Salon* sa) {
	sal = sa;
}

string Rutina::getCodigo() {
	return codigo;
}

Instructor* Rutina::getInstructor() {
	return instr;
}
Salon* Rutina::getSalon() {
	return sal;
}



void  Rutina::setSocio(ListaSocio* x) {
	list = x;
}


string Rutina::toString() const {
	stringstream x;
	x << "Codgio de la rutina: " << "[" << codigo << "]" << "\n";
	x << "Por Agregar :" << "\n";
	return x.str();
}

void Rutina::darDatosRutina(Socio* a) {
	cout << "hola" << endl;
}