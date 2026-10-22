/*
Tarea Reparto de horas en semanas, días y horas - Ejercicio 5
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: Recibir número entero de horas totales del usuario (un valor no
negativo) .El programa debe convertir esa cantidad de horas a semanas, días y horas
sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.
*/

/*
Entrada: Número de horas totales
Proceso: Convertir horas a semanas, días y horas sobrantes
Salida: Cantidad de semanas, días y horas sobrantes
*/

#include <iostream>
using namespace std;

int main() {
    int horasTotales, semanas, dias, horasSobrantes, horasRestantes;

    cout << "Ingrese el numero total de horas: ";
    cin >> horasTotales;

    if (horasTotales < 0) {
        cout << "Ingresa un número no negativo porfa." << endl;
        return 1; 
    }
    // (/) > te dice cuántas veces entra un número entero, parecido a truncar el numero. % > lo q sobra de la division, como el mod de pseint;
    semanas = horasTotales / 168; 
    horasRestantes = horasTotales % 168;

    dias = horasRestantes / 24; 
    horasSobrantes = horasRestantes % 24;

    cout << "Semanas: " << semanas << ", Dias: " << dias << ", Horas sobrantes: " << horasSobrantes << endl;

    return 0;
}
