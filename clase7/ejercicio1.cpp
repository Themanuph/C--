/*
EJERCICIO 1 - ARRELGOS 1D: CARGAR Y RECORRIDO
Autor: Gabriel Jose Garcia
Fecha: 19 de Octubre del 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 5 notas enteras en un arreglo.
    Luego, el programa debe mostrar todas las notas ingreadas, unas por una, indicando también la posicion
    en la que fueron guardadas.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaramos un arreglo de 5 enteros para guardar las notas
    int notas[5];

    // Variable que usaremos para recorrer el arreglo
    int i;

    // CARGA DE DATOS

    for (i = 0; i < 5; i++)
    {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    cout << endl; // SIMPLEMENTE ES UN SALTO DE LINEA QUE SE MUESTRA EN LA CONSOLA
    cout << "Notas registradas:" << endl;

    // IMPRESION DE DATOS
    for (i = 0; i < 5; i++)
    {
        cout << "Posicion " << i + 1 << ": " << notas[i] << endl;
    }

    return 0;
}