/*
EJERCICIO 3 - REGISTRAR PRECIOS Y BUSCAR UN VALOR
Autor: Gabriel Jose Garcia
Fecha: 21 de Octubre del 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 6 precios enteros en un arreglo.
    Luego el programa debe:
        - mostrar todos los precios registrados junto con su posicion
        - pedir al usuario un precio para buscar dentro del arreglo.
        - Indicar si ese precio fue encontrado o no
        - mostrar la posicion de la primera coincidencia encontrada.

        E/P/S
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int precios[6];
    int i;
    int buscado;
    int posicion = -1;
    bool encontrado = false;

    for (i = 0; i < 6; i++)
    {
        // Pedimos al usuario que ingrese un precio
        cout << "Ingrese el precio " << i + 1 << ": ";
        // Guardamos el valor ingresado en la posicion actual del registro
        cin >> precios[i];
    }

    cout << endl;
    cout << "Precios registrados: " << endl;

    // PASO 2: MOSTRAR LOS PRECIOS GUARDADOS
    for (i = 0; i < 6; i++)
    {
        // Mostramos la posicion y el valor guardado en esa posicion
        cout << "Posicion" << i << ": " << precios[i] << endl;
    }

    cout << endl;

    // PASO 3: PEDIR EL PRECIO A BUSCAR
    cout << "Ingrese el precio que desea buscar: ";
    cin >> buscado;

    // PASO 4: REALIZAR LA BUSQUEDA SENCUENCIAL
    for (i = 0; i < 6; i++)
    {
        if (precios[i] == buscado && encontrado == false)
        {
            encontrado = true;

            posicion = i;
        }
    }

    cout << endl;

    // PASO 5: MOSTRAR EL RESAULTADOP DE LA BUSQUEDA
    if (encontrado == true)
    {
        cout << "Precio encontrado en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "Precio no fue encontrado en el arreglo." << endl;
    }

    // PASO 1: CARGAR LOS PRECIO EN EL ARREGLO
}