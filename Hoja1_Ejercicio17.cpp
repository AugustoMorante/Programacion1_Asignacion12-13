
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Inserte coordenadas\n";
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	if (x == 0 || y == 0)
	{
		cout << "ERROR\n";
	}
	if (x > 0 && y > 0)
	{
		cout << "PRIMER CUADRANTE\n";
	}
	if (x < 0 && y > 0)
	{
		cout << "SEGUNDO CUADRANTE\n";
	}
	if (x < 0 && y < 0)
	{
		cout << "TERCER CUADRANTE\n";
	}
	if (x > 0 && y < 0)
	{
		cout << "CUARTO CUADRANTE\n";
	}
	system("pause");
	return 0;
}


