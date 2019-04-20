
#include "pch.h"
#include <iostream>
using namespace std;
// 20 - L
int main()
{
	int sb, ventas;
	double sn, incremento, sueldoTotal;
	char tienda;
	sb = 900;
	cout << "Ingrese las ventas del colaborador: ";
	cin >> ventas;
	cout << "Ingrese el código de la tienda: ";
	cin >> tienda;
	sn = sb + (ventas >= 1 && ventas <= 5)*0.1*sb + (ventas > 5 && ventas <= 10)*0.15*sb + (ventas > 10)*0.25*sb;
	incremento = (tienda == 'M')*0.02*sn + (tienda == 'S')*0.05*sn + (tienda == 'L')*0.1*sn + (tienda == 'A')*0.15*sn;
	sueldoTotal = sb + sn;
	cout << "El sueldo correspondiente es: $" << sueldoTotal << endl;
	system("pause");
	return 0;
}

