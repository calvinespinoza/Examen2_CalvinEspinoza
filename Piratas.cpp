#include "Piratas.h"

Piratas::Piratas()
{
	raza = "";
	edad = 0;
	nombre = "";
	hakiObservacion = false;
	hakiArmadura = false;
	hakiRey = false;
	oceano = "";
	tripulacion = "";
	funcion = "";
}

Piratas::Piratas(string pRaza, int pEdad, string pNombre, bool pHakiObservacion, bool pHakiArmadura, bool pHakiRey, string pOceano, string pTripulacion, string pFuncion) : Seres(pRaza, pEdad, pNombre, pHakiObservacion, pHakiArmadura, pHakiRey)
{
	raza = pRaza;
	edad = pEdad;
	nombre = pNombre;
	hakiObservacion = pHakiObservacion;
	hakiArmadura = pHakiArmadura;
	hakiRey = pHakiRey;
	oceano = pOceano;
	tripulacion = pTripulacion;
	funcion = pFuncion;
}


void Piratas::setOceano(string oceano) {
	this->oceano = oceano;
}

string Piratas::getOceano() {
	return this->oceano;
}

void Piratas::setTripulacion(string tripulacion) {
	this->tripulacion = tripulacion;
}

string Piratas::getTripulacion() {
	return this->tripulacion;
}

void Piratas::setFuncion(string funcion) {
	this->funcion = funcion;
}

string Piratas::getFuncion() {
	return this->funcion;
}
