/*
EJERCICIO 1 - MENU SIMPLE CON SWITCH
Autor: Gabriel Jose Garcia
Fecha: 19 de octubre del 2026


Switch: es una estructura de seleccion que permite ejecutar diferentes bloques de codigo
segun el valor de una variable

Suele ser util:
    - hay varias opciones numeros o fijas
    - se quiere organizar mejor un menu
    - cada opcion represnta un caso distinto

Diferencia rapida con if/else
    - if/else sirve mas cuando las condiciones puedens er variadas o complejas
    - switch sirve mas cuando comparas una sola variable contra varios valores concretos


Enunciado: Elaborar un programa en C++ que muestre un menu con las siguientes opciones:
    1. Mostrar mensaje de bienvenida
    2. Mostrar el cuadrado de un numero
    3. Salir

    El programa debe repetirse hasta que el usuario elija la opcion 3.
    Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error y volver a mostrar el menu.


    E/P/S

        Entrada:
            - una opcion del menu
            - Si elige la opcion2, un numero entero
        Proceso:
            - Mostrar menu
            - Leer opcion
            - Evaluar la opcion con switch
            - Ejecutar la accion correspondiente
            - Repetir hasta que el usuario elija salir
        Salida:
            - mensaje de bienvenida
            - el cuadrado de un numero
            - mensaje de salida
            - mensaje de error por opcion invalida

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaro las variables
    int opcion;
    int numero, cuadrado;

    // Usamos do while para el menu se meustre al menos una vez
    do
    {
        // Mostramos el menu
        cout << "==== MENU CON SWITCH ====" << endl;
        cout << "1. Mostrar bienvenida " << endl;
        cout << "2. Mostrar cuadrado de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccion una opcion: " << endl;
        cin >> opcion;

        // Evaluamos la opcion ingresada usando switch

        switch (opcion)
        {
        case 1:
            // Opcion1: mostrar mensaje
            cout << "Bienvenidos a la clase 6 de C++" << endl;
            break;

        case 2:
            // Opcion 2: pedir un numero y mostrar su cuadrado
            cout << "Ingrese un numero: " << endl;
            cin >> numero;

            // Calculamos el cuadrado
            cuadrado = numero * numero;

            // Mostramos el resultado
            cout << "El cuadrado es:  " << cuadrado << endl;
            break;

        case 3:
            // Opcion 3: salir del programa
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            // Si la opcion no coincide con ningun caso
            cout << "Error: opcion invalida." << endl;
        }
        // El menu se repetira mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}
