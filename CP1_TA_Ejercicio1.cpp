
#include "pch.h"
#include <iostream>
using namespace std;
/*
	100.5 - 100 - 3.33
*/
double precioTerreno(double v1,double v2,double v3)
{
	double pt;
	pt = v1 * v2 * v3;
	return pt;
}

int main()
{
	double tamano, precioMetro, cambio;
	cout << "Ingrese el tamanio del terreno en metros cuadrados: ";
	cin >> tamano;
	cout << "Ingrese el precio por metro cuadrado en dolares: ";
	cin >> precioMetro;
	cout << "Ingrese el tipo de cambio del dia: ";
	cin >> cambio;
	cout << "El precio total de venta en soles del terreno es: ";
	cout << precioTerreno(tamano, precioMetro, cambio) << endl;
	system("pause");
	return 0;

}

