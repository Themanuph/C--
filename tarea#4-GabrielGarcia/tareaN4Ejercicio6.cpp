/*
Tarea Plan de internet (validación + recargo) - Ejercicio 6
Autor: Gabriel José García 
Fecha: 19 Octubre de 2026

Enunciado: recibe dos datos: el plan de internet y el consumo. El plan
solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero.
Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la
tarifa base es 20 dólares y el límite incluido es 150.
Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada
unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se
paga solo la tarifa base.
Si el plan no es 1 ni 2, o si el consumo es negativo, el programa debe mostrar “DATOS INVÁLIDOS”. En caso contrario, debe mostrar el total a pagar..
*/

/*
Entrada: Plan de internet (1 o 2) y consumo (número mayor o igual a cero)
Proceso: Validar los datos de entrada y calcular el total a pagar según el plan y el consumo.
Salida: Total a pagar "DATOS INVÁLIDOS"
*/

#include <iostream>
using namespace std;

int main() {
    int plan;
    double consumo, totalPagar;

    cout << "Ingrese el plan de internet (1 o 2): ";
    cin >> plan;

    cout << "Ingrese el consumo: ";
    cin >> consumo;

    if ((plan != 1 && plan != 2) || consumo < 0) {
        cout << "datos invalidos" << endl;
        return 1; 
    }

    if (plan == 1) {
        totalPagar = 12.0;
        if (consumo > 80) {
            totalPagar += (consumo - 80) * 0.25;
        }
    } else {
        totalPagar = 20.0;
        if (consumo > 150) {
            totalPagar += (consumo - 150) * 0.25;
        }
    }

    cout << "Total a pagar: $" << totalPagar << endl;

    return 0;
}