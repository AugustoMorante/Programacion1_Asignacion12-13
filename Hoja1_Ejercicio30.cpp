
#include "pch.h"
#include <iostream>
using namespace std;
/*
	dia = 10
	mes = 1(enero)
	anio = 1987
	RESPUESTA = Morado
*/
int main()
{
	int mes, anio, dia;
    cout << "Ingresa tu dia de nacimiento: ";
	cin >> dia;
	cout << "Ingresa tu mes de nacimiento: ";
	cin >> mes;
	cout << "Ingresa tu anio de nacimiento: ";
	cin >> anio;
	if (dia < 0 || dia > 31)
	{
		cout << "ERROR\n";
	}
	if (mes < 0 || mes > 12)
	{
		cout << "ERROR\n";
	}
	if (mes >= 1 && mes <= 3)
	{
		if (anio % 2 == 0)
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Rojo\n";
			}
			else
			{
				cout << "Tu color es: Celeste\n";
			}
		}
		else
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Morado\n";
			}
			else
			{
				cout << "Tu color es: Negro\n";
			}
		}
	}
	if (mes >= 4 && mes <= 6)
	{
		if (anio % 2 == 0)
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Naranja\n";
			}
			else
			{
				cout << "Tu color es: Verde\n";
			}
		}
		else
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Turquesa\n";
			}
			else
			{
				cout << "Tu color es: Gris\n";
			}
		}
	}
	if (mes >= 7 && mes <= 9)
	{
		if (anio % 2 == 0)
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Marron\n";
			}
			else
			{
				cout << "Tu color es: Fucsia\n";
			}
		}
		else
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Azul\n";
			}
			else
			{
				cout << "Tu color es: Amarillo\n";
			}
		}
	}
	if (mes >= 10 && mes <= 12)
	{
		if (anio % 2 == 0)
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Violeta\n";
			}
			else
			{
				cout << "Tu color es: Rosado\n";
			}
		}
		else
		{
			if (dia % 2 == 0)
			{
				cout << "Tu color es: Olivo\n";
			}
			else
			{
				cout << "Tu color es: Balnco\n";
			}
		}
	}
	system("pause");
	return 0;
}

