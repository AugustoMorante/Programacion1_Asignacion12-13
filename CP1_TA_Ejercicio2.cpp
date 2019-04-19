#include "pch.h"
#include <string>
#include <iostream>

using namespace std;
int main()
{
	string codigo, dia, mes, year, letra1, letra2, letra3, size;
	int lima, actualAnio;
	cout << "Ingrese el CUC de la empresa";
	cin >> codigo;
	cout << "Ingrese en que año estamos";
	cin >> actualAnio;
	dia = codigo.substr(0, 2);
	mes = codigo.substr(2, 2);
	year = codigo.substr(4, 4);
	letra1 = codigo.substr(8, 1);
	letra2 = codigo.substr(9, 1);
	letra3 = codigo.substr(10, 1);
	size = codigo.substr(11, 1);
	lima = (letra1 == 'L' && letra2 == 'I' && letra3 == 'M') * 1;
	int big = (size == 'G') * 1;
	int anios = stoi(year);
	int livingYears = (actualAnio - anios);
	cout << "Fecha de incio de operaciones: " << dia << "-" << mes << "-" << year << endl;
	cout << "Empresa de lima (0: No, 1: Sí): " << lima << endl;
	cout << "Empresa grande (0: No, 1: Sí): " << big << endl;
	cout << "Años operando: " << livingYears << endl;
	system("pause");
	return 0;
}