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

void LimpiarEntrada(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main(){
    double pesoKg= 0;
    int opcion = 0;
    const int edadGatunaLimite = 38;
    const int edadPerrunaLimite = 29;
    int edadPerruna = 0;
    int edadGatuna = 0;

do
{
    cout 
    << "                                    \n"
    << "\n========= MENU PRINCIPAL =========\n"
    <<      "1. Calcular edad perruna. \n"
    <<      " 2.  Calcular edad gatuna.\n"
    <<      "          3. Salir.       \n";

    if (!(cin >> opcion)) {
            cout << "Opcion invalida. Ingrese un numero del 1 al 3.\n";
            LimpiarEntrada();
            continue;
        }
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (opcion == 1)
    {  
        cout
            << "=========================== \n"
            << "Calculadora de edad perruna \n"
            << "--------------------------- \n"
            << "Edad Actual del perro \n";
            while (!(cin >> edadPerruna) || edadPerruna <= 0 || edadPerruna > edadPerrunaLimite )
            {   cout
                << "Te pashaste te pashaste \n"
                << "------------------------------------------------------------DATASO------------------------------------------------------------ \n"
                << "Sabias que el perro mas longevo con un record ampliamente reconocido es Bluey, que vivio 29 a y 5 meses.           \n"
                << "------------------------------------------------------------------------------------------------------------------------------ \n"
                << "Elije una edad creible porfa: ";
                LimpiarEntrada();
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout
            << "---------------------------------- \n"
            << " Introduce su peso en kg (aprox): \n"
            << "---------------------------------- \n";
            while (!(cin >> pesoKg) || pesoKg <= 0)
            {
            cout
                << "El peso debe ser mayor a 0 y un valor positivo \n"
                << "---------------------------------------------- \n"
                << "Elija de nuevo el peso: \n"
                << "---------------------------------------------- \n";
                LimpiarEntrada();
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string tamanoPerro [4];
        if (pesoKg <= 10.00 )
        {
            tamanoPerro[0] = "perro pequeno o miniatura";
            cout << "------------Tamano-------------\n";
            cout << tamanoPerro[0];
            cout << "\n-------Esperanza de vida-------\n";
            cout << "Puede que viva de 12 a 17 anios";
        }
        else if (pesoKg <= 25.00)
        {
            tamanoPerro[1] = "Perro mediano";
            cout << "------------Tamano-------------\n";
            cout << tamanoPerro[1];
            cout << "\n-------Esperanza de vida-------\n";
            cout << "Puede que viva 10 a 15 anios";
        }
        else if (pesoKg <= 45.00)
        {
            tamanoPerro[2] = "Perro grande";
            cout << "------------Tamano-------------\n";
            cout << tamanoPerro[2];
            cout << "\n-------Esperanza de vida-------\n";
            cout << "Puede que viva de 8 a 13 anios";
        }
        else if (pesoKg > 45.00)
        {
            tamanoPerro[3] = "Perro gigante";
            cout << "------------Tamano-------------\n";
            cout << tamanoPerro[3];
            cout << "\n-------Esperanza de vida-------\n";
            cout << "Viven entre 6 y 11 anios";
        }

        int edadHumanaPerro = 0;

        if (edadPerruna == 1)
        {
            edadHumanaPerro = 15;
        }
        else if (edadPerruna == 2)
        {
            edadHumanaPerro = 24;
        }
        else {
            int aniosAdicionales = edadPerruna - 2;

            if (pesoKg <= 10)
            {
                edadHumanaPerro = 24 + aniosAdicionales * 4;
            }
            else if (pesoKg <= 25)
            {
                edadHumanaPerro = 24 + aniosAdicionales * 5;
            }
            else if (pesoKg <= 45)
            {
                edadHumanaPerro = 24 + aniosAdicionales * 6;
            }
            else
            {
                edadHumanaPerro = 24 + aniosAdicionales * 7;
            }
        }
        cout
                << "\n------- Edad equivalente humana -------\n"
                << "Tu perro tiene aproximadamente "
                << edadHumanaPerro << " anios humanos.\n";
    }
    if (opcion == 2)
    {
        cout 
            << "=========================== \n"
            << "Calculadora de edad gatuna \n"
            << "--------------------------- \n"
            << "Edad Actual del gato: \n";

            while (!(cin >> edadGatuna) || edadGatuna <= 0 || edadGatuna > edadGatunaLimite) 
            {
                cout 
                    << "Te pashaste te pashaste   \n"
                    <<"------------------------------------------------DATASO------------------------------------------------\n"
                    << "Creme Puff vivio 38 anios y 3 dias, asi que la edad supera el record conocido de longevidad felina.\n"
                    <<"-----------------------------------------------------------------------------------------------------\n"
                    <<"Introduce de nuevo la edad: ";
                    LimpiarEntrada();
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            int tipoGato = 0;
            cout
                << "\nTipo de gato:\n"
                << "1. Gato de interior\n"
                << "2. Gato con acceso al exterior\n"
                << "3. Gato callejero\n"
                << "Elija una opcion: ";
            
            while (!(cin >> tipoGato) || tipoGato <= 0  || tipoGato > 3)
            {
                cout
                    << "--------------------------------------------\n"
                    << "porfavor, vuelve a elejir una opcion valida: ";
                    LimpiarEntrada();
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (tipoGato == 1)
            {
                cout
                    << "---------------------------------- \n"
                    << "viven entre 12 y 18 anios (o mas)";
            }
            else if (tipoGato == 2)
            {
                cout
                    << "------------------------------------------------------------------------------------ \n"
                    << " Su expectativa de vida baja a 5 a 12 anios debido a riesgos como atropellos";
            }
            else if (tipoGato == 3)
            {

                cout 
                    << "-------------------------------------------------------------------------------------------------------- \n"
                    << " Su promedio de vida es de 2 a 5 anios por la falta de alimento constante y atencion medica.";
            }
            
            int edadHumanaGato = 0;

            if (edadGatuna == 1)
            {
                edadHumanaGato = 15;
            }
            else if (edadGatuna == 2)
            {
                edadHumanaGato = 24;
            }
            else {

                int aniosAdicionalesGato = edadGatuna - 2;

                    edadHumanaGato = 24 + aniosAdicionalesGato * 4;
                }
            cout
            << "\n------------ Edad equivalente humana ------------\n"
            << "Tu Gato tiene aproximadamente "
            << edadHumanaGato << " anios humanos.\n";
    }
    
} while (opcion != 3);

return 0;
}

