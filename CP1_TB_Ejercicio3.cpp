#include "pch.h"
#include <iostream>
using namespace std;
//I-L-1
int main()
{
	char vista, dia;
	double precio, incremento, mar, inte, precioFinal;
	int camas;
	cout << "Ingrese la vista (M: Mar, I: Interior): ";
	cin >> vista;
	cout << "Día de ingreso (L: lunes-jueves; V: viernes o sabado; D: domingo):";
	cin >> dia;
	cout << "Camas: ";
	cin >> camas;
	mar = (vista == 'M') * ((dia == 'L')*20.4 + (dia == 'V' || dia == 'S') * 80.8 + (dia == 'D')*70.1);
	inte = (vista == 'I') * ((dia == 'L')*15.7 + (dia == 'V' || dia == 'S') * 60.7 + (dia == 'D')*65.8);
	incremento = (camas == 1) * 0 + (camas == 2 || camas == 3) * 0.15 + (camas > 3) * 0.3;
	precio = mar + inte;
	precioFinal = precio + (precio * incremento);
	cout << "Precio del ticket: " << precioFinal << endl;
	system("pause");
	return 0;
}

