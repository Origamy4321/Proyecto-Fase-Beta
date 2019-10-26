#pragma once
#include <string>
#include <ostream>
#include<sstream>
using namespace std;
class Persona
{
		std::string nombre;
		int ano;

	public:
		Persona();

		Persona(const std::string& nombre, int ano);

		virtual const std::string& getNombre() const;

		virtual void setNombre(const std::string& nombre);

		virtual int getAno() const;

		virtual void setAno(int ano);

		friend std::ostream& operator<<(std::ostream& os, const Persona& persona);
	


};

