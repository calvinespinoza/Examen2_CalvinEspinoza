#include "Fruta.h"

Fruta::Fruta()
{
	nombre = "";
}

Fruta::Fruta(string pNombre)
{
	nombre = pNombre;
}

void Fruta::setNombre(string nombre)
{
	this->nombre = nombre;
}
string Fruta::getNombre()
{
	return this->nombre;
}
