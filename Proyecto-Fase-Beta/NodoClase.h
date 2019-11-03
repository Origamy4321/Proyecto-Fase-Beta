#include "Clase.h"
class NodoClase {

private:

	Clase* clase;

	NodoClase* siguiente;

public:

	NodoClase(Clase* clase, NodoClase* siguiente);

	NodoClase();

	Clase* getClase() const;

	void setClase(Clase* clase);

	NodoClase* getSiguiente() const;

	void setSiguiente(NodoClase* siguiente);

};