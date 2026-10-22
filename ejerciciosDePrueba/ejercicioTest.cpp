#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaramos la variable para la opcion del menu
    int opcion, num1, num2, suma, numero, i;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1.Sumar dos numeros " << endl;
        cout << "2. Mostrar la tabla de multiplicar de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            suma = num1 + num2;
            cout << "La suma es: " << suma << endl;
        }
        else if (opcion == 2) {
            cout << "Ingrese el numero para mostrar su tabla de multiplicar" << endl;
            cin >> numero;
            for (i = 1; i <= 10; i++) {
                cout << numero << " x " << i << " = " << numero * i << endl;
            }
        }
        else if (opcion == 3) {
            cout << "Hasta luego!" << endl;
        }
        else {
            cout << "Opcion no valida" << endl;
        }

    } while (opcion != 3);

    return 0;
}