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
const int edadGatunaLimite = 38;
const int edadPerrunaLimite = 29;

void LimpiarEntrada(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int LeerEntero(string mensaje, int minimo, int maximo){
    int valor;
    cout << mensaje;
    while (!(cin >> valor) || valor < minimo || valor > maximo){
        cout << "Opcion o dato invalido. Vuelve a intentarlo: ";
        LimpiarEntrada();
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return valor;
}

double LeerPeso(){
    double pesoKg;
    cout << "---------------------------------- \n"
        << " Introduce su peso en kg (aprox): \n"
        << "---------------------------------- \n";
    while (!(cin >> pesoKg) || pesoKg <= 0){
        cout << "El peso debe ser mayor a 0 y un valor positivo \n"
            << "---------------------------------------------- \n"
            << "Elija de nuevo el peso: \n"
            << "---------------------------------------------- \n";
        LimpiarEntrada();
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return pesoKg;
}

int CalcularEdadHumanaPerro(int edadPerruna, double pesoKg){
    if (edadPerruna == 1) return 15;
    if (edadPerruna == 2) return 24;

    int aniosAdicionales = edadPerruna - 2;
    if (pesoKg <= 10) return 24 + aniosAdicionales * 4;
    else if (pesoKg <= 25) return 24 + aniosAdicionales * 5;
    else if (pesoKg <= 45) return 24 + aniosAdicionales * 6;
    else return 24 + aniosAdicionales * 7;
}

int CalcularEdadHumanaGato(int edadGatuna){
    if (edadGatuna == 1) return 15;
    if (edadGatuna == 2) return 24;
    int aniosAdicionalesGato = edadGatuna - 2;
    return 24 + aniosAdicionalesGato * 4;
}

string ObtenerTamanoPerro(double pesoKg){
    if (pesoKg <= 10) return "perro pequeno o miniatura";
    else if (pesoKg <= 25) return "Perro mediano";
    else if (pesoKg <= 45) return "Perro grande";
    else return "Perro gigante";
}

string ObtenerEsperanzaPerro(double pesoKg){
    if (pesoKg <= 10) return "Puede que viva de 12 a 17 anios";
    else if (pesoKg <= 25) return "Puede que viva 10 a 15 anios";
    else if (pesoKg <= 45) return "Puede que viva de 8 a 13 anios";
    else return "Viven entre 6 y 11 anios";
}

string ObtenerCondicionGato(int tipoGato){
    if (tipoGato == 1) return "Gato de interior";
    else if (tipoGato == 2) return "Gato con acceso al exterior";
    else return "Gato callejero";
}

string ObtenerEsperanzaGato(int tipoGato){
    if (tipoGato == 1) return "viven entre 12 y 18 anios (o mas)";
    else if (tipoGato == 2) return "Su expectativa de vida baja a 5 a 12 anios debido a riesgos como atropellos";
    else return "Su promedio de vida es de 2 a 5 anios por la falta de alimento constante y atencion medica.";
}

void RegistrarMascota(string nombres[], int tipos[], int edades[], double pesos[], int condiciones[], int &cantidad){
    if (cantidad >= MAX_MASCOTAS){
        cout << "Ya llegaste al limite de 20 mascotas, capo.\n";
        return;
    }

    string nombre;
    int tipo, edad;
    cout << "Nombre de la mascota: ";
    getline(cin, nombre);
    while (nombre.empty()){
        cout << "El nombre no puede estar vacio. Intentalo de nuevo: ";
        getline(cin, nombre);
    }

    cout << "1. Perro\n2. Gato\n";
    tipo = LeerEntero("Elija el tipo de mascota: ", 1, 2);

    if (tipo == 1){
        cout << "=========================== \n"
            << "Calculadora de edad perruna \n"
            << "--------------------------- \n"
            << "Edad Actual del perro \n";
        edad = LeerEntero("", 1, edadPerrunaLimite);
        if (edad == edadPerrunaLimite){
            cout << "Sabias que el perro mas longevo con un record ampliamente reconocido es Bluey, que vivio 29 a y 5 meses.\n";
        }
        double peso = LeerPeso();
        nombres[cantidad] = nombre;
        tipos[cantidad] = tipo;
        edades[cantidad] = edad;
        pesos[cantidad] = peso;
        condiciones[cantidad] = 0;

        cout << "------------Tamano-------------\n"
            << ObtenerTamanoPerro(peso) << "\n"
            << "-------Esperanza de vida-------\n"
            << ObtenerEsperanzaPerro(peso) << "\n"
            << "\n------- Edad equivalente humana -------\n"
            << "Tu perro tiene aproximadamente "
            << CalcularEdadHumanaPerro(edad, peso) << " anios humanos.\n";
    } else {
        cout << "=========================== \n"
            << "Calculadora de edad gatuna \n"
            << "--------------------------- \n"
            << "Edad Actual del gato: \n";
        edad = LeerEntero("", 1, edadGatunaLimite);
        if (edad == edadGatunaLimite){
            cout << "Creme Puff vivio 38 anios y 3 dias, asi que estas rozando el record conocido de longevidad felina.\n";
        }

        cout << "\nTipo de gato:\n"
            << "1. Gato de interior\n"
            << "2. Gato con acceso al exterior\n"
            << "3. Gato callejero\n";
        int condicion = LeerEntero("Elija una opcion: ", 1, 3);

        nombres[cantidad] = nombre;
        tipos[cantidad] = tipo;
        edades[cantidad] = edad;
        pesos[cantidad] = 0;
        condiciones[cantidad] = condicion;

        cout << "---------------------------------- \n"
            << ObtenerEsperanzaGato(condicion) << "\n"
            << "\n------------ Edad equivalente humana ------------\n"
            << "Tu Gato tiene aproximadamente "
            << CalcularEdadHumanaGato(edad) << " anios humanos.\n";
    }

    cantidad++;
    cout << "\nMascota registrada correctamente.\n";
}

void MostrarMascotas(string nombres[], int tipos[], int edades[], double pesos[], int condiciones[], int cantidad){
    if (cantidad == 0){
        cout << "Todavia no hay mascotas registradas.\n";
        return;
    }

    cout << "\n========= MASCOTAS REGISTRADAS =========\n";
    for (int i = 0; i < cantidad; i++){
        cout << "\nNombre: " << nombres[i] << "\n";
        cout << "Tipo: " << (tipos[i] == 1 ? "Perro" : "Gato") << "\n";
        cout << "Edad: " << edades[i] << " anios\n";
        if (tipos[i] == 1){
            cout << "Peso: " << pesos[i] << " kg\n";
            cout << "Tamano: " << ObtenerTamanoPerro(pesos[i]) << "\n";
        } else {
            cout << "Condicion: " << ObtenerCondicionGato(condiciones[i]) << "\n";
        }
    }
}

int BuscarRegistro(string nombres[], int cantidad, string nombreBuscado){
    for (int i = 0; i < cantidad; i++){
        if (nombres[i] == nombreBuscado) return i;
    }
    return -1;
}

void BuscarMascota(string nombres[], int tipos[], int edades[], double pesos[], int condiciones[], int cantidad){
    if (cantidad == 0){
        cout << "Todavia no hay mascotas para buscar.\n";
        return;
    }

    string nombreBuscado;
    cout << "Ingrese el nombre de la mascota que desea buscar: ";
    getline(cin, nombreBuscado);

    int posicion = BuscarRegistro(nombres, cantidad, nombreBuscado);
    if (posicion == -1){
        cout << "No se encontro una mascota con ese nombre.\n";
        return;
    }

    cout << "\nMascota encontrada:\n";
    cout << "Nombre: " << nombres[posicion] << "\n";
    cout << "Tipo: " << (tipos[posicion] == 1 ? "Perro" : "Gato") << "\n";
    cout << "Edad: " << edades[posicion] << " anios\n";
    if (tipos[posicion] == 1){
        cout << "Peso: " << pesos[posicion] << " kg\n";
        cout << "Tamano: " << ObtenerTamanoPerro(pesos[posicion]) << "\n";
    } else {
        cout << "Condicion: " << ObtenerCondicionGato(condiciones[posicion]) << "\n";
    }
}

void MostrarReporte(int tipos[], int edades[], int cantidad){
    if (cantidad == 0){
        cout << "Todavia no hay datos para generar el reporte.\n";
        return;
    }

    int perros = 0, gatos = 0, sumaEdades = 0;
    for (int i = 0; i < cantidad; i++){
        if (tipos[i] == 1) perros++;
        else gatos++;
        sumaEdades += edades[i];
    }

    cout << "\n========= REPORTE GENERAL =========\n";
    cout << "Mascotas registradas: " << cantidad << "\n";
    cout << "Cantidad de perros: " << perros << "\n";
    cout << "Cantidad de gatos: " << gatos << "\n";
    cout << "Edad promedio de las mascotas: "
        << static_cast<double>(sumaEdades) / cantidad << " anios\n";
}

void ComponenteCreativo(string nombres[], int tipos[], int edades[], double pesos[], int condiciones[], int cantidad){
    if (cantidad == 0){
        cout << "Todavia no hay mascotas para analizar.\n";
        return;
    }

    cout << "\n========= ANALISIS DE EDAD Y LONGEVIDAD =========\n";
    for (int i = 0; i < cantidad; i++){
        cout << "\nMascota: " << nombres[i] << "\n";
        if (tipos[i] == 1){
            cout << "Edad equivalente: "
                << CalcularEdadHumanaPerro(edades[i], pesos[i]) << " anios humanos\n";
            cout << "Categoria: " << ObtenerTamanoPerro(pesos[i]) << "\n";
            cout << "Esperanza de vida estimada: " << ObtenerEsperanzaPerro(pesos[i]) << "\n";
        } else {
            cout << "Edad equivalente: "
                << CalcularEdadHumanaGato(edades[i]) << " anios humanos\n";
            cout << "Condicion: " << ObtenerCondicionGato(condiciones[i]) << "\n";
            cout << "Esperanza de vida estimada: " << ObtenerEsperanzaGato(condiciones[i]) << "\n";
        }
    }
}

int main(){
    double pesos[MAX_MASCOTAS] = {};
    int opcion = 0;
    int tipos[MAX_MASCOTAS] = {};
    int edades[MAX_MASCOTAS] = {};
    int condiciones[MAX_MASCOTAS] = {};
    string nombres[MAX_MASCOTAS];
    int cantidad = 0;

    do{
        cout
        << "                                    \n"
        << "\n========= MENU PRINCIPAL =========\n"
        << "1. Registrar mascota.\n"
        << "2. Mostrar mascotas registradas.\n"
        << "3. Buscar mascota.\n"
        << "4. Mostrar reporte general.\n"
        << "5. Analizar edad perruna y gatuna.\n"
        << "6. Salir.\n";

        opcion = LeerEntero("Elija una opcion: ", 1, 6);

        switch (opcion){
            case 1:
                RegistrarMascota(nombres, tipos, edades, pesos, condiciones, cantidad);
                break;
            case 2:
                MostrarMascotas(nombres, tipos, edades, pesos, condiciones, cantidad);
                break;
            case 3:
                BuscarMascota(nombres, tipos, edades, pesos, condiciones, cantidad);
                break;
            case 4:
                MostrarReporte(tipos, edades, cantidad);
                break;
            case 5:
                ComponenteCreativo(nombres, tipos, edades, pesos, condiciones, cantidad);
                break;
            case 6:
                cout << "Gracias por usar la calculadora de mascotas. Hasta la proxima, capo.\n";
                break;
        }
    } while (opcion != 6);

    return 0;
}
