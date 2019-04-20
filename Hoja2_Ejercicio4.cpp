
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num, v;
	double val;
	cout << "Inserte tipo de operacion: ";
	cin >> num;
	cout << "Inserte numero a operar: ";
	cin >> v;
	switch (num)
	{
	case 1: val = 100 * v;
		break;
	case 2: val = 100 ^ v;
		break;
	case 3: val = 100 / v;
		break;
	default: val = 0;
		break;
	}
	cout << "Resultado: ";
	cout << val << endl;
	system("pause");
	return 0;
}


