// ConsoleApplication11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double nota;
	cout << "Insertar nota:\n";
	cin >> nota;
	if (nota < 0)
	{
		cout << "La nota debe ser mayor que 0.\n";
	}
	if (nota > 20)
	{
		cout << "La nota debe ser menor que 20.\n";
	}
	if (nota >= 12.5 && nota <= 20)
	{
		cout << "Aprobado\n";
	}
	if (nota < 12.5)
	{
		cout << "DESAPROBADO\n";
	}
	system("pause");
	return 0;
}
