#pragma once

#include <string>
using namespace std;
class Fecha
{
private:
	int dia;
	int mes;
	int anio;

public:
	Fecha(int dia, int mes, int anio);

	Fecha();

	int getDia() const;

	void setDia(int dia);

	int getMes() const;

	void setMes(int mes);

	int getAnio() const;

	void setAnio(int anio);

	string toString();

	string determinarMes(int m);

};
