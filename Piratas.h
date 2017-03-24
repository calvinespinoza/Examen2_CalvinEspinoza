#pragma once
#include "Seres.h"
#include <string>

class Piratas : public Seres {
private:
	string oceano;
	string tripulacion;
	string funcion;

public:
	Piratas();
	Piratas(string, int, string, bool, bool, bool, string, string, string);

	void setOceano(string);
	void setTripulacion(string);
	void setFuncion(string);

	string getOceano();
	string getTripulacion();
	string getFuncion();

//	virtual ~Piratas ();
};
