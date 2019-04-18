
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int edad, entrada;
	double costo;
	entrada = 15;
	cout << "Ingrese la edad del espectador: ";
	cin >> edad;
	if (edad < 5)
	{
		cout << "No puede entrar al teatro\n";
	}
	if (edad >= 5 && edad <= 14)
	{
		costo = entrada - entrada * 0.35;
		cout << "El tipo de la entrada es Entrada 1 y el costo es de $" << costo << endl;
	}
	if (edad >= 15 && edad <= 19)
	{
		costo = entrada - entrada * 0.25;
		cout << "El tipo de la entrada es Entrada 2 y el costo es de $" << costo << endl;
	}
	if (edad >= 20 && edad <= 45)
	{
		costo = entrada - entrada * 0.1;
		cout << "El tipo de la entrada es Entrada 3 y el costo es de $" << costo << endl;
	}
	if (edad >= 46 && edad <= 65)
	{
		costo = entrada - entrada * 0.22;
		cout << "El tipo de la entrada es Entrada 4 y el costo es de $" << costo << endl;
	}
	if (edad >= 66)
	{
		costo = entrada - entrada * 0.5;
		cout << "El tipo de la entrada es Entrada 5 y el costo es de $" << costo << endl;
	}
	system("pause");
	return 0;
}

