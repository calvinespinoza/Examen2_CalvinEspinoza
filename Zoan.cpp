#include "Zoan.h"

Zoan::Zoan()
{
	tipo = "";
	animal = "";
}

Zoan::Zoan(string pNombre, string pTipo, string pAnimal) : Fruta(pNombre)
{
	tipo = pTipo;
	animal = pAnimal;
}

void Zoan::setTipo(string tipo) {
	this->tipo = tipo;
}

string Zoan::getTipo() {
	return this->tipo;
}

void Zoan::setAnimal(string animal) {
	this->animal = animal;
}

string Zoan::getAnimal() {
	return this->animal;
}
