
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int curso, cv, importe;
	char escala;
    cout << "Ingresa la escala de pago: ";
	cin >> escala;
	cout << "Ingresa el numero de cursos: ";
	cin >> curso;
	if (curso <= 0)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	switch (escala)
	{
	case 'A':
		if (curso >= 1 && curso <= 5)
		{
			cv = 400;
		}
		if (curso >= 6 && curso <= 8)
		{
			cv = 600;
		}
		if (curso > 8)
		{
			cv = 900;
		}
		break;
	case 'B':
		if (curso >= 1 && curso <= 3)
		{
			cv = 350;
		}
		if (curso >= 4 && curso <= 7)
		{
			cv = 500;
		}
		if (curso > 7)
		{
			cv = 700;
		}
		break;
	case 'C':
		if (curso >= 1 && curso <= 3)
		{
			cv = 320;
		}
		if (curso >= 4 && curso <= 7)
		{
			cv = 480;
		}
		if (curso > 7)
		{
			cv = 685;
		}
		break;
	case 'D':
		if (curso >= 1 && curso <= 4)
		{
			cv = 310;
		}
		if (curso >= 5 && curso <= 8)
		{
			cv = 475;
		}
		if (curso > 8)
		{
			cv = 680;
		}
		break;
		default: cout << "ERROR\n";
			system("pause");
			return 0;
		break;
	}
	cout << "La cuota fija es de S/. 350.00\n";
	importe = 350 + cv;
	cout << "El importe a cancelar es de " << importe << endl;
	system("pause");
	return 0;
}
