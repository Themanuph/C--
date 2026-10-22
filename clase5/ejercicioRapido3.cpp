/*
MINI EJERICIO 3
Autor: Gabriel José García
Fecha: 14 Octubre de 2026

Enunciado: Pide 3 notas (decimales) y muestra el promedio

*/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3, promedio;
    cout << "Ingrese numero 1: ";
    cin >> n1;
    cout << "Ingrese numero 2: ";
    cin >> n2;
    cout << "Ingrese numero 3: ";
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3.0;
    cout << "Promedio = " << promedio << endl;

    return 0;
}
