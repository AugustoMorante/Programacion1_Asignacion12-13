

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int falta;
	double nota;
	cout << "Insertar promedio del alumno: ";
	cin >> nota;
	cout << "Insertar numero de faltas: ";
	cin >> falta;
	if (nota < 0 || falta < 0 || nota > 20)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (nota >= 15 && falta == 0)
	{
		cout << "Sí se le otorga la beca\n";
	}
	else
	{
		cout << "No se le otorga la beca\n";
	}
	system("pause");
	return 0;
}

