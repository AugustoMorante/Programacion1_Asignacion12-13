
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int kwh, tipo;
	double costo;
    cout << "Inserte tipo: ";
	cin >> tipo;
	cout << "Inserte KWH usados: ";
	cin >> kwh;
	if (kwh < 1)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	switch (tipo)
	{
	case 1:  costo = kwh * 1.58;
		break;
	case 2: 
		if (kwh <= 100)
		{
			costo = kwh * 0.35;
		}
		if (kwh > 100 && kwh <= 500)
		{
			costo = 100 * 0.35 + (kwh - 100) * 1.05;
		}
		if (kwh > 500)
		{
			costo = 100 * 0.35 + 400 * 1.05 + (kwh - 500) * 1.36;
		}
		break;
	default: cout << "ERROR\n";
		system("pause");
		return 0;
		break;
	}
	cout << "Total a pagar: ";
	cout << costo << endl;
	system("pause");
	return 0;
}


