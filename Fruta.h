#pragma once
#include <string>

using namespace std;

class Fruta {
	protected:
		string nombre;

	public:
		Fruta();
		Fruta(string);

		void setNombre(string);
		string getNombre();

		//virtual ~Fruta ();
};
