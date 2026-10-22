/*
EJERCICIO FOR - Acumulador con for
Autor: Gabriel José García
Fecha: 16 de Octubre del 2026

Enunciado:
    Elabora un prograrma en C++ que solicite al usuario 5 numeros enteros y calcule
    la suma total de esos numeros usando un bucle for.
    Al final, el programa debe mostrar el resultado acumulado.


    E/P/S:

    Entrada:
        Cinco numeros enteros ingresados por el usuario.

    Proceso:
        Incializar una variable suma en 0
        Repetir 5 veces:
            pedir un numero
            leer el numero
            sumar ese valor al acumulador
        Al final, mostrar la suma total

    Salida:
        La suma total de los 5 numeros ingresados.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int i, numero, suma;

    // Incializamos el acumulasro en 0
    suma = 0;

    // Usamos un for porque ya sabemos que se repetira 5 veces
    for (i = 1; i <= 5; i++)
    {
        // Pedimos cada numero al usuario
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        // Acumulamos el numero ingresado en la suma total
        suma += numero; // suma = suma + numero
    }

    // Mostramos la suma final
    cout << "La suma total es: " << suma << endl;
    return 0;
}
