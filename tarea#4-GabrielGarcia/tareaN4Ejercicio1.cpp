/*
Tarea #4: Conversión de grados Celsius a Fahrenheit - Ejercicio 1
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: Pide grados Celsius y convierta a
grados Fahrenheit. El programa debe mostrar el valor final en Fahrenheit. Usa la conversión F = (C × 9/5) + 32.

*/

/*
Entrada: Grados Celsius 
Proceso: Convertir a Fahrenheit usando la fórmula F = (C × 9/5) + 32
Salida: Grados Fahrenheit 

*/


#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Ingrese los grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "Los grados Fahrenheit son: " << fahrenheit << endl;

    return 0;
}
