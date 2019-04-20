
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int hora, tarifa, pagar;
	char categoria;
    cout << "Ingrese categoria del empleado: "; 
	cin >> categoria;
	cout << "Ingrese horas trabajadas por el empleado: ";
	cin >> hora;
	if (hora < 0)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	switch (categoria)
	{
	case 'A': tarifa = 30;
		break;
	case 'B': tarifa = 35;
		break;
	case 'C': tarifa = 40;
		break;
	case 'D': tarifa = 45;
		break;
	case 'E': tarifa = 50;
		break;
	default: cout << "ERROR\n";
		system("pause");
		return 0;
		break;
	}
	pagar = hora * tarifa;
	cout << "Total a pagar al empleado: $" << pagar << endl;
	system("pause");
	return 0;
}
