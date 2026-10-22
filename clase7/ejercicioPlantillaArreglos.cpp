/*

EJERCICIO PLANTILLA - ARREGLOS
Autor: Gabriel Jose Garcia
Fecha: 19 de Octubre 2026


Aqui quiero que se queden con esta idea:
    - el arreglo guarda los datos
    - el indice nos dice en que posicion estamos
    - el for nos ayuda a movernos por todas las posiciones

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int datos[5]; // Areglo de 5 enteros
    int i;        // Variable para recorrer posiciones

    // [][][][][]
    //  0 1 2 3 4

    // Carga de datos
    for (i = 0; i < 5; i++)
    {
        cout << "Ingrese el numero a guardarse en el espacio " << i + 1 << endl;
        // primera vuelta ---- > "Ingrese el numero a guardarse en el espacio 1"
        cin >> datos[i];
        // primera vuelta ---> cin >> datos[0] ---- 10
        // segunda vuelta ----> cin >> datos[1] ---- 15
    }

    // Impresion de datos
    for (i = 0; i < 5; i++)
    {
        cout << datos[i] << endl;
        // primera vuelta ----> 10
        // segunda vuelta ----> 15
    }

    return 0;
}