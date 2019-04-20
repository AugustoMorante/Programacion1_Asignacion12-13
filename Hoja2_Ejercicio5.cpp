#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int dia, mes, anio;
	cout << "Insertar anio: ";
	cin >> anio;
	cout << "Insertar mes: "; 
	cin >> mes;
	if (mes < 1 || mes > 12)
	{
		cout << "ERROR\n";
	}
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		cout << "El mes tiene 31 dias\n";
	}
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		cout << "El mes tiene 30 dias\n";
	}
	if (mes == 2)
	{
		if (anio % 4 == 0)
		{
			cout << "El mes tiene 28 dias\n";
		}
		else
		{
			cout << "El mes tiene 29 dias\n";
		}
	}
	system("pause");
	return 0;
}

