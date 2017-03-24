#include "Logia.h"

Logia::Logia()
{
	elemento = "";
}

Logia::Logia(string pNombre, string pElemento)  : Fruta(pNombre)
{
	elemento = pElemento;
}

void Logia::setElemento(string elemento) {
	this->elemento = elemento;
}

string Logia::getElemento() {
	return this->elemento;
}
