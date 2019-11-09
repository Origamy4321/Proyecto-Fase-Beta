#include"Archivo.h"

void Archivo::salvarDatosSocio(Socio* listS) {

	ofstream os("ListaDeSocios", ios::out);
	os << listaS->toString();
	os.close();

}


Archivo::Archivo() {

	listaS = NULL;
	listaI = NULL;

}

void Archivo::recuperarDatosSocio() {

	ListaSocio* listSOC = new ListaSocio();
	std::ifstream entrada("ListadoDeSocios.txt");
	if (entrada.good()) {
		std::cout << "El Archivo ListadoDeSocios.txt se abrio correctamente" << std::endl;
		string nombre, correo, telefono, numCedula, fechaInscripcion;
		while (!entrada.eof()) {
			getline(entrada, nombre, '*');
			getline(entrada, correo, '*');
			getline(entrada, telefono, '\n');
			getline(entrada, numCedula, '\n');
			getline(entrada, fechaInscripcion, '\n');
			if (!nombre.empty() && !correo.empty() && !telefono.empty() && !numCedula.empty() && !fechaInscripcion.empty()) {
				Socio* soci = new Socio(nombre, correo, telefono, numCedula, fechaInscripcion,NULL,NULL);
				listSOC->agregarSocio(soci);
			}
		}
	}
	else {
		std::cout << "El archivo no se logro abrir";
	}
	entrada.close();
	
}

void Archivo::salvarDatosInstructor(Instructor* listaI){
	ofstream os("ListadoDeInstructores.txt", ios::out);
	os << listaI->toString();
	os.close();
}

void Archivo::recuperarDatosInstructor() {
	ListaInstructor* listINS = new ListaInstructor();
	std::ifstream entrada("ListadoDeInstructores.txt");
	if (entrada.good()) {
		std::cout << "El Archivo ListadoDeInstructores.txt se abrio correctamente" << std::endl;
		string nombre, correo, telefono, numCedula;
		while (!entrada.eof()) {
			getline(entrada, nombre, '*');
			getline(entrada, correo, '*');
			getline(entrada, telefono, '\n');
			getline(entrada, numCedula, '\n');
			if (!nombre.empty() && !correo.empty() && !telefono.empty() && !numCedula.empty()) {
				Instructor* inst = new Instructor(nombre,0,0);
				listINS->agregarInstructor(inst);
			}
		}
	}
	else {
		std::cout << "El archivo no se logro abrir";
	}
	entrada.close();
	

}

