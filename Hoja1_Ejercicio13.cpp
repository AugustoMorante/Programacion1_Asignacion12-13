
#include "pch.h"
#include <iostream>
using namespace std;
//TEST -> 263 = 362
int invertir(int v)
{
	int u, d, c, nuevoNumero;
	u = v % 10;
	d = (v % 100) / 10;
	c = v / 100;
	nuevoNumero = (u * 100) + (d * 10) + c;
	return nuevoNumero;
}

int main()
{
	int n;
    cout << "Insertar numeros de 3 cifras\n";
	cin >> n;
	
	if (n >= 1000 || n <= 99)
	{
		cout << "Numero Incorrecto\n";
		system("pause");
		return 0;
	}
	else
	{
		cout << "Nuevo numero: ";
		cout << invertir(n) << endl;
	}
	system("pause");
	return 0;
}


