/*

Tarea #6: Tabla de multiplicar repetitiva - Ejercicio 3
Autor: Gabriel José García 
Fecha: 23 Octubre de 2026

Enunciado: Tabla de multiplicar repetitiva
Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
correctamente.

*/

/*

Entrada:
- Un número entero ingresado por el usuario.
Proceso:
- Solicitar el número.
- Multiplicarlo por cada número del 1 al 10.
- Mostrar cada resultado de la tabla de multiplicar.
- Indicar que la tabla fue generada correctamente.
Salida:
- La tabla de multiplicar del número, del 1 al 10.
- Mensaje: “La tabla fue generada correctamente.”

*/

#include <iostream>
#include <string>

using namespace std; 

int main() {

    int i, numero;

    cout << "Ingrese un numero que quiera multiplicar hasta el 10: " << endl;
    cin >> numero;

    i = 1;

    while (i <= 10)
    {
        cout << "===== " << numero << " * " << i << " =====" << endl;
        cout << numero * i << endl; 
        i++;
    }

    return 0; 
}
