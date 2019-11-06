#include"Archivo.h"
#include<sstream>
#include<fstream>
using namespace std;

void Archivo::salvarDatosClase(){
	ostream os("ListadoDeClases.txt", ios::out);
	if (os) {
		//Agregar recorrido
		os.close();
	}
	else {
		cout << "No se logro abrir el archivo" << endl;
	}

}



void Archivo::recuperarDatosClase(){
	
	//this->limpiarContenedor(); m

	Clase c;     

	ifstream is("ListadoDeClases.txt", ios::in);
	if (is) {
		is >> c;
		while (!is.eof()) {
			Clase* ptr = new Clase(c.getNombre(), c.getIdentifi(), c.getEdad(), c.getEstatura()); //Modificar con los atributos de cada clase
			this->insertarClase(ptr);
			is >> c;
		}
	}
	else {
		cout << "No se pudo abrir la lectura" << endl;
	}
}

//////////////////////////////////////////////////////////////////////////

void Archivo::salvarDatosInstructor(){
	ostream os("ListadoDeInstructores.txt", ios::out);
	if (os) {
		//Agregar recorrido
		os.close();
	}
	else {
		cout << "No se logro abrir el archivo" << endl;
	}
}



void Archivo::recuperarDatosInstructor(){
	//this->limpiarContenedor();

	Instructor i;

	ifstream is("ListadoDeInstructores.txt", ios::in);
	if (is) {
		is >> i;
		while (!is.eof()) {
			Instructor* ptr = new Instructor(i.getNombre(), i.getIdentifi(), i.getEdad(), i.getEstatura()); //Modificar con los atributos de cada clase
			this->insertarInstructor(ptr);
			is >> i;
		}
	}
	else {
		cout << "No se pudo abrir la lectura" << endl;
	}
}

///////////////////////////////////////////////////////////////////////////

void Archivo::salvarDatosSocio(){
	ostream os("ListadoDeSocios.txt", ios::out);
	if (os) {
		//Agregar recorrido
		os.close();
	}
	else {
		cout << "No se logro abrir el archivo" << endl;
	}
}



void Archivo::recuperarDatosSocio(){
	//this->limpiarContenedor();

	Socio s;

	ifstream is("ListadoDeSocios.txt", ios::in);
	if (is) {
		is >> s;
		while (!is.eof()) {
			Socio* ptr = new Socio(s.getNombre(), s.getIdentifi(), s.getEdad(), s.getEstatura()); //Modificar con los atributos de cada clase
			this->insertarSocio(ptr);
			is >> s;
		}
	}
	else {
		cout << "No se pudo abrir la lectura" << endl;
	}
}

//////////////////////////////////////////////////////////////////////////

void Archivo::salvarDatosSalon() {
	ostream os("ListadoDeSalones.txt", ios::out);
	if (os) {
		//Agregar recorrido
		os.close();
	}
	else {
		cout << "No se logro abrir el archivo" << endl;
	}
}



void Archivo::recuperarDatosSalon() {
	//this->limpiarContenedor();

	Salon a;

	ifstream is("ListadoDeSalones.txt", ios::in);
	if (is) {
		is >> a;
		while (!is.eof()) {
			Salon* ptr = new Salon(a.getNombre(), a.getIdentifi(), a.getEdad(), a.getEstatura()); //Modificar con los atributos de cada clase
			this->insertarSalon(ptr);
			is >> a;
		}
	}
	else {
		cout << "No se pudo abrir la lectura" << endl;
	}
}


///////////////////////////////////////////////////////////////////////////

//Archivos de texto para CLASE

ostream& operator<<(ostream& out, const Clase& c) {
	return out << c.identifi << endl << c.edad << endl << c.estatura << endl;  //Modificar con los atributos de cada clase
}

istream& operator>>(istream& in, Clase& c) {
	return in >> c.nombre >> c.identifi >> c.edad >> c.estatura;  //Modificar con los atributos de cada clase
}

//Archivos de texto para INSTRUCTOR

ostream& operator<<(ostream& out, const Instructor& i) {
	return out << i.identifi << endl << i.edad << endl << i.estatura << endl;  //Modificar con los atributos de cada clase
}

istream& operator>>(istream& in, Instructor& i) {
	return in >> i.nombre >> i.identifi >> i.edad >> i.estatura;  //Modificar con los atributos de cada clase
}


//Archivos de texto para SOCIO

ostream& operator<<(ostream& out, const Socio& s) {
	return out << s.identifi << endl << s.edad << endl << s.estatura << endl; //Modificar con los atributos de cada clase
}

istream& operator>>(istream& in, Socio& s) {
	return in >> s.nombre >> s.identifi >> s.edad >> s.estatura; //Modificar con los atributos de cada clase
}

//Archivos de texto para SALON

ostream& operator<<(ostream& out, const Salon& a) {
	return out << a.identifi << endl << a.edad << endl << a.estatura << endl; //Modificar con los atributos de cada clase
}

istream& operator>>(istream& in, Salon& a) {
	return in >> a.nombre >> a.identifi >> a.edad >> a.estatura; //Modificar con los atributos de cada clase
}

