#include <iostream>
#include "Seres.h"
#include "Fruta.h"
#include "Logia.h"
#include "Zoan.h"
#include "Paramecia.h"
#include "Piratas.h"
#include "Marina.h"
#include "Revolucionarios.h"

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

void imprimirFrutas(vector<Fruta*> frutas);

using namespace std;

int main()
{
	vector<Seres*> seres;
	vector<Fruta*> frutas;
	vector<string> infoFrutas;
	int opcion;
	string resp = "Y";
	while (resp == "Y" || resp == "y")
	{
		cout << endl << "MENU" << endl
		<< "1. Agregar Fruta" << endl
		<< "2. Agregar Personaje" << endl;
		cin >> opcion;

		int opcion2;
		if (opcion == 1)
		{
			cout << endl << "FRUTA" << endl
			<< "1. Paramecia" << endl
			<< "2. Zoan" << endl
			<< "3. Logia" << endl;
			cin >> opcion2;

			string nombre;
			stringstream info;
			string info_fruta;

			if(opcion2 == 1)
			{
				string descripcion;
				cout << "Introduzca el nombre: " << endl;
				cin.ignore();
				getline(cin,nombre);

				cout << "Introduzca la descripcion: " << endl;
				cin.ignore();
				getline(cin,descripcion);

				Fruta* fruta = new Paramecia(nombre, descripcion);
				frutas.push_back(fruta);

				info << "\tTIPO:\tPARAMECIA" << endl
				<< "\tNOMBRE:\t" << nombre << endl
				<< "\tDESCRIPCION:\t" << descripcion << endl;

				info_fruta = info.str();
				infoFrutas.push_back(info_fruta);
			}
			else if (opcion2 == 2)
			{
				int type;
				string tipo, animal;
				cout << "Introduzca el nombre: " << endl;
				cin.ignore();
				getline(cin,nombre);

				cout << endl << "TIPO" << endl
				<< "1. Normal" << endl
				<< "2. Prehistorica" << endl
				<< "3. Legendaria" << endl
				<< "Eliga: " << endl;
				cin >> type;

				if (type == 1)
				{
					tipo = "Normal";
				}
				else if (type == 2)
				{
					tipo = "Prehistorica";
				}
				else if (type == 3)
				{
					tipo = "Legendaria";
				}

				cout << "Introduzca el animal al que representa: " << endl;
				cin.ignore();
				getline(cin,animal);

				Fruta* fruta = new Zoan(nombre, tipo, animal);
				frutas.push_back(fruta);

				info << "\tTIPO DE FRUTA:\tZOAN" << endl
				<< "\tNOMBRE:\t" << nombre << endl
				<< "\tTIPO:\t" << tipo << endl
				<< "\tANIMAL QUE REPRESENTA:\t" << animal << endl;

				info_fruta = info.str();
				infoFrutas.push_back(info_fruta);
			}
			else if (opcion2 == 3)
			{
				string elemento;

				cout << "Introduzca el nombre: " << endl;
				cin.ignore();
				getline(cin,nombre);

				cout << "Introduzca el elemento: " << endl;
				cin.ignore();
				getline(cin,elemento);

				Fruta* fruta = new Logia(nombre, elemento);
				frutas.push_back(fruta);

				info << "\tTIPO DE FRUTA:\tLOGIA" << endl
				<< "\tNOMBRE:\t" << nombre << endl
				<< "\tELEMENTO:\t" << elemento << endl;

				info_fruta = info.str();
				infoFrutas.push_back(info_fruta);
			}

		}
		else if (opcion == 2)
		{
			cout << endl << "BANDOS" << endl
			<< "1. Marina" << endl
			<< "2. Piratas" << endl
			<< "3. Revolucionarios" << endl;
			cin >> opcion2;

			if (opcion2 > 0 && opcion2 < 4)
			{
				int race, edad, opcFruta;
				string raza, nombre;
				string fruit, strObs, strArm, strRey;
				bool hObs = false, hArm = false, hRey = false;

				string filename, out;
				stringstream name, info;

				cout << endl << "RAZA" << endl
				<< "1. Gyojin" << endl
				<< "2. Kyojin" << endl
				<< "3. Ningyo" << endl
				<< "4. Humano" << endl
				<< "5. Mink" << endl
				<< "6. Skypieans" << endl
				<< "Eliga: " << endl;
				cin >> race;

				if (race == 1)
				{
					raza = "Gyojin";
				}
				else if (race == 2)
				{
					raza = "Kyojin";
				}
				else if (race == 3)
				{
					raza = "Ningyo";
				}
				else if (race == 4)
				{
					raza = "Humano";
				}
				else if (race == 5)
				{
					raza = "Mink";
				}
				else if (race == 6)
				{
					raza = "Skypieans";
				}

				cout << "Ingrese la edad: " << endl;
				cin >> edad;

				cout << "Introduzca el nombre: " << endl;
				cin.ignore();
				getline(cin,nombre);

				cout << "Fruta del Diablo (Y/N): ";
				cin >> fruit;
				if(fruit == "Y" || fruit == "y")
				{
					imprimirFrutas(frutas);
					cout << "Eliga su opcion:" << endl;
					cin >> opcFruta;
				}

				cout << endl << "Haki de Observacion (Y/N): ";
				cin >> strObs;

				if (strObs == "Y")
				{
					hObs = true;
				}

				cout << endl << "Haki de Armadura (Y/N): ";
				cin >> strArm;

				if (strArm == "Y")
				{
					hArm = true;
				}

				cout << endl << "Haki del Rey (Y/N): ";
				cin >> strRey;

				if (strRey == "Y")
				{
					hRey = true;
				}

				if(opcion2 == 1)
				{
					string fecha, rango;
					int range;
					cout << "Introduzca la fecha de ingreso: " << endl;
					cin.ignore();
					getline(cin, fecha);

					cout << endl << "RANGO" << endl
					<< "1. Cadete" << endl
					<< "2. Teniente" << endl
					<< "3. Vice-almirante" << endl
					<< "4. Almirante" << endl
					<< "5. Almirante de flota" << endl
					<< "Eliga: " << endl;
					cin >> range;

					if (range == 1)
					{
						rango = "Cadete";
					}
					else if (range == 2)
					{
						rango = "Teniente";
					}
					else if (range == 3)
					{
						rango = "Vice-almirante";
					}
					else if (range == 4)
					{
						rango = "Almirante";
					}
					else if (range == 5)
					{
						rango = "Almirante de flota";
					}

					Seres* ser = new Marina(raza, edad, nombre, hObs, hArm, hRey, fecha, rango);

					seres.push_back(ser);

					info << "\t\t\t" << nombre << endl;
					for (int i = 0; i < nombre.size(); i++) {
						if (nombre[i] == ' ')
						{
							nombre[i] = '_';
						}
					}

					name << "./log/" << nombre << ".log";
					filename = name.str();
					cout << filename;

					info << "RAZA:\t" << raza << endl << "EDAD: \t" << edad << endl << "FRUTA DEL DIABLO:\t";
					if (fruit == "Y" || fruit == "y") {
						info << "Si" << endl;
						info << infoFrutas.at(opcFruta-1) << endl;
					} else {
						info << "No" << endl;
					}
					info << "HAKI DE OBSERVACION:\t";
					if (hObs)
						info << "Si" << endl;
					else
						info << "No" << endl;
					info << "HAKI DE ARMADURA:\t";
					if (hArm)
						info << "Si" << endl;
					else
						info << "No" << endl;
					info << "HAKI DE REY:\t\t";
			 		if (hRey)
						info << "Si" << endl;
					else
						info << "No" << endl;

					info << "FECHA DE INGRESO:\t" << fecha << endl << "RANGO:\t" << rango;

					out = info.str();

					ofstream outputFile(filename, ios::in | ios::out);
					outputFile.open(filename);//, ios::in | ios::out);
					outputFile << out;
					outputFile.close();

				}
				else if(opcion2 == 2)
				{
					string oceano, tripulacion, funcion;
					int ocean;

					cout << endl << "OCEANO" << endl
					<< "1. East" << endl
					<< "2. West" << endl
					<< "3. South" << endl
					<< "4. North Blue" << endl
					<< "5. Grand Line" << endl
					<< "6. New World" << endl
					<< "Eliga: " << endl;
					cin >> ocean;

					if (ocean == 1)
					{
						oceano = "East";
					}
					else if (ocean == 2)
					{
						oceano = "West";
					}
					else if (ocean == 3)
					{
						oceano = "South";
					}
					else if (ocean == 4)
					{
						oceano = "North Blue";
					}
					else if (ocean == 5)
					{
						oceano = "Grand Line";
					}
					else if (ocean == 6)
					{
						oceano = "New World";
					}

					cout << "Introduzca la tripulacion: " << endl;
					cin.ignore();
					getline(cin, tripulacion);

					cout << "Introduzca la funcion: " << endl;
					cin.ignore();
					getline(cin, funcion);

					Seres* ser = new Piratas(raza, edad, nombre, hObs, hArm, hRey, oceano, tripulacion, funcion);
					seres.push_back(ser);

					info << "\t\t\t" << nombre << endl;
					for (int i = 0; i < nombre.size(); i++) {
						if (nombre[i] == ' ')
						{
							nombre[i] = '_';
						}
					}

					name << "./log/" << nombre << ".log";
					filename = name.str();
					cout << filename;

					info << "RAZA:\t" << raza << endl << "EDAD: \t" << edad << endl << "FRUTA DEL DIABLO:\t";
					if (fruit == "Y" || fruit == "y") {
						info << "Si" << endl;
						info << infoFrutas.at(opcFruta-1) << endl;
					} else {
						info << "No" << endl;
					}
					info << "HAKI DE OBSERVACION:\t";
					if (hObs)
						info << "Si" << endl;
					else
						info << "No" << endl;
					info << "HAKI DE ARMADURA:\t";
					if (hArm)
						info << "Si" << endl;
					else
						info << "No" << endl;
					info << "HAKI DE REY:\t\t";
					if (hRey)
						info << "Si" << endl;
					else
						info << "No" << endl;

					info << "OCEANO:\t" << oceano << endl << "TRIPULACION:\t" << tripulacion << endl
					<< "FUNCION:\t " << funcion << endl;

					out = info.str();

					ofstream outputFile(filename, ios::in | ios::out);
					outputFile.open(filename);//, ios::in | ios::out);
					outputFile << out;
					outputFile.close();
				}
				else if (opcion2 == 3)
				{
					string fecha;
					cout << "Introduzca la fecha de ingreso:" << endl;
					cin.ignore();
					getline(cin, fecha);

					Seres* ser = new Revolucionarios(raza, edad, nombre, hObs, hArm, hRey, fecha);

					if(fruit == "Y" || fruit == "y")
					{
						imprimirFrutas(frutas);
						cout << "Eliga su opcion:" << endl;
						cin >> opcFruta;
						ser -> setFruta(frutas[opcFruta-1]);
						frutas.erase(frutas.begin()+opcFruta-1);
					}
					seres.push_back(ser);
					info << "\t\t\t" << nombre << endl;
					for (int i = 0; i < nombre.size(); i++) {
						if (nombre[i] == ' ')
						{
							nombre[i] = '_';
						}
					}

					name << "./log/" << nombre << ".log";
					filename = name.str();
					cout << filename;

					info << "RAZA:\t" << raza << endl << "EDAD: \t" << edad << endl << "FRUTA DEL DIABLO:\t";
					if (fruit == "Y" || fruit == "y") {
						info << "Si" << endl;
						info << infoFrutas.at(opcFruta-1) << endl;
					} else {
						info << "No" << endl;
					}
					info << "HAKI DE OBSERVACION:\t";
					if (hObs)
						info << "Si" << endl;
					else
						info << "No" << endl;
					info << "HAKI DE ARMADURA:\t";
					if (hArm)
						info << "Si" << endl;
					else
						info << "No" << endl;
					info << "HAKI DE REY:\t\t";
					if (hRey)
						info << "Si" << endl;
					else
						info << "No" << endl;

					info << "FECHA DE INGRESO:\t" << fecha << endl;

					out = info.str();

					ofstream outputFile(filename, ios::in | ios::out);
					outputFile.open(filename);//, ios::in | ios::out);
					outputFile << out;
					outputFile.close();
				}
			}


		}


		cout << endl << "Desea regresar al menu (y/n): ";
		cin >> resp;
	}




	return 0;
}

void imprimirFrutas(vector <Fruta*> vector1)
{
        for (int j = 0; j < vector1.size(); j++) {
                cout << j+1 << ") " << vector1.at(j) -> getNombre() << endl;
        }
}
