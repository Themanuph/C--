/*
PLANTILLA BASE PARA TODO PROGRAMA EN C++

Autor: Gabriel José García
Fecha: 14 de Octubre de 2026

Plantilla para copiar siempre


#include <iostream>
#include <string> // (opcional, solo si se usa texto)
using namespace std;

int main(){
    1) Declarar variables
    2) Pedir datos al usuario (entradas)
    3) Procesos (calculos, operaciones, etc)
    4) Mostrar resultados (salidas)

    return 0;
}
*/

/*
Explicacion de cada parte de la plantilla:

1) #include <iostream>
    Esto le da al programa la capacidad de usar funciones de entrada y de salida, como cout para mostrar
    el mensaje en la pantalla y cin para recibir datos del usuario.

2) using namespace std;
    Esto es para no escribir "std::" antes de cada funcion de la biblioteca estandar, como cout y cin.
    Es una forma de simplificar el codigo.

3) int main(){...}
    Main es la puerta de entrada. Es la funcion principal que se jecuta cuando el programa comienza.
    El codigo que quieras ejecutar debe estar dentro de esta funcion

4) Declraciones de variables:
    Aqui es donde se definen las variables que se vna a usar en el programa. Por ejemplo:
        int edad, o string nombre.

5) cout << "texto";
    Esto imprime en pantalla el texto que se encuentra entre comillas.
    Es la forma de mostrar mensajes al usuario. Pensemos en esto como la salida.

6) cin >> variable;
    Esto es para recibir datos del usuario. El programa se detinene y espera a que el usuario ingrese un valor,
    que luego almacena en la variable.

7) endl;
    Significa salto de linea (Como si fuera un Enter en una archivo de Texto)

8) return 0;
    Esto indica que el programa ha terminado correctamente. Es una forma de decirle al sistema operativo
    que todo ha salido bien.

9) {} (llaves)
    Marcan el bloque de codigo (inicio y fin)

10) ; (punto y coma)
    terminar una instruccion. Si falta, da error.

11) // comentario
    Comenta una linea

12) /*...
    Me sirve para comentar varias lineas de codigo.

*/

/*
TIPO DE DATOS BASICOS

int -> enteros (5, 120, -3)
float/ doubles -> decimales (3.14, 12.5, ...)
char -> un caracter ('A')
string -> texto ("Hola") (requier #include <string>)
bool -> verdaderp / falso (true, false)

*/

/*
CONDICIONALES EN C++

Estructura basica (if/else)

if(condicion){
    / se ejecuta si la condicion es verdadera
}else{
    / se ejecuta si la condicion es falsa

}



Varias condiciones (else if)

if (nota >= 9){
    cout << "Excelente" << endl;
} else if(nota >= 7){
    cout << "Aprobado" << endl;
}else{ 
    cout << "Reprobado" << endl;
}

*/

/*

OPERADORES DE COMPARACION:
= asignacion
== igual a (comparacion)
!= diferente de
> mayor que
< menor que
>= mayor o igual que
<= menor o igual que

*/

/*
OPERADORES LOGICOS

&& AND: ambas condiciones deben cumplirse
|| OR: se cumple una u otra
! NOT: negacion


*/
