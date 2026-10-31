/*
Tarea #8: — Área de un rectángulo - Ejercicio 3
Autor: Gabriel José García
Fecha: 30 Octubre de 2026

Enunciado:
Desarrolla un programa que permita ingresar la base y la altura de un
rectángulo utilizando números reales y que use funciones para:
• Leer la base y la altura.
• Calcular el área del rectángulo.
• Mostrar el resultado.
*/

/*
Entrada:
- La base del rectángulo.
- La altura del rectángulo.

Proceso:
1. Leer la base y la altura mediante una función.
2. Calcular el área multiplicando la base por la altura.
3. Mostrar el resultado mediante una función.

Salida:
- El área del rectángulo.
*/


#include <iostream>
#include <string>
#include <limits>

using namespace std;

void IngresarBaseYAltura(double &b, double &h) {
    cout << "Ingresar base del rectangulo: ";

    while (!(cin >> b) || b <= 0) {
        cout << "Ingrese un numero mayor que cero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingresar altura del rectangulo: ";

    while (!(cin >> h) || h <= 0) {
        cout << "Ingrese un numero mayor que cero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

double calcularArea(double b, double h) {
    return b * h;
}

void Resultado(double resultado) {
    cout << "El area del rectangulo es: " << resultado << endl;
}

int main() {
    double num1, num2;
    double resultado;

    IngresarBaseYAltura(num1, num2);

    resultado = calcularArea(num1, num2);

    Resultado(resultado);

    return 0;
}
