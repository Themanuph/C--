/*
EJERCICIO 2 - BUSQUEDA SECUENCIAL EN ARREGLOS
Autor: Gabriel Jose Garcia
Fecha: 19 de Octubre del 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 6 numeros enteros
    en un arreglo.
    Luego, pedir al usuario un numero adicional para buscar dentro del arreglo.

    El programa debe indicar:
        - si el numero fue encontrado
        - y en que posicion se encuentra

    Si el numero no existe en el arreglo, debe mostrar un mensaje indicando
    que no fue encontrado.

    En esta clase se trabajara con la primera coincidencia encontrada.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numeros[6];

    int i;
    // Variable donde guardaremos el numero que el usuario quiere buscar
    int buscado;

    // Variable para guardar la posicion donde se encontr el numero.
    // Si el valor al final no cambia de -1 entonces significa que no se encontro el numero en el arreglo
    int posicion = -1;

    // Variable bandera: nos ayuda a saber si encontramos o no el numero
    bool encontrado = false;

    // CARGA DE DATOS

    for (i = 0; i < 6; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << endl;

    // Pedimos el numero que se desea buscar
    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscado;

    // BUSQUEDA SECUENCIAL

    // Recorrer el arreglo posicion por posicion
    for (i = 0; i < 6; i++)
    {
        // Compraramos si el valor guardad en la posicion i es igual al numero que queremos buscar.
        if (numeros[i] == buscado && encontrado == false)
        {
            // Si conincide, marcamos que si fue encontrado
            encontrado = true;

            // Guardamos la posicion donde la encontramos
            posicion = i + 1;
        }
    }

    cout << endl;

    // RESULTADO FINAL
    if (encontrado == true)
    {
        cout << "Numero encontrado en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "Numero no encontrado en el arreglo." << endl;
    }

    return 0;
}