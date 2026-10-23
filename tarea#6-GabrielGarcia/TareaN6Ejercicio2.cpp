/*

Tarea #6: Suma de 5 números- Ejercicio 2
Autor: Gabriel José García 
Fecha: 23 Octubre de 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
    -la suma total
    - y cuántos números fueron ingresados

*/

/*

Entrada:
- 5 números enteros ingresados por el usuario.
Proceso:
- Solicitar los 5 números.
- Sumar todos los valores ingresados.
- Contar la cantidad de números ingresados.
Salida:
- La suma total de los 5 números.
- La cantidad de números ingresados (5).

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int i, suma, numero;
    suma = 0;

    for (i = 1; i <= 5; i++)    
    {
        cout << "Ingrese el valor " << i << ": " << endl;
        cin >> numero;

        suma += numero;

        cout << "La suma de todos los numeros es: " << suma << endl;
    }
    
    return 0;
}

