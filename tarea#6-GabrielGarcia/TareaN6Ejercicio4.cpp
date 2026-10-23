/*

Tarea #6: Menú repetitivo - Ejercicio 4
Autor: Gabriel José García 
Fecha: 23 Octubre de 2026

Enunciado: Elaborar un programa en C++ que muestre el siguiente menú:
1. Mostrar el doble de un número
2. Mostrar el triple de un número
3. Salir
    El programa debe repetirse hasta que el usuario elija la opción 3.
    Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
    error y volver a mostrar el menú.

*/

/*

Entrada:
- Una opción del menú.
- Un número entero, si el usuario elige la opción 1 o 2.
Proceso:
- Mostrar el menú repetidamente.
- Leer la opción elegida.
- Si elige 1, solicitar un número y mostrar su doble.
- Si elige 2, solicitar un número y mostrar su triple.
- Si elige 3, finalizar el programa.
- Si la opción es inválida, mostrar un mensaje de error y volver a mostrar el menú.
Salida:
- El doble o triple del número ingresado, según la opción.
- Mensaje de error si la opción no es válida.
- Mensaje de salida al elegir la opción 3.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int opcion, numeroIngresado, numeroIngresado2;

    do {
        cout << "                              " << endl;
        cout << "   ========= Home =========   " << endl;
        cout << "   1. Te duplico un numero    " << endl;
        cout << "   2. Te triplico un numero   " << endl;
        cout << "          3. Te vas           " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Numero que quieres duplicar: ";
            cin >> numeroIngresado;

            cout << "EL doble de " << numeroIngresado << " es: " << numeroIngresado * 2;
            break;
        
        case 2:
            cout << "Numero que quieres triplicar: ";
            cin >> numeroIngresado;

            cout << "EL triple de " << numeroIngresado << " es: " << numeroIngresado * 3;
        
        default:
            break;
        }
    } while (opcion != 3);

    return 0;

}