#pragma once
#include <string>
#include "Fruta.h"

class Seres {
	private:
		string raza;
		int edad;
		string nombre;
		Fruta* fruta;
		bool hakiObservacion;
		bool hakiArmadura;
		bool hakiRey;

	public:
		Seres();
		Seres(string, int, string, bool, bool, bool);
		Seres(string, int, string, bool, bool, bool, Fruta*);

		string getRaza();
		int getEdad();
		string getNombre();
		bool getHakiObservacion();
		bool getHakiArmadura();
		bool getHakiRey();
		Fruta* getFruta();

		virtual ~Seres ();
};
