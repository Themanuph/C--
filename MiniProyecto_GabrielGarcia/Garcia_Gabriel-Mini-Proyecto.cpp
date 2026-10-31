/*
Nombre del estudiante: Gabriel Garcia
Fecha: 27/10/2026

1. Enunciado
Desarrollar un programa en C++ que permita calcular la edad equivalente en años humanos de perros y gatos, estimar su esperanza de vida y clasificar a los perros según su peso.

El programa contará con un menú principal con tres opciones: calcular la edad perruna, calcular la edad gatuna y salir del programa.

Para los perros, se solicitará la edad actual y el peso en kilogramos, con el fin de determinar su categoría de tamaño (pequeño, mediano, grande o gigante), calcular su edad equivalente en años humanos mediante una fórmula aproximada según su tamaño y estimar su esperanza de vida.

Para los gatos, se solicitará su condición de vida (interior, con acceso al exterior o callejero) y su edad actual, para calcular su edad equivalente en años humanos y estimar su esperanza de vida.

El programa validará los datos ingresados, rechazará valores inválidos y mostrará mensajes informativos cuando se superen los límites de edad establecidos, utilizando como referencia récords históricos de longevidad animal.
2. Entrada
Menú principal
    - Opción 1: Calcular edad perruna.
    - Opción 2: Calcular edad gatuna.
    - Opción 3: Salir.
Opción 1: Calcular edad perruna
    - Edad actual del perro en años.
    - Peso del perro en kilogramos.
Opción 2: Calcular edad gatuna
- Condición de vida del gato:
        - Gato de interior (indoor).
        - Gato con acceso al exterior.
        - Gato callejero.
- Edad actual del gato en años.
3. Proceso
Opción 1: Perros
1. Solicitar la edad actual del perro y validar que sea mayor que cero.
2. Comprobar que la edad no supere el límite establecido de 29 años.
3. Solicitar el peso en kilogramos y verificar que sea un número positivo.
4. Clasificar al perro según su peso: pequeño, mediano, grande o gigante.
5. Calcular su edad equivalente en años humanos mediante una fórmula aproximada que considere su tamaño.
6. Estimar su esperanza de vida según su categoría.
7. Mostrar los resultados.
Opción 2: Gatos
1. Mostrar las opciones de condición de vida y solicitar una selección válida.
2. Solicitar la edad actual del gato y validar que sea mayor que cero.
3. Comprobar que la edad no supere el límite establecido de 38 años.
4. Calcular la edad equivalente en años humanos mediante una fórmula aproximada para gatos.
5. Estimar la esperanza de vida según su condición de vida.
6. Mostrar los resultados.
Validaciones generales
    - Si se introduce una opción inexistente en el menú, solicitarla nuevamente.
    - Si se ingresan letras u otros datos incompatibles con el tipo solicitado, mostrar un mensaje de error y volver a pedir el dato.
    - Rechazar edades iguales o inferiores a cero y pesos iguales o inferiores a cero.
    - Si se supera el límite de edad establecido, mostrar un mensaje humorístico basado en los récords históricos de longevidad.
    - No continuar los cálculos hasta recibir datos válidos.
Opción 3: Salir

Finalizar el programa y mostrar un mensaje de despedida.
4. Salida
Para perros
    - Edad actual.
    - Peso en kilogramos.
    - Categoría de tamaño.
    - Edad equivalente aproximada en años humanos.
    - Esperanza de vida estimada.
Para gatos
    - Edad actual.
    - Condición de vida.
    - Edad equivalente aproximada en años humanos.
    - Esperanza de vida estimada.
En caso de errores
    - Mensaje que explique por qué el dato no es válido.
    - Solicitud para ingresar nuevamente el dato.
    - Mensaje especial cuando se supere el límite de edad.
*/

#include <iostream>
#include <string>
#include <limits>
using namespace std;

const int MAX_MASCOTAS = 20;
const int EDAD_GATUNA_LIMITE = 38;
const int EDAD_PERRUNA_LIMITE = 29;

void LimpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int LeerEntero(const string& mensaje, int minimo, int maximo) {
    int valor;
    cout << mensaje;

    while (!(cin >> valor) || valor < minimo || valor > maximo) {
        cout << "Opcion o dato invalido. Ingrese un valor entre "
            << minimo << " y " << maximo << ": ";
        LimpiarEntrada();
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return valor;
}

double LeerPeso() {
    double peso;

    cout << "Ingrese el peso de su perro en kg: ";

    while (!(cin >> peso) || peso <= 0) {
        cout << "El peso debe ser mayor a 0 y un valor positivo.\n";
        cout << "Elija de nuevo el peso: ";
        LimpiarEntrada();
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return peso;
}

int CalcularEdadHumanaPerro(int edad, double peso) {
    int edadHumana;

    if (edad == 1) {
        return 15;
    }

    if (edad == 2) {
        return 24;
    }

    if (peso <= 10) {
        edadHumana = 24 + (edad - 2) * 4;
    } else if (peso <= 25) {
        edadHumana = 24 + (edad - 2) * 5;
    } else if (peso <= 45) {
        edadHumana = 24 + (edad - 2) * 6;
    } else {
        edadHumana = 24 + (edad - 2) * 7;
    }

    return edadHumana;
}

int CalcularEdadHumanaGato(int edad) {
    if (edad == 1) {
        return 15;
    }

    if (edad == 2) {
        return 24;
    }

    return 24 + (edad - 2) * 4;
}

string ObtenerTamanoPerro(double peso) {
    if (peso <= 10) {
        return "Perro pequeno o miniatura";
    } else if (peso <= 25) {
        return "Perro mediano";
    } else if (peso <= 45) {
        return "Perro grande";
    } else {
        return "Perro gigante";
    }
}

string ObtenerEsperanzaPerro(double peso) {
    if (peso <= 10) {
        return "12 a 17 anos";
    } else if (peso <= 25) {
        return "10 a 15 anos";
    } else if (peso <= 45) {
        return "8 a 13 anos";
    } else {
        return "6 a 11 anos";
    }
}

string ObtenerCondicionGato(int condicion) {
    if (condicion == 1) {
        return "Gato de interior";
    } else if (condicion == 2) {
        return "Gato con acceso al exterior";
    } else {
        return "Gato callejero";
    }
}

string ObtenerEsperanzaGato(int condicion) {
    if (condicion == 1) {
        return "12 a 18 anos o mas";
    } else if (condicion == 2) {
        return "5 a 12 anos";
    } else {
        return "2 a 5 anos";
    }
}

int CalcularCantidadMascotas(int disponibles) {
    int cantidadRegistrar;

    cout << "\nCuantas mascotas desea registrar? (1 a "
    << disponibles << "): ";

    while (!(cin >> cantidadRegistrar) ||
        cantidadRegistrar < 1 ||
        cantidadRegistrar > disponibles) {

        cout << "Ingrese una cantidad valida entre 1 y "
            << disponibles << ": ";

        LimpiarEntrada();
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return cantidadRegistrar;
}

void RegistrarUnaMascota(
    string nombres[],
    int tipos[],
    int edades[],
    double pesos[],
    int condiciones[],
    int posicion
) {
    int tipo;

    cout << "\nNombre de la mascota: ";
    getline(cin, nombres[posicion]);

    while (nombres[posicion].empty()) {
        cout << "El nombre no puede estar vacio. Ingrese nuevamente: ";
        getline(cin, nombres[posicion]);
    }

    cout << "\nTipo de mascota:\n";
    cout << "1. Perro\n";
    cout << "2. Gato\n";

    tipo = LeerEntero("Seleccione una opcion: ", 1, 2);
    tipos[posicion] = tipo;

    if (tipo == 1) {

        cout << "\n========== Calculadora de edad perruna ==========\n";
        cout << "Edad Actual del perro: ";

        while (!(cin >> edades[posicion]) ||
            edades[posicion] <= 0 ||
            edades[posicion] > EDAD_PERRUNA_LIMITE) {

            cout << "Te pashaste te pashaste\n";
            cout << "------------------------------------------------------------ DATASO ------------------------------------------------------------\n";
            cout << "Sabias que el perro mas longevo con un record ampliamente reconocido es Bluey, que vivio 29 a y 5 meses.\n";
            cout << "---------------------------------------------------------------------------------------------------------------------------------\n";
            cout << "Elije una edad creible porfa: ";

            LimpiarEntrada();
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        pesos[posicion] = LeerPeso();
        condiciones[posicion] = 0;

    } else {

        cout << "\n========== Calculadora de edad gatuna ==========\n";
        cout << "Edad Actual del gato: ";

        while (!(cin >> edades[posicion]) ||
            edades[posicion] <= 0 ||
            edades[posicion] > EDAD_GATUNA_LIMITE) {

            cout << "Te pashaste te pashaste\n";
            cout << "------------------------------------------------------------ DATASO ------------------------------------------------------------\n";
            cout << "Creme Puff vivio 38 anios y 3 dias, asi que la edad supera el record conocido de longevidad felina.\n";
            cout << "---------------------------------------------------------------------------------------------------------------------------------\n";
            cout << "Introduce de nuevo la edad: ";

            LimpiarEntrada();
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nCondicion del gato:\n";
        cout << "1. Gato de interior\n";
        cout << "2. Gato con acceso al exterior\n";
        cout << "3. Gato callejero\n";

        condiciones[posicion] = LeerEntero("Seleccione una opcion: ", 1, 3);

        pesos[posicion] = 0;
    }

    cout << "\nMascota registrada correctamente.\n";
}

void RegistrarMascotas(
    string nombres[],
    int tipos[],
    int edades[],
    double pesos[],
    int condiciones[],
    int& cantidad
) {
    if (cantidad >= MAX_MASCOTAS) {
        cout << "\nYa llegaste al limite de 20 mascotas.\n";
        return;
    }

    int disponibles = MAX_MASCOTAS - cantidad;
    int cantidadRegistrar = CalcularCantidadMascotas(disponibles);

    for (int i = 0; i < cantidadRegistrar; i++) {

        cout << "\n========= Registro de mascota "
            << i + 1 << " de " << cantidadRegistrar
            << " =========\n";

        RegistrarUnaMascota(
            nombres,
            tipos,
            edades,
            pesos,
            condiciones,
            cantidad
        );

        cantidad++;
    }
}

void MostrarMascotas(
    string nombres[],
    int tipos[],
    int edades[],
    double pesos[],
    int condiciones[],
    int cantidad
) {
    if (cantidad == 0) {
        cout << "\nTodavia no hay mascotas registradas.\n";
        return;
    }

    cout << "\n========== MASCOTAS REGISTRADAS ==========\n";

    for (int i = 0; i < cantidad; i++) {

        cout << "\nMascota " << i + 1 << ": " << nombres[i] << "\n";
        cout << "Edad actual: " << edades[i] << " anos\n";

        if (tipos[i] == 1) {

            cout << "Tipo: Perro\n";
            cout << "Peso: " << pesos[i] << " kg\n";
            cout << "Categoria: " << ObtenerTamanoPerro(pesos[i]) << "\n";
            cout << "Edad humana aproximada: "
                << CalcularEdadHumanaPerro(edades[i], pesos[i])
                << " anos\n";
            cout << "Esperanza de vida: "
                << ObtenerEsperanzaPerro(pesos[i]) << "\n";

        } else {

            cout << "Tipo: Gato\n";
            cout << "Condicion: "
                << ObtenerCondicionGato(condiciones[i]) << "\n";
            cout << "Edad humana aproximada: "
                << CalcularEdadHumanaGato(edades[i]) << " anos\n";
            cout << "Esperanza de vida: "
                << ObtenerEsperanzaGato(condiciones[i]) << "\n";
        }
    }
}

int BuscarRegistro(
    string nombres[],
    int cantidad,
    string nombreBuscado
) {
    for (int i = 0; i < cantidad; i++) {

        if (nombres[i] == nombreBuscado) {
            return i;
        }
    }

    return -1;
}

void BuscarMascota(
    string nombres[],
    int tipos[],
    int edades[],
    double pesos[],
    int condiciones[],
    int cantidad
) {
    if (cantidad == 0) {
        cout << "\nNo hay mascotas para buscar. Primero registre una.\n";
        return;
    }

    string nombreBuscado;

    cout << "\nIngrese el nombre exacto de la mascota: ";
    getline(cin, nombreBuscado);

    int posicion = BuscarRegistro(nombres, cantidad, nombreBuscado);

    if (posicion == -1) {
        cout << "\nNo se encontro una mascota con ese nombre.\n";
        return;
    }

    cout << "\nMascota encontrada: " << nombres[posicion] << "\n";
    cout << "Edad actual: " << edades[posicion] << " anos\n";

    if (tipos[posicion] == 1) {

        cout << "Tipo: Perro\n";
        cout << "Peso: " << pesos[posicion] << " kg\n";
        cout << "Categoria: " << ObtenerTamanoPerro(pesos[posicion]) << "\n";
        cout << "Edad humana aproximada: "
            << CalcularEdadHumanaPerro(edades[posicion], pesos[posicion])
            << " anos\n";
        cout << "Esperanza de vida: "
            << ObtenerEsperanzaPerro(pesos[posicion]) << "\n";

    } else {

        cout << "Tipo: Gato\n";
        cout << "Condicion: "
            << ObtenerCondicionGato(condiciones[posicion]) << "\n";
        cout << "Edad humana aproximada: "
            << CalcularEdadHumanaGato(edades[posicion]) << " anos\n";
        cout << "Esperanza de vida: "
            << ObtenerEsperanzaGato(condiciones[posicion]) << "\n";
    }
}

void MostrarReporte(int tipos[], int edades[], int cantidad) {

    if (cantidad == 0) {
        cout << "\nNo hay datos para generar el reporte.\n";
        return;
    }

    int perros = 0;
    int gatos = 0;
    int sumaEdades = 0;

    for (int i = 0; i < cantidad; i++) {

        if (tipos[i] == 1) {
            perros++;
        } else {
            gatos++;
        }

        sumaEdades += edades[i];
    }

    double promedio = static_cast<double>(sumaEdades) / cantidad;

    cout << "\n========== REPORTE GENERAL ==========\n";
    cout << "Total de mascotas: " << cantidad << "\n";
    cout << "Cantidad de perros: " << perros << "\n";
    cout << "Cantidad de gatos: " << gatos << "\n";
    cout << "Edad promedio de las mascotas: " << promedio << " anos\n";
}

void ComponenteCreativo(
    string nombres[],
    int tipos[],
    int edades[],
    double pesos[],
    int condiciones[],
    int cantidad
) {
    if (cantidad == 0) {
        cout << "\nNo hay mascotas registradas para realizar el analisis.\n";
        return;
    }

    cout << "\n========== ANALISIS DE EDAD Y EXPECTATIVA ==========\n";

    for (int i = 0; i < cantidad; i++) {

        cout << "\nAnalisis de " << nombres[i] << ":\n";

        if (tipos[i] == 1) {

            int edadHumana = CalcularEdadHumanaPerro(edades[i], pesos[i]);

            cout << "Equivale aproximadamente a "
                << edadHumana << " anos humanos.\n";

            cout << "Por su peso, se clasifica como: "
                << ObtenerTamanoPerro(pesos[i]) << ".\n";

            cout << "Su esperanza de vida estimada es de "
                << ObtenerEsperanzaPerro(pesos[i]) << ".\n";

            if (edadHumana >= 70) {
                cout << "Recomendacion: prestale especial atencion a sus controles veterinarios.\n";
            } else {
                cout << "Recomendacion: manten sus controles y actividad adecuados para su edad.\n";
            }

        } else {

            int edadHumana = CalcularEdadHumanaGato(edades[i]);

            cout << "Equivale aproximadamente a "
                << edadHumana << " anos humanos.\n";

            cout << "Condicion: "
                << ObtenerCondicionGato(condiciones[i]) << ".\n";

            cout << "Su esperanza de vida estimada es de "
                << ObtenerEsperanzaGato(condiciones[i]) << ".\n";

            if (condiciones[i] == 3) {
                cout << "Recomendacion: si es posible, busca apoyo para mejorar su alimentacion y atencion veterinaria.\n";
            } else {
                cout << "Recomendacion: manten sus controles veterinarios y un entorno seguro.\n";
            }
        }
    }
}

int main() {

    string nombres[MAX_MASCOTAS];
    int tipos[MAX_MASCOTAS];
    int edades[MAX_MASCOTAS];
    double pesos[MAX_MASCOTAS];
    int condiciones[MAX_MASCOTAS];

    int cantidad = 0;
    int opcion = 0;

    do {

        cout << "\n================ MENU PRINCIPAL ================\n";
        cout << "1. Registrar mascotas\n";
        cout << "2. Mostrar mascotas registradas\n";
        cout << "3. Buscar mascota por nombre\n";
        cout << "4. Mostrar reporte general\n";
        cout << "5. Analizar edad y esperanza de vida\n";
        cout << "6. Salir\n";

        opcion = LeerEntero("Seleccione una opcion (1-6): ", 1, 6);

        switch (opcion) {

            case 1:
                RegistrarMascotas(
                    nombres,
                    tipos,
                    edades,
                    pesos,
                    condiciones,
                    cantidad
                );
                break;

            case 2:
                MostrarMascotas(
                    nombres,
                    tipos,
                    edades,
                    pesos,
                    condiciones,
                    cantidad
                );
                break;

            case 3:
                BuscarMascota(
                    nombres,
                    tipos,
                    edades,
                    pesos,
                    condiciones,
                    cantidad
                );
                break;

            case 4:
                MostrarReporte(tipos, edades, cantidad);
                break;

            case 5:
                ComponenteCreativo(
                    nombres,
                    tipos,
                    edades,
                    pesos,
                    condiciones,
                    cantidad
                );
                break;

            case 6:
                cout << "\nGracias por utilizar el programa. Hasta luego!\n";
                break;
        }

    } while (opcion != 6);

    return 0;
}