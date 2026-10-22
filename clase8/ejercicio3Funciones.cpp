/*
EJERCICIO 3 - CALCULAR LA SUMA Y PROMEDIO DE 4 NUMEROS USANDO FUNCIONES
Autor: Gabriel Jose Garcia
Fecha: 21 de Octubre del 2026

Enunciado:
    Desarrollar un programa en C++ que permita ingresar 4 numeros enteros.
    El programa debe usar funciones para:
        - leer los 4 numeros,
        - calcular la suma,
        - calcular el promedio,
        - mostrar los resultados.
    El objetivo es comprender como dividir un problema en varias funciones con
    tareas claras.
*/

#include <iostream>
#include <string>

using namespace std;

void leerCuatroNumero(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main()
{
    // Variables donde se guardaran los numeros
    int n1, n2, n3, n4;

    // Variables para resultados
    int suma;
    double promedio;

    // Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumero(n1, n2, n3, n4);

    suma = calcularSuma(n1, n2, n3, n4);

    promedio = calcularPromedio(suma);

    mostrarResultados(suma, promedio);

    return 0;
}

void leerCuatroNumero(int &a, int &b, int &c, int &d)
{
    cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

int calcularSuma(int a, int b, int c, int d)
{
    return a + b + c + d;
}

double calcularPromedio(int suma)
{
    return suma / 4.0;
}

void mostrarResultados(int suma, double promedio)
{
    cout << "Resultados: " << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}
