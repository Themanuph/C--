/*
Tarea #8: — Mayor de dos números - Ejercicio 2
Autor: Gabriel José García
Fecha: 30 Octubre de 2026

Enunciado:
Desarrolla un programa que permita ingresar dos números y que utilice
funciones para:
• Leer los dos números.
• Determinar cuál de los dos es mayor.
• Comprobar si ambos números son iguales.
• Mostrar el resultado.
*/

/*
Entrada:
Dos números ingresados por el usuario.

Proceso:
1. Leer los dos números mediante una función.
2. Comparar ambos números.
3. Determinar cuál es el mayor o si son iguales.
4. Mostrar el resultado mediante una función.

Salida:
- El número mayor.
- O un mensaje indicando que ambos números son iguales.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

// FUNCIONES
void leerNumeros(int &num1, int &num2) {
    cout << "Ingrese el primer numero: ";
    while (!(cin >> num1)) {
        cout << "Por favor, ingrese un numero entero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingrese el segundo numero: ";
    while (!(cin >> num2)) {
        cout << "Por favor, ingrese un numero entero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}


void determinarMayor(int num1, int num2) {
    if (num1 > num2) {
        cout << "El numero mayor es: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "El numero mayor es: " << num2 << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }
}

int main() {
    int numero1, numero2;

    leerNumeros(numero1, numero2);

    determinarMayor(numero1, numero2);

    return 0;
}


