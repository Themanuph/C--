/*
Tarea #4: Descuento por edad - Ejercicio 3
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: Si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
a 18, el precio es 2.50 dólares.
*/


/*
Entrada: Edad del cliente
Proceso: Determinar el precio según la edad
Salida: Precio final
*/

#include <iostream>
using namespace std;

int main() {
    int edad;
    double precio;

    cout << "Ingrese la edad del cliente: ";
    cin >> edad;

    if (edad >= 18) {
        precio = 5.0;
    } else {
        precio = 2.50;
    }
    
    cout << "El precio final es: $" << precio << endl;

    return 0;
}