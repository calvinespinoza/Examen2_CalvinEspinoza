#include "Revolucionarios.h"

Revolucionarios::Revolucionarios()
{
	raza = "";
	edad = 0;
	nombre = "";
	hakiObservacion = false;
	hakiArmadura = false;
	hakiRey = false;
	fechaIngreso = "";
}

Revolucionarios::Revolucionarios(string pRaza, int pEdad, string pNombre, bool pHakiObservacion, bool pHakiArmadura, bool pHakiRey, string pFechaIngreso) : Seres(pRaza, pEdad, pNombre, pHakiObservacion, pHakiArmadura, pHakiRey)
{
	raza = pRaza;
	edad = pEdad;
	nombre = pNombre;
	hakiObservacion = pHakiObservacion;
	hakiArmadura = pHakiArmadura;
	hakiRey = pHakiRey;
	fechaIngreso = pFechaIngreso;
}

void Revolucionarios::setFechaIngreso(string fechaIngreso) {
	this->fechaIngreso = fechaIngreso;
}

string Revolucionarios::getFechaIngreso() {
	return this->fechaIngreso;
}
