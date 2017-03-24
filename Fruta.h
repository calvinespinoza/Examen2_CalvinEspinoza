#pragma once
#include <string>

class Fruta {
	private:
		string nombre;

	public:
		Fruta();
		Fruta(string);

		string getNombre();

		virtual ~Fruta ();
};
