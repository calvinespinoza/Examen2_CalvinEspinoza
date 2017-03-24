#include "Paramecia.h"

Paramecia::Paramecia()
{
	descripcion = "";
}

Paramecia::Paramecia(string pNombre, string pDescripcion)  : Fruta(pNombre)
{
	descripcion = pDescripcion;
}

void Paramecia::setDescripcion(string descripcion)
{
	this->descripcion = descripcion;
}

string Paramecia::getDescripcion()
{
	return this->descripcion;
}
