/*
EJERICIO 1 - Cambio en una compra
Autor: Gabriel José García
Fecha: 14 Octubre de 2026

Enunciado:
    Un client compra un producto. El sistema recibe un precio del producto y el dinero pagado.
    Debe mostrar:
        - Si pagado >= precio, mostrar el cambio
        - Si pagado < precio, mostrar cuanto falta pagar

E/P/S:

    Entrada: precio, pagado
    Proceso: comparar pagado con precio, calcular cambio o faltan
    Salida: 'Su cambio es...' o 'faltan...'

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1) Declaramos las variables (Entrada)
    double precio, pagado, faltan, cambio;

    // 2) Lectura de datos
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese el dinero pagado: ";
    cin >> pagado;

    // 3) Decisiones (Reglas del negocio)
    if (pagado < precio)
    {
        // Si pagado es menor, falta dinero
        faltan = precio - pagado;
        cout << "Fatan $" << faltan << endl;
    }
    else
    {
        // Si pagado es mayor o igual, hay cambio
        cambio = pagado - precio;
        cout << "Su cambio es $" << cambio << endl;
    }

    return 0; // Fin del programa
}
