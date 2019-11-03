#pragma once
#include <string>
#include "Fecha.h"

using namespace std;

class RegistroEstadisticas {

private:
	float porcentajeMusculo;
	float porcentajeGrasa;
	float peso;
	Fecha* fecha;

public:
	RegistroEstadisticas(float porcentajeMusculo, float porcentajeGrasa, float peso, Fecha* fecha);

	RegistroEstadisticas();

	float getPorcentajeMusculo() const;

	void setPorcentajeMusculo(float porcentajeMusculo);

	float getPorcentajeGrasa() const;

	void setPorcentajeGrasa(float porcentajeGrasa);

	float getPeso() const;

	void setPeso(float peso);

	Fecha* getFecha() const;

	void setFecha(Fecha* fecha);

	void calcularIMC();

	string toString();

};