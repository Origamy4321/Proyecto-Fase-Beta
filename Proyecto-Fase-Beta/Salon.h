#ifndef SALON_H
#define SALON_H
#include<iostream>
#include<string>
#include<sstream>
using std::string;
using namespace std;
class Salon {
private:
	string nombre;
	string codigo;
	int capacidad;
public:

	Salon(string, string, int);
	virtual void setNombre(string);
	virtual string getNombre();
	virtual void setCodigo(string);
	virtual string getCodigo();
	virtual void setCapacidad(int);
	virtual int getCapacidad();
	virtual ~Salon();
	virtual string toString()const;


};
#endif //SALON_H
