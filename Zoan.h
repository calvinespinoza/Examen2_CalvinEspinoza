#pragma once
#include "Fruta.h"
#include <string>

using namespace std;

class Zoan : public Fruta {
	private:
		string tipo;
		string animal;

	public:
		Zoan();
		Zoan(string, string, string);

		void setTipo(string);
		void setAnimal(string);

		string getTipo();
		string getAnimal();

		//virtual ~Zoan ();
};
