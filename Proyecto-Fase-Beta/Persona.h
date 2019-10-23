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

		const std::string& getNombre() const;

		void setNombre(const std::string& nombre);

		int getAno() const;

		void setAno(int ano);

		friend std::ostream& operator<<(std::ostream& os, const Persona& persona);
	


};

