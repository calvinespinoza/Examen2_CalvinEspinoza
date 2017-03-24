#pragma once
#include "Seres.h"
#include <string>

class Revolucionarios : public Seres {
private:
	string fechaIngreso;

public:
	Revolucionarios();
	Revolucionarios(string, int, string, bool, bool, bool, string);

	void setFechaIngreso(string);
	string getFechaIngreso();

//	virtual ~Revolucionarios ();
};
