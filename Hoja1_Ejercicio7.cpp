

#include "pch.h"
#include <iostream>
using namespace std;
// 9 3
// 10 7
int main()
{
	int n1, n2;
	cout << "Ingrese dos numeros enteros: \n";
	cin >> n1;
	cin >> n2;
	if (n1 % n2 == 0)
	{
		cout << n1 << " es multiplo de " << n2 << endl;
	}
	else
	{
		cout << n1 << " no es  multiplo de " << n2 << endl;
	}
}

