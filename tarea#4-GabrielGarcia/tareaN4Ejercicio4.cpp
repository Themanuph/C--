/*
Tarea #4: Nota final con ponderaciones - Ejercicio 4
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%.
*/

/*
Entrada: Notas de Parcial 1, Parcial 2 y Proyecto
Proceso: Calcular la nota final usando ponderaciones
Salida: Nota final
*/

#include <iostream>
using namespace std;

int main() {
    double parcial1, parcial2, proyecto, notaFinal;

    cout << "Ingrese la nota del Parcial 1: ";
    cin >> parcial1;

    cout << "Ingrese la nota del Parcial 2: ";
    cin >> parcial2;

    cout << "Ingrese la nota del Proyecto: ";
    cin >> proyecto;

    parcial1 = parcial1 * 0.30;
    parcial2 = parcial2 * 0.30;
    proyecto = proyecto * 0.40;
    notaFinal = parcial1 + parcial2 + proyecto;

    cout << "La nota final es: " << notaFinal << endl;

    return 0;
}
