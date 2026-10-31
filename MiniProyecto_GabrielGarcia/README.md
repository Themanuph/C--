# Calculadora y sistema de registro de mascotas

## Descripción
Este proyecto es un programa desarrollado en C++ que permite registrar y analizar información de perros y gatos. El sistema almacena hasta 20 mascotas y ofrece diferentes opciones para consultar sus datos, generar reportes y calcular su edad equivalente en años humanos.

## Datos que maneja
Por cada mascota se registra:
- Nombre.
- Tipo de mascota: perro o gato.
- Edad actual.
- Si es perro: peso en kilogramos.
- Si es gato: condición de vida (interior, con acceso al exterior o callejero).

## Opciones del menú
1. **Registrar mascota:** permite guardar los datos de un perro o gato.
2. **Mostrar mascotas:** presenta todas las mascotas registradas.
3. **Buscar mascota:** permite encontrar un registro mediante el nombre.
4. **Reporte general:** muestra la cantidad de mascotas registradas, cuántos perros y gatos hay, y la edad promedio.
5. **Análisis de edad y longevidad:** calcula la edad equivalente en años humanos y muestra la categoría o condición y la esperanza de vida estimada de cada mascota.
6. **Salir:** finaliza el programa.

## Funcionamiento
El programa utiliza arreglos unidimensionales para almacenar los datos de hasta 20 mascotas. También utiliza funciones para organizar las operaciones, ciclos para recorrer los registros y búsquedas secuenciales para localizar mascotas por su nombre.

Incluye validaciones para evitar datos incorrectos, controlar las opciones del menú y comprobar que existan registros antes de mostrar información o generar reportes.

## Componente creativo
El programa realiza un análisis de edad y longevidad de las mascotas registradas. Para los perros, calcula la edad humana aproximada según su peso y tamaño; para los gatos, utiliza una fórmula de conversión y considera su condición de vida. Además, muestra una estimación de su esperanza de vida.

## Compilación y ejecución

Con un compilador de C++ como g++:

```bash
g++ main.cpp -o mascotas
```

En Windows:

```bash
mascotas.exe
```

En Linux:

```bash
./mascotas
```

## Autor
Gabriel Jose Garcia