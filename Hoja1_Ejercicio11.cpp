

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int gb;
	double paga;
    cout << "Insertar GB que consume:\n";
	cin >> gb;
	if (gb <= 0)
	{
		cout << "No puede ser menor o igual que 0\n";
		paga = 0;
	}
	if (gb <= 4)
	{
		paga = 50;
	}
	if (gb > 4 && gb <= 8)
	{
		paga = 85;
	}
	if (gb > 8)
	{
		paga = 85 + (gb * 4.5);
	}
	cout << "Debe pagar S/" << paga << endl;
	system("pause");
	return 0;
}

