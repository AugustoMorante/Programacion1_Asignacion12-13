
#include "pch.h"
#include <string>
#include <iostream>

using namespace std;
int main()
{
	//Def Variable
	string codigo;
	string dia, mes, year;
	string letra1, letra2, letra3;
	string size;
	int lima;
	int actualYear;
	//Pedir datos
	cout << "Ingrese el CUC de la empresa";
	cin >> codigo;
	cout << "Ingrese en que año estamos";
	cin >> actualYear;

	//definir cada string

	dia = codigo.substr(0, 2);
	mes = codigo.substr(2, 2);
	year = codigo.substr(4, 4);
	letra1 = codigo.substr(8, 1);
	letra2 = codigo.substr(9, 1);
	letra3 = codigo.substr(10, 1);
	size = codigo.substr(11, 1);

	//Definir si es de lima

	lima = (letra1 == 'L' && letra2 == 'I' && letra3 == 'M') * 1;


	//Definir si es grande 

	int big = (size == 'G') * 1;

		//Definir años operando 

		int anios = stoi(year);
	int livingYears = (actualYear - anios);

	//Output
	cout << "Fecha de incio de operaciones: " << dia << "-" << mes << "-" << year << endl;
	cout << "Empresa de lima (0: No, 1: Sí): " << lima << endl;
	cout << "Empresa grande (0: No, 1: Sí): " << big << endl;
	cout << "Años operando: " << livingYears << endl;



	system("pause");
	return 0;
}