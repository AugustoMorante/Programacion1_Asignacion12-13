#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int zona, kwMas, kw100, kwConsumo;
	double totalPagar;
	cout << "Ingrese zona (1-2): ";
	cin >> zona;
	cout << "Ingrese consumo: ";
	cin >> kwConsumo;
	if (kwConsumo < 100)
	{
		kw100 = 0;
		kwMas = 0;
	}
	else
	{
		kw100 = 100;
		kwMas = kwConsumo - 100;
	}

	switch (zona)
	{
	case 1:
		totalPagar = 50 + (kw100 * 0.75) + (kwMas * 0.9);
		break;
	case 2:
		totalPagar = 25 + (kw100 * 0.3) + (kwMas * 0.7);
		break;
	default:
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	cout << "El monto a pagar es: " << totalPagar << " soles\n";
	system("pause");
	return 0;
}