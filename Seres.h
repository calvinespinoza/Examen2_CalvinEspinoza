#pragma once
#include <string>
#include "Fruta.h"

using namespace std;

class Seres {
	protected:
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

		void setRaza(string);
		void setEdad(int);
		void setNombre(string);
		void setHakiObservacion(bool);
		void setHakiArmadura(bool);
		void setHakiRey(bool);
		void setFruta(Fruta*);

		string getRaza();
		int getEdad();
		string getNombre();
		bool getHakiObservacion();
		bool getHakiArmadura();
		bool getHakiRey();
		Fruta* getFruta();

		//virtual ~Seres ();
};
