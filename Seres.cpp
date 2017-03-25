#include "Seres.h"

Seres::Seres()
{
	raza = "";
	edad = 0;
	nombre = "";
	hakiObservacion = false;
	hakiArmadura = false;
	hakiRey = false;
}

Seres::Seres(string pRaza, int pEdad, string pNombre, bool pHakiObservacion, bool pHakiArmadura, bool pHakiRey)
{
	raza = pRaza;
	edad = pEdad;
	nombre = pNombre;
	hakiObservacion = pHakiObservacion;
	hakiArmadura = pHakiArmadura;
	hakiRey = pHakiRey;
}

Seres::Seres(string pRaza, int pEdad, string pNombre, bool pHakiObservacion, bool pHakiArmadura, bool pHakiRey, Fruta* pFruta)
{
	raza = pRaza;
	edad = pEdad;
	nombre = pNombre;
	hakiObservacion = pHakiObservacion;
	hakiArmadura = pHakiArmadura;
	hakiRey = pHakiRey;
	fruta = pFruta;
}

void Seres::setFruta(Fruta* pFruta)
{
	fruta = pFruta;
}

Fruta* Seres::getFruta()
{
	return fruta;
}

void Seres::setRaza(string raza) {
	this->raza = raza;
}
string Seres::getRaza() {
	return this->raza;
}

void Seres::setEdad(int edad) {
	this->edad = edad;
}
int Seres::getEdad() {
	return this->edad;
}

void  Seres::setNombre(string nombre) {
	this->nombre = nombre;
}

string  Seres::getNombre() {
	return this->nombre;
}

void Seres::setHakiObservacion(bool hakiObservacion) {
	this->hakiObservacion = hakiObservacion;
}

bool Seres::getHakiObservacion() {
	return this->hakiObservacion;
}

void Seres::setHakiArmadura(bool hakiArmadura) {
	this->hakiArmadura = hakiArmadura;
}

bool Seres::getHakiArmadura() {
	return this->hakiArmadura;
}

void Seres::setHakiRey(bool hakiRey) {
	this->hakiRey = hakiRey;
}

bool Seres::getHakiRey() {
	return this->hakiRey;
}
