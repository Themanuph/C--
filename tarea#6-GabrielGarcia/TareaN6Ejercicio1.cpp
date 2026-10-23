/*

Tarea #4: Números pares hasta N - Ejercicio 1
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
muestre en pantalla todos los números pares desde 1 hasta N.
Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
de error.

*/

/*

Entrada:  
- Un número entero positivo N.
Proceso:  
- Verificar si N es menor o igual a 0.
    - Si lo es, preparar un mensaje de error.
    - Si no, iniciar desde el número 2 e ir avanzando de 2 en 2 hasta llegar a N, identificando así todos los números pares.
Salida:  
- Si N es válido: los números pares desde 1 hasta N.
- Si N es menor o igual a 0: un mensaje indicando que el número debe ser positivo.

*/




#include <iostream>
#include <string>

using namespace std;
int main() {
    int N, c;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    if (N <= 0)
    {
    cout << "Porfavor, ingrese un numero positivo" << endl;
    }
    else {
    
        for  (c = 1; c <= N; c++)
        {
            cout << c << endl;
        }
        
    }

}

