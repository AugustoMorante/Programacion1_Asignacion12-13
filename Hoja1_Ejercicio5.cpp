
#include "pch.h"
#include <iostream>
using namespace std;
/* 
	Caso1: 3,4,5
	caso2: 1,2,8
*/
int main()
{
	int l1, l2, l3;
    cout << "Insertar los lados del triangulo\n";
	cin >> l1;
	cin >> l2;
	cin >> l3;
	if (l1 + l2 > l3 && l1  - l2 < 13)
	{
		cout << "Si es un triangulo\n";
	}
	else
	{
		cout << "No es un triangulo\n";
	}
	system("pause");
	return 0;
}

