/*
EJERCICIO DO WHILE  - Menu repetitivo con do while
Autor: Gabriel José García
Fecha: 16 de Octubre del 2026

Enunciado:
    Elaborar un programa en C++ que muestre un menu repetitivo con las siguientes
    opciones:
        1. Sumar dos numeros
        2. Mostrar la tabla de multiplicar de un numero
        3. Salir

    El programa debe repetirse hasta que el usuario elija la opcion 3
    Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje
    de error y volver a mostrar el menu.


    E/P/S:

    Entrada:
        Una opcion del menu
        Segun la opcion elegida:
            dos numeros para sumar
            o un numero para mostrar su tabla de multiplicar


    Proceso:
        Mostarar el menu
        Leer la opcion
        Si la opcion es 1:
            pedir dos numero
            sumarlos
            mostrar el resultado

        Si la opcion es 2:
            pedir un numero
            mostrar su tabla del 1 al 10

        Si la opcion es 3:
            mostrar un mensaje de salida

        Si la opciones es invalida:
            mostrar un mensaje de error

        Repetir mientras la opciones sea diferente de 3

    Salida:
        Resultado de la suma
        O la tabla de multiplicar
        O mensaje de salida
        O mensaje de error por opcion invalida

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaramos las variables
    int opcion, num1, num2, suma, numero, i;

    // Usamos do while porque queremos que el menu se muestre al menos una vez

    do
    {
        // Mostramos el menu principal
        cout << "====== MENU ======" << endl;
        cout << "1. Suma dos numeros " << endl;
        cout << "2. Mostrar tabla de multiplicar " << endl;
        cout << "3. Salir " << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion elegida
        if (opcion == 1)
        {
            // Pedimos dos numeros para sumarlos
            cout << "Ingrese el primer numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            // Realizamos la suma
            suma = num1 + num2;

            cout << "La suma es: " << suma << endl;
        }
        else if (opcion == 2)
        {
            // Pedimos un numero para mostrar su tabla de multiplicar
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Mostrams la tabla del 1 al 10 usando un for
            for (i = 1; i <= 10; i++)
            {
                cout << numero << " x " << i << " = " << numero * i << endl;
            }
        }
        else if (opcion == 3)
        {
            // Mostramos mensaje de salida
            cout << "Saliendo del programa... " << endl;
        }
        else
        {
            // Si la opcion no esta en el rango valido, mostrarmos error
            cout << "Error: opcion invalida. Intente nuevamente" << endl;
        }

        // El menu seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}