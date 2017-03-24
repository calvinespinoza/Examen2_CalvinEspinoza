#include "Marina.h"

Marina::Marina()
{
	raza = "";
	edad = 0;
	nombre = "";
	hakiObservacion = false;
	hakiArmadura = false;
	hakiRey = false;
	fechaIngreso = "";
	rango = "";
}

Marina::Marina(string pRaza, int pEdad, string pNombre, bool pHakiObservacion, bool pHakiArmadura, bool pHakiRey, string pFechaIngreso, string pRango)  : Seres(pRaza, pEdad, pNombre, pHakiObservacion, pHakiArmadura, pHakiRey)
{
	raza = pRaza;
	edad = pEdad;
	nombre = pNombre;
	hakiObservacion = pHakiObservacion;
	hakiArmadura = pHakiArmadura;
	hakiRey = pHakiRey;
	fechaIngreso = pFechaIngreso;
	rango = pRango;
}

void Marina::setFechaIngreso(string fechaIngreso) {
	this->fechaIngreso = fechaIngreso;
}

string Marina::getFechaIngreso() {
	return this->fechaIngreso;
}

void Marina::setRango(string rango) {
	this->rango = rango;
}

string Marina::getRango() {
	return this->rango;
}
