#pragma once
#include "Seres.h"
#include <string>

using namespace std;

class Marina : public Seres {
private:
	string fechaIngreso;
	string rango;

public:
	Marina();
	Marina(string, int, string, bool, bool, bool, string, string);

	void setFechaIngreso(string);
	void setRango(string);

	string getFechaIngreso();
	string getRango();

	//virtual ~Marina  ();
};
