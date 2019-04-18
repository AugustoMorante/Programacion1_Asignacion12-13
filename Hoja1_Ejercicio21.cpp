#include "pch.h"
#include <iostream>
using namespace std;
//7560
int main()
{
	int prestamo;
	double interes, totalPagar;
	cout << "Ingrese el monto del prestamo en $: ";
	cin >> prestamo;
	if (prestamo < 0)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (prestamo < 5000)
	{
		interes = prestamo * 0.03;
	}
	if (prestamo >= 5000 && prestamo < 10000)
	{
		interes = prestamo * 0.02;
	}
	if (prestamo >= 10000)
	{
		interes = prestamo * 0.01;
	}
	totalPagar = prestamo + interes;
	cout << "El monto total a pagar es de $ " << totalPagar << endl;
	system("pause");
	return 0;

}