#include "pch.h"
#include <iostream>
using namespace std;
//10
int main()
{
	int compradas, precio, compra;
	double dscto, compraTotal;
	precio = 760;
	cout << "El precio de las computadoras es de $760\n";
	cout << "Inserte el numero de computadoras a comprar: ";
	cin >> compradas;
	compra = precio * compradas;
	if (compradas < 0)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (compradas < 5)
	{
		dscto = compra * 0.1;
	}
	if (compradas >= 5 && compradas < 10)
	{
		dscto = compra * 0.2;
	}
	if (compradas >= 10)
	{
		dscto = compra * 0.4;
	}
	compraTotal = compra - dscto;
	cout << "El costo es de $" << compra << " y el total aplicando el descuento de $" << dscto << " es de $" << compraTotal << endl;
	system("pause");
	return 0;
}