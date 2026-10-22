/*
Ejercicio 2 - Promedio de 3 notas (validacion 0 a 10)
Autor: Gabriel José García
Fecaha: 19 Octubre de 2026

Enunciado: 
    EL sistema recibe 3 notas y muestra el promedio.
    Regla: cada nota debe estar en el rango de 0 a 10.
    si alguna nota no cumple con la regla, el sistema debe mostrar "Datos Invalidos"
*/

/*
E/P/S
    Entrada: 3 notas (números reales)
    Proceso: Validar que cada nota esté en el rango de 0 a 10 y calcular el promedio si todas son válidas.
    Salida: Promedio de las 3 notas o "Datos Invalidos" si alguna nota no es válida
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    //1) variables de entrada
    double nota1, nota2, nota3, promedio;

    //2) Lectura de notas
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    //3) Validación: si alguna nota no está en el rango de 0 a 10, mostrar "Datos Invalidos"
    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        cout << "Datos Invalidos" << endl;
        return 0; //Terminano el programa si hay datos inválidos
}

    //4) Proceso: Calcular el promedio de las 3 notas 
        promedio = (nota1 + nota2 + nota3) / 3.0;
    //5) Salida: Mostrar el promedio
        cout << "Promedio: " << promedio << endl;
    
    return 0;
}