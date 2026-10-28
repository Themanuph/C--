/*
Nombre del estudiante: Gabriel Garcia
Fecha: 29/07/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda'

Requisitos funcionales
    - Registrar estudiantes y notas
    Pedir la cantidad de estudiantes y validarla entre 1 y 20.
    Solicitar el nombre y la nota de cada estudiante.
    Validar cada nota entre 0 y 20; si es inválida, volver a pedirla.
    Guardar los datos en dos arreglos relacionados: uno de nombres y otro de notas.
    Si se elige nuevamente esta opción, los datos anteriores se reemplazan.
    Mostrar reporte general
En una sola opción, el programa debe mostrar:
    listado numerado con nombre, nota y estado (APROBADO o REPROBADO);
    promedio general de las notas;
    estudiante con la nota mayor y estudiante con la nota menor;
cantidad de aprobados y reprobados.
Regla: Un estudiante aprueba con una nota mayor o igual a 14. Si varias personas tienen la misma nota
mayor o menor, basta con mostrar la primera que aparece en el arreglo.

3. Buscar estudiante por nombre
    Pedir el nombre y recorrer el arreglo mediante búsqueda secuencial.
    Si se encuentra, mostrar nombre, nota y estado.
    Si no se encuentra, mostrar un mensaje claro.
    La búsqueda será exacta, distingue mayúsculas y minúsculas y muestra la primera coincidencia.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    const int MAX_ESTUDIANTES = 20;
    const double NOTA_APROBATORIA = 14.0;
    int cantidad = 0, opcion = 0;
    string nombres[MAX_ESTUDIANTES];
    double notas[MAX_ESTUDIANTES];
    bool hayDatos = false;

    do {
        cout
        << "                                \n"
        << "    ========= Home =========    \n"
        << " 1. Registrar estudiantes y nota\n"
        << "   2. Mostrar reporte general   \n"
        << " 3.Buscar estudiante por nombre \n"
        << "            4.Salir             \n";
        if (!(cin >> opcion)) {
            cout << "Opcion invalida. Ingrese un numero del 1 al 4.\n";
            limpiarEntrada();
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (opcion == 1) {
            cout << "Cantidad de estudiantes (1-20): ";
            while (!(cin >> cantidad) || cantidad < 1 || cantidad > MAX_ESTUDIANTES) {
                cout << "Cantidad invalida. Ingrese un numero entre 1 y 20: ";
                limpiarEntrada();
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            for (int i = 0; i < cantidad; i++) {
                do {
                    cout << "Nombre del estudiante " << i + 1 << ": ";
                    getline(cin, nombres[i]);
                    if (nombres[i].empty()) cout << "El nombre no puede estar vacio.\n";
                } while (nombres[i].empty());
                cout << "Nota de " << nombres[i] << " (0-20): ";
                while (!(cin >> notas[i]) || notas[i] < 0 || notas[i] > 20) {
                    cout << "Nota invalida. Ingrese una nota entre 0 y 20: ";
                    limpiarEntrada();
                }
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            hayDatos = true;
            cout << "Estudiantes registrados correctamente.\n";
        } else if (opcion == 2) {
            if (!hayDatos) {
                cout << "Primero debe registrar estudiantes.\n";
                continue;
            }
            double suma = 0;
            int aprobados = 0, reprobados = 0, indiceMayor = 0, indiceMenor = 0;
            cout << "\n--- REPORTE GENERAL ---\n";
            for (int i = 0; i < cantidad; i++) {
                string estado = notas[i] >= NOTA_APROBATORIA ? "APROBADO" : "REPROBADO";
                cout << i + 1 << ". " << nombres[i] << " - Nota: " << notas[i] << " - " << estado << '\n';
                suma += notas[i];
                if (notas[i] >= NOTA_APROBATORIA) aprobados++; else reprobados++;
                if (notas[i] > notas[indiceMayor]) indiceMayor = i;
                if (notas[i] < notas[indiceMenor]) indiceMenor = i;
            }
            cout << "Promedio general: " << suma / cantidad << '\n'
                << "Nota mayor: " << nombres[indiceMayor] << " (" << notas[indiceMayor] << ")\n"
                << "Nota menor: " << nombres[indiceMenor] << " (" << notas[indiceMenor] << ")\n"
                << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << '\n';
        } else if (opcion == 3) { 
            if (!hayDatos) {
                cout << "Primero debe registrar estudiantes.\n";
                continue;
            }
            string buscado;
            cout << "Nombre exacto a buscar: ";
            getline(cin, buscado);
            int encontrado = -1;
            for (int i = 0; i < cantidad; i++) {
                if (nombres[i] == buscado) { encontrado = i; break; }
            }
            if (encontrado == -1) {
                cout << "No se encontro el estudiante.\n";
            } else {
                string estado = notas[encontrado] >= NOTA_APROBATORIA ? "APROBADO" : "REPROBADO";
                cout << "Nombre: " << nombres[encontrado] << " | Nota: " << notas[encontrado]
                    << " | Estado: " << estado << '\n';
            }
        } else if (opcion == 4) {
            cout << "Saliendo del programa...\n";
        } else {
            cout << "Opcion invalida.\n";
        }
    } while (opcion != 4);

    return 0;
}