/*
Tarea #8: — Contador por referencia - Ejercicio 5
Autor: Gabriel José García
Fecha: 30 Octubre de 2026

Enunciado:
Desarrolla un programa que permita ingresar un número entero positivo
y utilice una función para contar desde 0 hasta dicho número,
modificando el contador mediante una referencia.
*/

/*
Entrada:
- Un número entero positivo N.

Proceso:
1. Leer el número mediante una función.
2. Crear un contador que comience en 0.
3. Incrementar el contador hasta llegar a N utilizando una función que trabaje mediante referencia.
4. Mostrar el resultado.

Salida:
- La secuencia de números desde 0 hasta N.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void contarNumero(int &contador, int N) {
    for (contador = 0; contador <= N; contador++) {
        cout << "\n" << contador;
    }
}

int main(){
int N, contador = 0;

cout << "Numero que desea contar: ";
while (!(cin >> N) || N <= 0) {
    cout << "Ingrese un valor entero positivo mayor a 0: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

contarNumero(contador, N);
return 0;
}