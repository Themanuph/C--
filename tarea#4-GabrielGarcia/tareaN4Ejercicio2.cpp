/*
Tarea #4: 2: Área y perímetro de un rectángulo - Ejercicio 2
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: Pide la base y la altura de un rectángulo y calcula su área y perímetro.

*/

/*
Entrada: Base y altura del rectángulo
Proceso: Calcular área (base × altura) y perímetro 2 × (base + altura)
Salida: Área y perímetro del rectángulo
*/

#include <iostream>
using namespace std;

int main() {
    double base, altura, area, perimetro;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}