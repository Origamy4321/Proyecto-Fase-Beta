#include "Interfaz.h"

Interfaz::Interfaz(Gimnasio* gimnasio){
	Gym = new Gimnasio;
}

Interfaz::~Interfaz() {

	delete Gym;
}


void Interfaz::incluirSocio() {

	string nombre, cedula, correo, telefono,
		int dia, mes, annio;

	Fecha* fecha = NULL; //reemplazar.
	Socio* socio = NULL;
	Socio* socio1 = NULL;

	cout << "Ingrese el nombre completo del socio" << endl;
	cout << "Nombre: ";
	cin.ignore();
	getline(cin, nombre);
	cout << "Ingrese la identificación del socio" << endl;
	cin >> cedula;
	cout << "Ingrese el dia de ingreso del socio" << endl;
	dia = tomarEntero();
	cout << "Ingrese el mes de ingreso del socio " << endl;
	mes = tomarEntero();
	cout << "Ingrese el anio de ingreso del socio" << endl;
	annio = tomarEntero();
	cout << "Ingrese el correo electronico del socio" << endl;
	cin.ignore();
	getline(cin, correo);
	cout << "Ingrese el numero telefonico asociado al socio" << endl;
	cin >> telefono;
	socio1 = Gym->buscarSocio(cedula);
	if (socio == NULL) {
		if ((dia > 0 && dia < 32))
			fecha = new Fecha(dia, mes, annio);
		socio = new Socio(nombre,correo,telefono,cedula,"",nullptr,nullptr);
	}


}