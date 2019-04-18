
#include "pch.h"
#include <iostream>
using namespace std;
/*
	modelo = B
	placa = 3
	costo = 300
	RESPUESTA = MARZO
*/
int main()
{
	int placa, costo;
	char modelo;
    cout << "Ingrese el modelo: ";
	cin >> modelo;
	cout << "Ingrese el ultimo digito de la placa: ";
	cin >> placa;
	cout << "Ingrese el costo de mantenimiento anual: ";
	cin >> costo;
	if (placa < 0 || placa > 9)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (costo <= 0)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	switch (modelo)
	{
	case 'A':
		if (placa >= 0 && placa <= 5)
		{
			if (costo <= 500)
			{
				cout << "El mes de revision tecnica es: ENERO\n";
			}
			else
			{
				cout << "El mes de revision tecnica es: FEBRERO\n";
			}
		}
		if (placa >= 6 && placa <= 8)
		{
			if (costo <= 700)
			{
				cout << "El mes de revision tecnica es: JUNIO\n";
			}
			else
			{
				cout << "El mes de revision tecnica es: JULIO\n";
			}
		}
		if (placa == 9)
		{
			if (costo <= 1000)
			{
				cout << "El mes de revision tecnica es: OCTUBRE\n";
			}
			else
			{
				cout << "El mes de revision tecnica es: NOVIEMBRE\n";
			}
		}
		break;
	case 'B':
		if (placa >= 1 && placa <= 3)
		{
			if (costo <= 500)
			{
				cout << "El mes de revision tecnica es: MARZO\n";
			}
			else
			{
				cout << "El mes de revision tecnica es: ABRIL\n";
			}
		}
		if (placa >= 4 && placa <= 8)
		{
			if (costo <= 700)
			{
				cout << "El mes de revision tecnica es: MAYO\n";
			}
			else
			{
				cout << "El mes de revision tecnica es: SEPTIEMBRE\n";
			}
		}
		if (placa == 9 || placa == 0)
		{
			if (costo <= 1000)
			{
				cout << "El mes de revision tecnica es: AGOSTO\n";
			}
			else
			{
				cout << "El mes de revision tecnica es: DICIEMBRE\n";
			}
		}
		break;
	default:
		cout << "ERROR\n";
		system("pause");
		return 0;
		break;
	}
	system("pause");
	return 0;
}

