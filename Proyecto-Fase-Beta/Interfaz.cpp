#include "Interfaz.h"

Interfaz::Interfaz(){
	Gym = new Gimnasio();
}

Interfaz::~Interfaz() {

	delete Gym;
}


void Interfaz::incluirSocio() {

	string nombre, ced, correo, telefono;
	int dia, mes, anio;
	Fecha* fechita = NULL;
	Socio* socio1 = NULL;
	Socio* socio2 = NULL;
	cout << "Ingrese el nombre completo del socio" << endl;
	cout << "Nombre: ";
	cin.ignore();
	getline(cin, nombre);
	cout << "Ingrese la identificacion del socio" << endl;
	cout << "Id: ";
	cin >> ced;
	cout << "Ingrese el dia del mes de ingreso del socio" << endl;
	dia = tomarEntero();
	cout << "Ingrese el mes de ingreso del socio (usando solo numeros)" << endl;
	mes = tomarEntero();
	cout << "Ingrese el anio de ingreso del socio" << endl;
	anio = tomarEntero();
	cout << "Ingrese el correo electronico del socio" << endl;
	cout << "Correo: ";
	cin.ignore();
	getline(cin, correo);
	cout << "Ingrese el numero telefonico asociado al socio" << endl;
	cout << "Telefono: ";
	cin >> telefono;
	socio2 = Gym->buscarSocio(ced);
	if (socio2 == NULL) {
		if ((dia > 0 && dia < 32) && (mes > 0 && mes < 13)) {
			fechita = new Fecha(dia, mes, anio);
			socio1 = new Socio(ced, nombre, correo, telefono, "Pendiente", NULL, NULL);

			Gym->agregarSocio(socio1);
			cout << "El socio con la identificacion " << ced << " ha sido registrado correctamente en el gymnasio" << endl;
			cout << "Estos son los socios agregados al gymnasio" << endl;
			cout << Gym->imprimirListaSocio() << endl;
		}
		else {
			cout << "Usted ha ingresado un dato incorrecto" << endl;
		}
	}
	else {
		cout << "La cedula " << ced << " ya se encuentra registrada" << endl;
		cout << "La persona bajo la cedula " << ced << " es: " << endl;
		cout << socio2->toString() << endl;
	}


	


}

void Interfaz::visualizarDatosSocio() {
 
	if (Gym->getSocios() > 0) {
		cout << "-----------LISTA COMPLETA DE SOCIOS REGISTRADOS------------" << endl;
		cout << Gym->imprimirListaSocio()<< endl;
	}
	else {
		cout << "Actualmente no hay socios registrados en el gimnasio." << endl;
	}


}

void Interfaz::eliminarSocio() {
	string id;
	Socio* soc = NULL;
	cout << "A continuacion, se le muestra la lista de socios registrados en el gymnasio" << endl;
	cout << Gym->imprimirListaSocio()<< endl << endl;
	cout << "Ingrese la identificacion del socio a eliminar " << endl;
	cout << "Identificacion: ";
	cin >> id;
	soc = Gym->buscarSocio(id);
	if (soc != NULL) {
		soc->setListaRegistro(NULL);
		soc->setFechaInscripcion(NULL);
		soc->setInstructor(NULL);
		Gym->eliminarSocio(id); 
		cout << "El socio con la identificacion " << id << " ha sido correctamente eliminado" << endl;
	}
	else {
		cout << "La identificacion " << id << " no corresponde a ningun socio registrado" << endl;
	}
}

void Interfaz::incluirInstructor() {
	string ced, nom;
	Instructor* ins9 = NULL;
	Instructor* lust = NULL;
	cout << "Digite el nombre completo del instructor." << endl;
	cout << "Nombre: ";
	cin.ignore();
	getline(cin, nom);
	cout << "Ingrese la identificacion del instructor." << endl;
	cout << "Identificacion: ";
	cin >> ced;
	lust = Gym->buscarInstructor(ced);
	if (lust == NULL) {
		ins9 = new Instructor(ced, nom, 0);
		Gym->agregarInstructor(ins9);
		cout << "El instructor con la identificacion [" << ced << "] se registro correctamente en el sistema." << endl;
		cout << "Lista de instructors actualizada con el nuevo instructor..." << endl << endl;
		cout << Gym->imprimeInstructor() << endl;
	}
	else {
		cout << "El instructor con la cedula " << ced << " ya se encuentra ingresado en el sistema" << endl;
		cout << endl;
		cout << "El instructor asociado a la identificacion " << ced << " es " << endl;
		cout << lust->toString() << endl;
	}
}

void Interfaz::imprimeListaInstructor() {
	cout << "-----------------------------------" << endl;
	if (Gym->getCantidadListaIns() > 0) {
		cout << "A continuacion, se le presenta la lista completa de instructores registrados" << endl;
		cout << Gym->imprimeInstructor() << endl;
	}
	else {
		cout << "En estos momentos no hay instructores registrados en el gimnasio" << endl;
	}
}

void Interfaz::eliminarInstructor() {
	string ced;
	int op;
	Instructor* ins = NULL;
	ListaSocio* list = NULL;
	ListaInstructor* listI = NULL;
	cout << "Digite la cedula del instructor que desea eliminar" << endl;
	cout << "Cedula: ";
	cin >> ced;
	ins = Gym->buscarInstructor(ced);
	if (ins != NULL) {
		list = ins->getListasocio();
		if (list->getCant() == 0) {
			Gym->eliminarInstructor(ced);
			cout << "El socio con la cedula " << ced << " ha sido correctamente eliminado" << endl;
		}
		else {
			cout << "El socio con la cedula " << ced << " no ha podido ser eliminado correctamente,";
			cout << " debido a que tiene asignado los siguientes socios: " << endl;
			cout << list->toString() << endl;
			cout << "Desea desasignar TODOS los socios para luego eliminar el instructor..." << endl;
			cout << "1-)Si." << endl;
			cout << "2-)No." << endl;
			op = tomarEntero();
			int h = op;
			switch (h) {
			case 1: list->desasignarTodosLosSocios();//Hacer
				ins->setListasocio(NULL);
				ins->setListarutina(NULL);
				Gym->eliminarInstructor(ced);//HACER ESTE METODO
				if (Gym->getCantidadListaIns() > 0) {
					cout << "A continuacion, se le presenta la nueva lista de instructores" << endl;
					cout << listI->toString() << endl;

				}
				else {
					cout << "La lista de instructores esta vacia" << endl;
				}
				break;
			case 2: cout << "El instructor con la identificacion " << ced << " no puede ser eliminado a menos que se desasignen TODOS los socios a el/ella" << endl;
				break;
			}
		}
	}
	else {
		cout << "La cedula " << ced << " no corresponde a ningun instructor registrado" << endl;
	}

}

void Interfaz::asignarInstructorASocio() {
	string cedI, cedS;
	Instructor* is = NULL;
	Socio* so = NULL;
	if (Gym->getCantidadListaIns() > 0) {
		cout << "A continuacion, se le presentan la siguiente lista de instructores registrados" << endl << endl;
		cout << Gym->imprimeInstructor() << endl;
		cout << "Ingrese la cedula del instructor que desea asignar a socio" << endl;
		cout << "Cedula: ";
		cin >> cedI;
		is = Gym->buscarInstructor(cedI);
		if (is != NULL) {
			cout << "A continuacion, se le presentan la siguiente lista de socios registrados" << endl << endl;
			cout << Gym->imprimirListaSocio() << endl << endl;
			cout << "Digite la identificacion del socio al que desea asignarle el instructor" << endl;
			cout << "Identificacion: ";
			cin >> cedS;
			so = Gym->buscarSocio(cedS);
			if (so != NULL) {
				if (so->getInstructor() == NULL) {
					is->agregarSocioLista(so);
					cout << "El socio con la id " << cedS << " ha sido correctamente asignado al instructor " << is->getNombre() << " con la id " << is->getCedula() << endl;
				}
				else {
					cout << "El socio con la id " << so->getNumCedula() << " ya tiene asignado al instructor " << so->getInstructor()->getNombre() << endl;
				}
			}
			else {
				cout << "La ced " << cedS << " no corresponde a ninguno de los socios registrados" << endl;
			}
		}
		else {
			cout << "La ced " << cedI << " no corresponde a ninguno de los instructores registrados" << endl;
		}
	}
	else {
		cout << "No hay instructores registrados en el gimnasio, favor registrar al menos uno antes de usar esta opcion del submenu " << endl;
	}
}

void Interfaz::asignarRutinaASocio() {
	string id;
	string ced;
	string objetivo;
	string descrip;
	string fechita;
	string codigo;
	int dia, dia2;
	int mes, mes2;
	int annio, an2;
	if (Gym->getCantidadListaIns() > 0) {
		cout << "Lista de instructores del gimnasio" << endl;
		cout << Gym->imprimeInstructor() << endl;
		cout << "Digite la ID del instructor" << endl;
		cin >> id;
		Instructor* instructorcito = Gym->buscarInstructor(id);
		if (instructorcito != NULL) {
			ListaSocio* list = instructorcito->getListasocio();
			if (list->getCant() > 0) {
				cout << "Lista de  socios  asignados al instructor " << endl;
				cout << list->datosBasicos() << endl;
				cout << "Digite la cedula del socio " << endl;
				cin >> ced;
				Socio* soci = list->buscarSocio(ced);
				if (soci != NULL) {
					cout << "Digite la fecha de creacion de la rutina" << endl;
					cout << "Fecha de creacion: ";
					cin.ignore();
					getline(cin, fechita);
					cout << "Digite la fecha  de finalizacion de la rutina" << endl;
					cout << "Formato dia:3,mes:4,año:2019" << endl;
					cout << "Digite el dia" << endl;
					cin >> dia2;
					cout << "Digite el mes" << endl;
					cin >> mes2;
					cout << "Digite el año" << endl;
					cin >> an2;
					Fecha* fechEND = new Fecha(dia2, mes2, an2);
					cout << "Digite el objetivo de la rutina" << endl;
					cin.ignore();
					getline(cin, objetivo);
					cout << "Digite la descripcion de  la rutina" << endl;
					cin.ignore();
					getline(cin, descrip);
					Rutina* rut = new Rutina(codigo,descrip, fechita, fechEND,objetivo, soci);
					Gym->agregarRutina(rut);
					soci->setRutinas(rut);
					instructorcito->agregarRutina(rut);
					cout << "La rutina se creo correctamente" << endl;
				}
				else {
					cout << "La cedula del socio  no se encuentra en el registro" << endl;
				}
			}
			else {
				cout << "El instructor no tiene socios Asociados" << endl;
			}

		}
		else {
			cout << "la ID del instructor no se encontro en el registro" << endl;
		}

	}
	else {
		cout << "No hay instructores contratados" << endl;
	}

}

void Interfaz::buscarRutina() {
	Rutina* rutinita = NULL;
	string cod;
	cout << "Bienvenido al buscador de rutinas " << endl;
	if (Gym->getTamListRut() > 0) {
		cout << "Ingrese el codigo de la rutina que desea acceder" << endl;
		cout << "Codigo: ";
		cin >> cod;
		rutinita = Gym->buscarRutina(cod);
		if (rutinita != NULL) {
			if (rutinita->getCodigo() == cod) {
				cout << rutinita->toString() << endl;
			}
			else {
				cout << "El codigo " << cod << " no corresponde a ninguna rutina registrada" << endl;
			}
		}
		else {
			return;
		}
	}
	else {
		cout << "No se puede buscar rutinas si no hay rutinas registradas en el gimnasio" << endl;
	}

}

void Interfaz::actualizarRuVencidas() {
	ListaRutina* lo = NULL;
	int diaF, mesF, anioF;
	Fecha* f = NULL;
	cout << "A continuacion se le muestran las rutinas registradas en el gymnasio..." << endl;
	cout << Gym->imprimeRutina() << endl;
	cout << "Ingrese la fecha actual al que desea actualizar la(s) rutina(s)" << endl;
	cout << "Dia ( dias solo del 1 al 31) : ";
	cin >> diaF;
	cout << endl;
	cout << "Mes( en numeros) : ";
	cin >> mesF;
	cout << endl;
	cout << "Anio : ";
	cin >> anioF;
	f = new Fecha(diaF, mesF, anioF);
	cout << endl;
	lo = Gym->getRutVencida(diaF, mesF, anioF);
	if (lo->getN() == true) {
		cout << lo->imprimirListaRutina() << endl;
		lo->actualizarVencidas(f);
		cout << "---------------------" << endl;
		cout << "A continuacion se le muestra la lista de rutinas vencidas actualizadas con la fecha" << f->toString() << endl;
		cout << lo->imprimirListaRutina() << endl;
	}
	else {
		cout << "No hay ninguna rutina vencida hasta el momento" << endl;

	}

}

void Interfaz::actualizarRegistroEstSocio() {
	string ced;
	int op;
	Instructor* s = NULL;
	ListaSocio* a = NULL;
	float peso, MM, GC;
	Fecha* fechitaa = NULL;
	Fecha* fechota = NULL;
	int dia, mes, anio;
	RegistroEstadisticas* r = NULL;
	ListaRegistro* ruv = NULL;
	Socio* socii = NULL;
	cout << "-----------------INCLUSION Y ACTUALIZACION DE REGISTRO ESTADISTICO A SOCIO---------" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "A continuacion se le presentan dos opciones " << endl;
	cout << "1-)Ingresar nuevo registro a socio especifico " << endl;
	cout << "2-)Actualizar registro existente " << endl;
	cout << "Digite una opcion: ";
	cin >> op;
	switch (op) {
	case 1: cout << "Se le muestra la lista de instructores registrados en el gymnasio..." << endl;
		cout << Gym->imprimeInstructor() << endl;
		cout << "Ingrese la cedula del instructor que tiene asignado el socio al que se quiere ingresar registro estadistico por fecha" << endl;
		cout << "Cedula: ";
		cin >> ced;
		s = Gym->buscarInstructor(ced);
		if (s != NULL) {
			a = s->getListasocio();
			cout << "Se muestra en pantalla, la lista de socios asociados al instructor " << s->getNombre() << " de id " << s->getCedula() << endl;
			cout << a->toString() << endl;
			cout << "Digite la identificacion de el socio al que se desea actualizar el registro " << endl;
			cout << "Identificacion: ";
			cin >> ced;
			socii = a->buscarSocio(ced);
			if (socii != NULL) {
				cout << "Ingrese la fecha del dia de hoy" << endl;
				cout << "Dia ( dias solo del 1 al 31) : ";
				cin >> dia;
				cout << endl;
				cout << "Mes( en numeros) : ";
				cin >> mes;
				cout << endl;
				cout << "Anio : ";
				cin >> anio;
				fechitaa = new Fecha(dia, mes, anio);
				cout << "Ingrese el peso actual del socio en KG" << endl;
				cout << "Peso: ";
				cin >> peso;
				cout << "Ingrese el porcentaje de masa muscular actual del socio" << endl;
				cout << "Porcentaje de masa muscular : ";
				cin >> MM;
				cout << "Ingrese el porcentaje de grasa corporal actual del socio" << endl;
				cout << "Porcentaje de grasa corporal: ";
				cin >> GC;

				ruv = socii->getListaRegistro();
				RegistroEstadisticas* d = ruv->buscarRegistro(fechitaa);
				if (d == NULL) {
					r = new RegistroEstadisticas(MM, GC, peso, fechitaa);
					ruv->agregarRegistro(r);
					cout << endl << endl;
					cout << "Los nuevos valores del socio " << socii->getNombre() << " son:" << endl;
					cout << r->toString() << endl;
				}
				else {
					cout << "La fecha " << fechitaa->toString() << " ya se encuentra asignada a un registro anterior" << endl;
					RegistroEstadisticas* m = ruv->buscarRegistro(fechitaa);
					cout << "El registro actual asociado a la fecha " << fechitaa->toString() << " es : " << endl;
					cout << m->toString() << endl;
				}
			}
			else {
				cout << "La idenficacion " << ced << "no corresponde a nigun socio asociado con el instructor " << s->getNombre() << " con id " << s->getCedula()<< endl;
			}
		}
		else {
			cout << "La identificacion " << ced << " no corresponde a ningun instructor registrado " << endl;
		}
		break;
	case 2:
		cout << "Se le muestra la lista de instructores registrados en el gymnasio..." << endl;
		cout << Gym->imprimeInstructor() << endl;
		cout << "Ingrese la cedula del instructor que tiene asignado el socio al que se quiere actualizar registro estadistico por fecha" << endl;
		cout << "Cedula: ";
		cin >> ced;
		s = Gym->buscarInstructor(ced);
		if (s != NULL) {
			a = s->getListasocio();
			cout << "Se muestra en pantalla, la lista de socios asociados al instructor " << s->getNombre() << " de id " << s->getCedula()<< endl;
			cout << a->toString() << endl;
			cout << "Digite la identificacion de el socio al que se desea actualizar el registro " << endl;
			cout << "Identificacion: ";
			cin >> ced;
			socii = a->buscarSocio(ced);
			if (socii != NULL) {
				cout << "Se le muestra en pantalla el registro estadistico del socio en cuestion ordenado por fecha" << endl;
				ruv = socii->getListaRegistro();
				//ruv->ordenarListaRegistro();
				cout << ruv->toString() << endl;
				cout << "Digite la fecha del registro que desea actualizar" << endl;
				cout << "Dia ( dias solo del 1 al 31) : ";
				cin >> dia;
				cout << endl;
				cout << "Mes( en numeros) : ";
				cin >> mes;
				cout << endl;
				cout << "Anio : ";
				cin >> anio;
				fechota = new Fecha(dia, mes, anio);
				r = ruv->buscarRegistro(fechota);
				if (ruv != NULL) {
					cout << "Digite la fecha del dia al cual desea actualizar el registro" << endl;
					cout << "Dia ( dias solo del 1 al 31) : ";
					cin >> dia;
					cout << endl;
					cout << "Mes( en numeros) : ";
					cin >> mes;
					cout << endl;
					cout << "Anio : ";
					cin >> anio;
					cout << "Ingrese el peso al que se desea actualizar el registro (KG)" << endl;
					cout << "Peso: ";
					cin >> peso;
					cout << "Ingrese el porcentaje de masa muscular  al que se desea actualizar el registro " << endl;
					cout << "Porcentaje de masa muscular : ";
					cin >> MM;
					cout << "Ingrese el porcentaje de grasa corporal al que se desea actualizar el registro" << endl;
					cout << "Porcentaje de grasa corporal: ";
					cin >> GC;
					Fecha* fi = new Fecha(dia, mes, anio);
					r->setFecha(fi);
					r->setPorcentajeGrasa(GC); //HACER ESTOS METODOS
					r->setPorcentajeMusculo(MM); //HACER ESTOS METODOS
					r->setPeso(peso);
					cout << "El registro con la fecha" << fechota->toString() << " ha sido actualizada correctamente" << endl;
					cout << "El nuevo registro queda de la siguiente forma" << endl;
					cout << r->toString() << endl;
				}
				else {
					cout << "La fecha " << fechota->toString() << " no concuerda con ningun registro ingresado a el socio" << socii->getNombre() << endl;
				}

			}
			else {
				cout << "No existe ningun socio asociado al instructor " << s->getNombre() << " con la identificacion " << ced << endl;
			}
		}
		else {
			cout << "No existe ningun instructor registrado en el gymnasio con la identificacion " << ced << endl;
		}
		break;
	default:
		cout << "La opcion " << op << " no corresponde a ninguna de las opciones dadas " << endl;

	}
}

void Interfaz::buscarRegistro() {
	string ced;
	int dia, mes, anio;
	Fecha* z = NULL;
	Socio* k = NULL;
	RegistroEstadisticas* q = NULL;
	ListaRegistro* o = NULL;
	cout << "Bienvenido al buscador de registros estadisticos de socio especifico" << endl;
	cout << endl;
	cout << "Se le muestra a continuacion, los socios registrados en el gymnasio" << endl;
	cout << Gym->getListaSocios() << endl;
	cout << "Ingrese el la identificacion del socio al cual desea acceder" << endl;
	cout << "Socio: ";
	cin >> ced;
	k = Gym->buscarSocio(ced);
	if (k != NULL) {
		cout << "Ingrese la fecha que desea consultar..." << endl;
		cout << "Dia ( dias solo del 1 al 31) : ";
		cin >> dia;
		cout << endl;
		cout << "Mes( en numeros) : ";
		cin >> mes;
		cout << endl;
		cout << "Anio : ";
		cin >> anio;
		z = new Fecha(dia, mes, anio);
		o = k->getListaRegistro();
		q = o->buscarRegistro(z);
		if (q != NULL) {
			cout << "El registro es el siguiente..." << endl;
			cout << q->toString() << endl;
		}
		else {
			cout << "No existe ningun registro asociado a la fecha " << z->toString() << " en el socio " << k->getNombre() << " con id " << k->getNumCedula() << endl;
		}
	}
	else {
		cout << "No existe ningun socio registrado con la cedula " << ced << " en el gymnasio" << endl;
	}
}

void Interfaz::visualizarRegistroEstSocioEsp() {
	string ced;
	Socio* s = NULL;
	ListaRegistro* h = NULL;
	cout << "Se muestra a continuacion, la lista de socios registrados en el gymnasio..." << endl;
	cout << Gym->imprimirListaSocio() << endl << endl;
	cout << "Ingresar cedula de socio al que se desea buscar..." << endl;
	cout << "Cedula...";
	cin >> ced;
	s = Gym->buscarSocio(ced);
	if (s != NULL) {
		h = s->getListaRegistro();
		cout << "Se muestra la lista de registros estadisticos ingresados en el socio " << endl;
		cout << h->toString() << endl;
	}
	else {
		cout << "No existe ningun socio con la identificacion " << ced << " ingresado en el gymnasio" << endl;
	}

}

void Interfaz::incluirSocioAGrupo() {// HACER ESTE METODO

}

void Interfaz::crearGrupo() {
	string nombre;
	string h;
	Clase* g = NULL;
	Clase* g1 = NULL;
	cout << "Digite el nombre del grupo" << endl;
	cin >> nombre;
	cout << "Digite el horario " << endl;
	cin >> h;
	g1 = Gym->buscarClase(nombre, h);
	if (g1 == NULL) {
		g = new Clase(nombre, h, "", NULL, NULL);
		Gym->agregarClase(g);
		cout << "El grupo con el nombre [" << nombre << "] en el horario [" << h << "] ha sido creado exitosamente" << endl;
	}
	else {
		cout << "El grupo con el nombre [" << nombre << "] con el horario [" << h << "] ya fue creado" << endl;
		cout << "Se le muestra en pantalla , el grupo con el nombre " << nombre << " y el horario " << h << endl;
		cout << g1->toString();
	}
}

void Interfaz::crearSalon() {
	string nombre;
	int capacidad;
	Salon* s = NULL;
	Salon* sa = NULL;
	if (Gym->getTamanioListaSalones() > 0) {
		cout << "Se muestran los salones creados con anterioridad " << endl;
		cout << Gym->imprimirListaSalon() << endl << endl;
	}
	else {
		cout << "No hay registrados salones en el gymnasio" << endl << endl;
	}
	cout << "Digite el nombre del salon" << endl;
	cin.ignore();
	getline(cin, nombre);
	cout << "Digite la capacidad del salon" << endl;
	cin >> capacidad;
	s = new Salon(nombre, "", capacidad);
	s->crearCodAu();
	string p = s->getCodigo();
	sa = Gym->buscarSalon(p);
	if (sa == NULL) {
		Gym->agregarSalon(s);
		cout << "El salon con el codigo " << p << " ha sido creado satisfactoriamente" << endl;
		cout << "Se le muestra la lista de salones actualizada" << endl << endl;
		cout << Gym->imprimirListaSalon() << endl;
	}
	else {
		cout << "Ya existe un salon con el codigo " << p << " registrado en el gymnasio." << endl;
		cout << "El salon es el siguiente..." << endl;
		cout << sa->toString() << endl;
		delete s;
	}


}


void Interfaz::asignarIntructorGrupo() {
	string ced;
	string nombre;
	string horario;
	Instructor* ins = NULL;
	Clase* g = NULL;
	cout << "Se le muestra en pantalla la lista instructores registrados" << endl << endl;
	cout << Gym->imprimeInstructor() << endl << endl;
	cout << "Digite el numero de cedula del instructor que va a impartir la clase" << endl;
	cin >> ced;


	ins = Gym->buscarInstructor(ced);
	if (ins != NULL) {
		cout << "Se le muestra la lista de las clases  que han sido creadas" << endl;
		cout << Gym->imprimeClase() << endl;
		cout << "Digite el nombre de la clase a la cual desea asignar el instructor" << endl;
		cin >> nombre;
		cout << "Digite el horario de la clase" << endl;
		cin >> horario;
		g = Gym->buscarClase(nombre, horario);
		if (g != NULL) {
			g->setInstructor(ins);
			cout << "Se le muestran los valores actualizados" << endl;
			cout << g->toString();
		}
		else {
			cout << "El grupo no se encuentra registrado en el gimnasio" << endl;
		}

	}
	else {
		cout << "La cedula " << ced << " no coincide con la de ningun instructor registrado en el gimnnasio" << endl;

	}
}

void Interfaz::matricularSocioGrupos() {
	Socio* s = NULL;

	Clase* g = NULL;
	Salon* a = NULL;
	ListaSocio* p = NULL;
	string nombre, ced, cod, horario;
	int cantDisp = 0;
	bool agregarmas = false;

	cout << "Los grupos disponibles son" << endl;
	cout << Gym->imprimeClase() << endl;
	cout << "Digite el nombre de la clase a la cual desea matricular" << endl;
	cin >> nombre;
	cout << "Digite el horario" << endl;
	cin >> horario;
	g = Gym->buscarClase(nombre, horario);
	if (g != NULL) {
		if (Gym->getTamanioListaSalones() > 0) {
			cout << "Se le muestra en pantalla todos los salones registrados..." << endl << endl;
			cout << Gym->imprimirListaSalon() << endl << endl;
			cout << "Ingrese el codigo del salon en el cual desea llevar a cabo el grupo" << endl;
			cout << "Codigo...";
			cin.ignore();
			getline(cin, cod);
			a = Gym->buscarSalon(cod);
			if (a != NULL) {
				g->setSalon(a);
				cout << "Se le muestra el grupo actualizado con el salon asignado..." << endl;
				cout << g->toString() << endl;
			}
			else {
				cout << "El codigo " << cod << " no corresponde a ningun salon ingresado" << endl;
				return;
			}
		}
		else {
			cout << "El gymnasio aun no tiene registrado ningun salon" << endl;
			return;
		}
		p = g->getListaSocios();
		cout << "Se le presenta a continuacion, todos los socios registrados en el gymnasio..." << endl;
		cout << Gym->imprimirListaSocio() << endl << endl;

		while (p->getCant() <= a->getCapacidad() && agregarmas == false) {
			cout << "Ingrese la cedula del socio que desea matricular" << endl;
			cout << "Cedula...";
			cin >> ced;
			Socio* soci8 = p->buscarSocio(ced);
			if (soci8 == NULL) {
				s = Gym->buscarSocio(ced);
				if (s != NULL) {
					p->agregarSocio(s);
					cout << "El socio con la identificacion " << ced << " ha sido matriculado correctamente" << endl << endl;
					cout << "Desea agregar otro socio" << endl;
					cout << "1-)Si" << endl;
					cout << "2-)No" << endl;
					cout << "Opcion...";
					int op;
					cin >> op;
					switch (op) {
					case 1: break;
						break;
					case 2: agregarmas = true;;
					default: break;
					}
				}
				else {
					cout << "La cedula " << ced << " no corresponde a ningun socio registrado " << endl;
				}
			}
			else {
				cout << "La cedula " << ced << " ya se encuentra inscrita en el grupo " << endl;
				cout << "El socio que tiene la identificacion " << ced << " es..." << endl;
				cout << soci8->toString() << endl;
			}

		}
		cantDisp = a->getCapacidad() - p->getCant();
		cout << "Datos generales del grupo..." << endl;
		cout << g->toString() << endl;
		cout << "La cantidad de espacios disponibles para matricular es de " << cantDisp << endl;
	}
}


void Interfaz::desmatricularSociosDeGrupo() {
	cout << "-------------------------------------------------------------------------" << endl;
	string nom, ced, hor;
	int j;
	Clase* grup = NULL;
	ListaSocio* listS = NULL;
	Socio* soci3 = NULL;
	Socio* soci4 = NULL;
	bool bandera1 = false;
	if (Gym->getCantClase() > 0) {
		cout << "Se le muestra en pantalla la lista de grupos registrados en el gymanasio" << endl;
		cout << Gym->imprimeClase() << endl << endl;
		cout << "Ingrese el nombre del grupo al cual desea desmatricularle socios" << endl;
		cout << "Nombre..";
		cin.ignore();
		getline(cin, nom);
		cout << endl;
		cout << "Ingrese el horario del grupo " << endl;
		cout << "Horario...";
		cin >> hor;
		grup = Gym->buscarClase(nom, hor);
		if (grup != NULL) {
			listS = grup->getListaSocios();
			if (listS->getCant() > 0) {
				cout << "Se le presentan dos opciones para desmatricular socios" << endl;
				cout << "1-)Desmatricular TODOS los socios." << endl;
				cout << "2-)Desmatricular socio especifico." << endl;
				cout << "Ingrese una de las opciones anteriores...";
				j = tomarEntero();
				int a = j;
				switch (a) {
				case 1: grup->setListaSocios(NULL);
					cout << "Todos los socios han sido desmatriculados exitosamente" << endl;
					cout << "Estos son los datos actualizados del grupo" << endl;
					cout << grup->toString() << endl;
					break;

				case 2:  cout << "Los siguientes son los socios matriculados al grupo " << grup->getNombre() << endl;
					cout << listS->toString() << endl << endl;
					cout << "Ingrese la identificacion del socio que desea desmatricular..." << endl;
					cout << "Cedula...";
					cin >> ced;
					soci3 = listS->buscarSocio(ced);
					if (soci3 != NULL) {
						listS->eliminarSocio(ced);
						cout << "El Socio con la identificacion " << ced << " ha sido correctamente desmatriculado " << endl;
						cout << "La lista de socios matriculados al grupo es la siguiente..." << endl;
						cout << listS->toString() << endl;
					}
					else {
						cout << "La identificacion " << ced << " no corresponde a ningun socio matriculado a este grupo" << endl;
					}
					while (listS->getCant() > 0 && bandera1 == false) {
						cout << "Desea eliminar otro socio del grupo..." << endl;
						cout << "1-)Si." << endl;
						cout << "2-)No." << endl;
						cout << "Opcion...";
						j = tomarEntero();
						int m = j;
						switch (m) {
						case 1: cout << "Ingrese la identificacion del socio que desea desmatricular..." << endl;
							cout << "Cedula...";
							cin >> ced;
							soci4 = listS->buscarSocio(ced);
							if (soci4 != NULL) {
								listS->eliminarSocio(ced);

							}
							else {
								cout << "La cedula " << ced << " no corresponde a ningun socio matriculado en el grupo" << endl;
							}
							break;
						case 2: bandera1 = true;
							break;
						}
					}
				}
			}
			else {
				cout << "Actualmente, el grupo con el nombre " << grup->getNombre() << " no tiene socios matriculados " << endl;
			}
		}
		else {
			cout << "El nombre u horario del grupo no coinciden con ninguno de los grupos disponibles en el gymnasio " << endl;
		}
	}
	else {
		cout << "Aun no hay grupos registrados en el gymnasio" << endl;
	}




}


bool Interfaz::validacionDeNumeroEntero(string numero) {
	int inicio = 0;
	if (numero.length() == 0) {
		return 0;
	}
	if (numero[0] == '+' || numero[0] == '-') {
		inicio = 1;
		if (numero.length() == 1) {
			return 0;
		}
	}
	for (int i = inicio; i < numero.length(); i++) {
		if (!isdigit(numero[i])) {
			return 0;
		}
	}
	return 1;

}


int Interfaz::tomarEntero() {
	string numero;
	bool esValido = false;
	while (!esValido) {
		try {
			cout << "Ingrese un numero solamente ..." << endl;
			cin >> numero;
			esValido = validacionDeNumeroEntero(numero);
			if (!esValido) {
				throw numero;
			}
		}
		catch (string m) {
			cout << "\n\nEl comando ingresado " << m << " no es valido" << endl;
		}
	}
	return atoi(numero.c_str());
}


void Interfaz::registrarNotaDeSocioAInstructor() {
	string ced;
	float n;
	Instructor* g = NULL;
	ListaSocio* ls = NULL;
	cout << "Se le muestra en pantalla todos los instructores registrados en el gymnasio hasta la fecha" << endl;
	cout << Gym->imprimeInstructor() << endl;
	cout << "Ingrese la cedula del socio al que se desea calificar desempenio" << endl;
	cout << "Cedula...";
	cin >> ced;
	g = Gym->buscarInstructor(ced);
	if (g != NULL) {
		ls = g->getListasocio();
		if (ls->getCant() > 0) {
			cout << "Conforme a los resultados de las encuestas de desempenio de los instructores: " << endl;
			cout << "Las notas asignadas por socio deberan comprender entre 0 y 100" << endl;
			n = ls->pedirNotasPorSocio();
			g->setCalificacion(n);
			cout << "La calificacion final obtenida por el instructor " << g->getNombre() << " es de: " << n << endl;
		}
		else {
			cout << "El instructor " << g->getNombre() << " no tiene ningun socio asignado en estos momentos" << endl;
		}
	}
	else {
		cout << "No hay ningun instructor registrado con la identificacion " << ced << endl;
	}
}

void Interfaz::obtenerInstructorConMayorCalif() {
	int op;
	if (Gym->getCantidadListaIns() > 0) {
		cout << "A continuacion, se le mostrara en pantalla, el instructor que posee el promedio de calificacion de desempenio mas alta segun ";
		cout << " los socios asociados a su nombre" << endl;
		ListaInstructor* h = Gym->getListaIns();
		ListaInstructor* h1 = NULL;
		h1 = h->determinaMejorIns();
		cout << "Se muestra en pantalla el(los) socio(s) con mayor calificacion para que sean recompensados" << endl;
		cout << h->imprimeLista() << endl;
	}
	else {
		cout << "Aun no hay ningun instructor registrado en el gymnasio" << endl;
		cout << "Desea ingresar un instructor..." << endl;
		cout << "1-)Si." << endl;
		cout << "2-)No." << endl;
		cout << "Ingrese una de las opciones anteriores...";
		cin >> op;
		switch (op) {
		case 1:
			incluirInstructor();
			break;
		case 2:return;
			break;
		default: cout << "El valor " << op << "no corresponde a ninguna de las opciones anteriores" << endl;

		}
	}
}



void Interfaz::imprimirListadeSocios() {

	cout << Gym->imprimirListaSocio();

}


int Interfaz::menuPrincipal() {
	int num;
	cout << "--------Bienvenido al sistema--------------" << endl;
	cout << "Tiene a su disposicion, los siguientes menus" << endl;
	do {
		cout << "A cual desea ingresar..." << endl;
		cout << "1-)Submenu de socio." << endl;
		cout << "2-)Submenu de instructor" << endl;
		cout << "3-)Submenu de grupos." << endl;
		cout << "4-)Submenu de rutinas." << endl;
		cout << "5-)Submenu de registro estadistico del socio." << endl;
		cout << "6-)Salir del sistema." << endl;
		cout << endl;
		num = tomarEntero();

	} while (!(num > 0 && num < 7));
	return num;
}
int Interfaz::subMenuGrupos() {
	int op;
	do {
		cout << "--------------MENU GRUPOS------------------" << endl;
		cout << "A continuacion se le presentan las siguientes opciones..." << endl;
		cout << "1-)Crear un nuevo grupo." << endl;
		cout << "2-)Asignar Instructor a Grupo" << endl;
		cout << "3-)Registrar Salon" << endl;
		cout << "4-)Matricular Socios y Asignar Salon a Grupo" << endl;
		cout << "5-)Desmatricular Socios de Grupos" << endl;
		cout << "6-)Visualizar todos los grupos disponibles" << endl;
		cout << "7-) Visualizar clases por salon " << endl;
		cout << "8-) Visualizar socios por clase" << endl;;
		cout << "9-)Regresar al menu principal" << endl;
		op = tomarEntero();
	} while (!(op > 0 && op < 10));
	return op;


}
int Interfaz::subMenuInstructores() {
	int op;
	do {
		cout << "--------------MENU INSTRUCTORES------------------" << endl;
		cout << "A continuacion se le presentan las siguientes opciones..." << endl;
		cout << "1-)Registrar nuevo instructor." << endl;
		cout << "2-)Visualizar informacion del instructor." << endl;
		cout << "3-)Eliminar instructor." << endl;
		cout << "4-)Asignar instructor a socio especifico." << endl;
		cout << "5-)Regresar al menu principal." << endl;
		op = tomarEntero();
	} while (!(op > 0 && op < 6));
	return op;

}
int Interfaz::subMenuSocios() {
	int op;
	do {
		cout << "--------------MENU SOCIOS------------------" << endl;
		cout << "A continuacion se le presentan las siguientes opciones..." << endl;
		cout << "1-)Registrar socio." << endl;
		cout << "2-)Visualizar datos del socio." << endl;
		cout << "3-)Eliminar socio." << endl;
		cout << "4-)Regresar al menu principal." << endl;
		op = tomarEntero();
	} while (!(op > 0 && op < 5));
	return op;

}
int Interfaz::subMenuRutinas() {
	int num;
	do {
		cout << "---------------MENU RUTINA------------------" << endl;
		cout << "1-)Asignar rutina a socio." << endl;
		cout << "2-)Buscar rutina de socio especifico." << endl;
		cout << "3-)Actualizar rutinas de socios." << endl;
		cout << "4-)Regresar al menu principal." << endl;
		cout << "Ingrese alguna de las opciones anteriores" << endl;
		num = tomarEntero();
	} while (!(num > 0 && num < 5));
	return num;
}
int Interfaz::subMenuRegistroEst() {
	int num;
	do {
		cout << "---------------MENU REGISTRO ESTADISTICO------------------" << endl;
		cout << "1-)Incluir o actualizar registro estadistico a socio ." << endl;
		cout << "2-)Buscar registro estadistico especifico." << endl;
		cout << "3-)Visualizar registro estadistico de socio especifico" << endl;
		cout << "4-)Regresar al menu principal." << endl;
		num = tomarEntero();
	} while (!(num > 0 && num < 5));
	return num;
}
int Interfaz::subMenuRegistrarCali() {
	int num;
	do {
		cout << "---------------MENU REGISTRO DE CALIFICACIONES Y VISUALIZACION DEL DESEMPENIO------------------" << endl;
		cout << "1-)Registrar nota de socios a instructores ." << endl;
		cout << "2-)Visualizar mejor instructor segun nota de socio" << endl;
		cout << "3-)Registrar nota dada a socios por instructores" << endl;
		cout << "4-)Visualizar mejor socio por instructor." << endl;
		num = tomarEntero();
	} while (!(num > 0 && num < 5));
	return num;
}