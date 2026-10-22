/*
CONCEPTOS IMPORTANTES

    1. Una funcion tiene una tarea especifica
        No conviene hacer todo dentor del main.

    2. Parametros:
        Los parametros son los datos que una funcion recibe para poder
        trabajar.

        int calcularSuma(int a, int b, int c, int d)

    3. Retorno:
        El retorno es el valor que la funcion devuelve
        return a+b+c+d;

    4. void
        Una funcion void no devuelve el valor. Solo realiza la accion


    LA IDEA CON EL "&" ES:
        -sin & = copia
        - con & = variable original



    PARTE 2 - PRIMER EJEMPLO: SIN &

*/

#include <iostream>
#include <string>

using namespace std;

// MI FUNCION DE AUMENTAR
void aumentar(int x)
{
    x = x + 1;
    cout << "Dentro de la funcion, x vale: " << x << endl;
}

int main()
{
    int a = 10;

    aumentar(a);

    cout << "Fiera de la funcion, a vale: " << a << endl;

    return 0;
}