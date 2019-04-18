#include "pch.h"
#include <iostream>
using namespace std;
//12.99 - 15
int main()
{
    double nota;
    cout << "Inserte la nota del alumno: ";
    cin >> nota;
    if(nota < 0 || nota > 20)
    {
        cout << "ERROR\n";
    }
    if(nota < 5)
    {
        cout << "Necesita estudiar\n";
    }
    if(nota >= 5 && nota < 13)
    {
        cout << "Jalado\n";
    }
    if(nota >= 13 && nota < 15)
    {
        cout << "Raspando\n";
    }
    if(nota >= 15 && nota < 20)
    {
        cout << "Sobresaliente\n";
    }
    if(nota == 20)
    {
        cout << "Matricula de honor\n";
    }
    system("pause");
    return 0;
}