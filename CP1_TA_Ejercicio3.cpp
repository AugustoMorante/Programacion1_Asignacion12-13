
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char aerolinea, dia;
	double precio, incremento, latam, viva, precioFinal;
	int maletas;
    cout << "Ingrese la Aerolinea(L: LATAM, V : Viva): ";
	cin >> aerolinea;
	cout << "Día (L: lunes; V: viernes; S: sabado): ";
	cin >> dia;
	cout << "Maletas: ";
	cin >> maletas;
	latam = (aerolinea == 'L') * ((dia == 'L')*70.4 + (dia == 'V' || dia == 'S') * 100.8 + (dia == 'D')*90.1);
	viva = (aerolinea == 'V') * ((dia == 'L')*20.4 + (dia == 'V' || dia == 'S') * 70.6 + (dia == 'D')*80.3);
	incremento = (maletas == 0) * 0 + (maletas == 1 || maletas == 2) * 0.15 + (maletas > 2) * 0.3;
	precio = latam + viva;
	precioFinal = precio + (precio * incremento);
	cout << "Precio del ticket: " << precioFinal << endl;
	system("pause");
	return 0;
}


