/*
Tarea #8: — Intercambiar dos números - Ejercicio 4
Autor: Gabriel José García
Fecha: 30 Octubre de 2026


#include <iostream>
#include <string>
#include <limits>

using namespace std;


Enunciado:
Desarrolla un programa que permita ingresar dos números enteros y que
utilice una función para intercambiar sus valores.
*/

/*
Entrada:
- Dos números enteros ingresados por el usuario.

Proceso:
1. Leer los dos números mediante una función.
2. Intercambiar sus valores utilizando una función.
3. Mostrar los números después del intercambio.

Salida:
- Los dos números con sus valores intercambiados.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void NumerosIngresar(double &a, double &b) {
    cout << "Ingresa un valor primer valor que quieras intercambiar de lugar: ";

    while (!(cin >> a)) {
        cout << "Ingrese un valor valido para intercambiar: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingresar el segundo valor para intercambiar: ";

    while (!(cin >> b)) {
        cout << "Ingresa un valor valido para intercambiar: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void IntercambiarNumeros(double &a, double &b){
    double aux = a;
    a = b;
    b = aux;
}

int main() {
    double num1, num2;

    NumerosIngresar(num1, num2);

    IntercambiarNumeros(num1, num2);

    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    return 0;
}