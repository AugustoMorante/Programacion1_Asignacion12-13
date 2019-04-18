// ConsoleApplication18.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;
/*
	t1 = 5
	t2 = 1
	t3 = 6
	propina = 3.5
*/
int main()
{
	int t1, t2, t3;
	double totalcompra, propina, a, tt, d;
	a = 0.75;
	tt = 1.15;
	d = 0.65;
	cout << "Ingrese la cantidad de caramelos tipo 1: ";
	cin >> t1;
	cout << "Ingrese la cantidad de caramelos tipo 2: ";
	cin >> t2;
	cout << "Ingrese la cantidad de caramelos tipo 3: ";
	cin >> t3;
	totalcompra = (a * t1) + (tt * t2) + (d * t3);
	cout << "Ingrese el monto de la propina: ";
	cin >> propina;	
	cout << "El monto de la compra es: ";
	cout << totalcompra << endl;
	if (propina < totalcompra)
	{
		cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS\n";
	}
	else
	{
		cout << "Propina suficiente";
	}
	system("pause");
	return 0;
}

