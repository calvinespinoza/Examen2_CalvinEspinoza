#pragma once
#include "Fruta.h"
#include <string>

using namespace std;

class Logia : public Fruta {
private:
	string elemento;

public:
	Logia();
	Logia(string, string);

	void setElemento(string);
	string getElemento();

	//virtual ~Logia ();
};
