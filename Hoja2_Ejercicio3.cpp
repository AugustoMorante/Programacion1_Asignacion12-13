
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int mes, dia;
	cout << "Inserte dia de nacimiento: ";
	cin >> dia;
	cout << "Inserte mes de nacimiento: ";
	cin >> mes;
	if (dia <= 0 || dia > 31)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	switch (mes)
	{
	case 1:
		if (dia <= 20)
		{
			cout << "Tu signo es Capricornio\n";
		}
		if (dia >= 21)
		{
			cout << "Tu signo es Acuario\n";
		}
		break;
	case 2:
		if (dia > 29)
		{
			cout << "ERROR\n";
			system("pause");
			return 0;
		}
		if (dia <= 19)
		{
			cout << "Tu signo es Acuario\n";
		}
		if (dia >= 20)
		{
			cout << "Tu signo es Piscis\n";
		}
		break;
	case 3:
		if (dia <= 20)
		{
			cout << "Tu signo es Piscis\n";
		}
		if (dia >= 21)
		{
			cout << "Tu signo es Aries\n";
		}
		break;
	case 4:
		if (dia > 30)
		{
			cout << "ERROR\n";
			system("pause");
			return 0;
		}
		if (dia <= 20)
		{
			cout << "Tu signo es Aries\n";
		}
		if (dia >= 21)
		{
			cout << "Tu signo es Tauro\n";
		}
		break;
	case 5:
		if (dia <= 21)
		{
			cout << "Tu signo es Tauro\n";
		}
		if (dia >= 22)
		{
			cout << "Tu signo es Geminis\n";
		}
		break;
	case 6:
		if (dia > 30)
		{
			cout << "ERROR\n";
			system("pause");
			return 0;
		}
		if (dia <= 21)
		{
			cout << "Tu signo es Geminis\n";
		}
		if (dia >= 22)
		{
			cout << "Tu signo es Cancer\n";
		}
		break;
	case 7:
		if (dia <= 23)
		{
			cout << "Tu signo es Cancer\n";
		}
		if (dia >= 24)
		{
			cout << "Tu signo es Leo\n";
		}
		break;
	case 8:
		if (dia <= 23)
		{
			cout << "Tu signo es Leo\n";
		}
		if (dia >= 24)
		{
			cout << "Tu signo es Virgo\n";
		}
		break;
	case 9:
		if (dia < 30)
		{
			cout << "ERROR\n";
			system("pause");
			return 0;
		}
		if (dia <= 23)
		{
			cout << "Tu signo es Virgo\n";
		}
		if (dia >= 24)
		{
			cout << "Tu signo es Libra\n";
		}
		break;
	case 10:
		if (dia <= 23)
		{
			cout << "Tu signo es Libra\n";
		}
		if (dia >= 24)
		{
			cout << "Tu signo es Escorpio\n";
		}
		break;
	case 11:
		if (dia > 30)
		{
			cout << "ERROR\n";
			system("pause");
			return 0;
		}
		if (dia <= 22)
		{
			cout << "Tu signo es Escorpio\n";
		}
		if (dia >= 23)
		{
			cout << "Tu signo es Sagitario\n";
		}
		break;
	case 12:
		if (dia <= 21)
		{
			cout << "Tu signo es Sagitario\n";
		}
		if (dia >= 22)
		{
			cout << "Tu signo es Capricornio\n";
		}
		break;
	default: cout << "ERROR\n";
		break;
	}
	system("pause");
	return 0;
}
