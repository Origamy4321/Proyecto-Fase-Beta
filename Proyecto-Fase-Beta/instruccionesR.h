#pragma once
#include <sstream>
using namespace std;
class instruccionesR
{
private:

	string instruccion;
	int repeticiones;
	int series;


public:

	instruccionesR(string, int, int);
	string getInstruccion();
	int getRepeticion();
	int getSerie();
	void setInstruccion(string);
	void setRepeticion(int);
	void setSerie(int);
	string imprimirInstru()const;
	virtual ~instruccionesR();

};

