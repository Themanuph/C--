/*

Tarea #8: — Suma y promedio de 3 números - Ejercicio 1
Autor: Gabriel José García 
Fecha: 23 Octubre de 2026

Enunciado: Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.
*/

/*

Entrada:
Tres números enteros ingresados por el usuario.

Proceso:  
1. Leer los tres números mediante una función.
2. Calcular la suma de los números.
3. Calcular el promedio: suma / 3.0.
4. Mostrar los resultados usando una función.
Salida:  
- La suma de los tres números.
- El promedio de los tres números.

*/

#include <iostream>
#include <string>

using namespace std;

// FUNCIONES
void leerTresNumero(int &a, int &b, int &c);
int calcularSuma(int a, int b, int c);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main()
{
    int n1, n2, n3;
    int suma;
    double promedio;

    leerTresNumero(n1, n2, n3);

    suma = calcularSuma(n1, n2, n3);

    promedio = calcularPromedio(suma);

    mostrarResultados(suma, promedio);

    return 0;
}

void leerTresNumero(int &a, int &b, int &c)
{
    cout << "Ingrese 3 numeros enteros: ";
    cin >> a >> b >> c;
}

int calcularSuma(int a, int b, int c)
{
    return a + b + c;
}

double calcularPromedio(int suma)
{
    return suma / 3.0;
}

void mostrarResultados(int suma, double promedio)
{
    cout << "Resultados: " << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}