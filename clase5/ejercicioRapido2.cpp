/*
MINI EJERICIO 2
Autor: Gabriel José García
Fecha: 14 Octubre de 2026

Enunciado: Pide base y altura (enteros) y calcula el area.

*/

#include <iostream>
using namespace std;

int main()
{
    int base, altura, area;
    cout << "Ingrese base: ";
    cin >> base;

    cout << "Ingrese altura: ";
    cin >> altura;

    area = base * altura;
    cout << "Area = " << area << endl;

    return 0;
}