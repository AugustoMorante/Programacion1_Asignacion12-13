#include "pch.h"
#include <iostream>
using namespace std;
/*
	diametro = 30
	ingredientes = 2
*/
int main()
{
	int ingredientes, diametro;
	double precioTotal;
	cout << "Ingrese el diametro en centimetros: ";
	cin >> diametro;
	cout << "Ingrese el numero de ingredientes extras: ";
	cin >> ingredientes;
	precioTotal = diametro * 1.5 + ingredientes * 2.5;
	cout << "El precio total de la pizza es de S/" << precioTotal << endl;
	system("pause");
	return 0;
}