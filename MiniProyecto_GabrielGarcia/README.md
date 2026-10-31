# 🐾 Calculadora de edad de mascotas

## ¿De qué trata el proyecto?

Este proyecto consiste en un programa hecho en C++ que permite registrar perros y gatos para conocer un poco más sobre su edad y su esperanza de vida.

La idea es que el usuario pueda ingresar los datos de sus mascotas y el programa realice algunos cálculos, como convertir su edad a una edad humana aproximada. También permite guardar varios registros, buscar mascotas y generar un reporte general.

## ¿Qué información se puede registrar?

El programa permite registrar hasta 20 mascotas.

Los datos que se guardan son:

- Nombre de la mascota.
- Tipo de mascota (perro o gato).
- Edad actual.
- Peso en kg (en el caso de los perros).
- Condición de vida (en el caso de los gatos).

## Opciones del menú

El programa cuenta con 6 opciones principales:

1. **Registrar mascotas:** permite elegir cuántas mascotas se desean registrar y guardar sus datos.
2. **Mostrar mascotas registradas:** muestra la información de todas las mascotas guardadas.
3. **Buscar mascota por nombre:** permite buscar una mascota específica mediante su nombre.
4. **Mostrar reporte general:** muestra la cantidad de perros y gatos registrados, el total de mascotas y la edad promedio.
5. **Analizar edad y esperanza de vida:** realiza un análisis de cada mascota, mostrando su edad humana aproximada, su categoría y su esperanza de vida estimada.
6. **Salir:** finaliza el programa.

## Componente creativo

Una de las partes del proyecto es el análisis de edad y esperanza de vida.

En esta opción, el programa utiliza los datos registrados para calcular la edad humana aproximada de cada mascota. En los perros también toma en cuenta su peso para clasificarlos por tamaño, mientras que en los gatos considera si viven dentro de casa, tienen acceso al exterior o son callejeros.

Con esta información muestra una estimación de su esperanza de vida y algunas recomendaciones generales.

## ¿Qué se utilizó para desarrollar el programa?

Para realizar este proyecto se utilizaron algunos conceptos básicos de C++:

- Arreglos unidimensionales para almacenar los datos.
- Funciones para organizar las diferentes operaciones.
- Estructuras condicionales (`if`, `else`).
- Ciclos (`for`, `while` y `do while`).
- Estructura `switch` para controlar el menú.
- Búsqueda secuencial para encontrar mascotas por su nombre.
- Validaciones para evitar datos incorrectos y superar el límite de 20 registros.

## ¿Cómo ejecutar el programa?

1. Descargar o clonar este repositorio.
2. Abrir el archivo `main.cpp` en un editor de código.
3. Compilar el programa con un compilador de C++.
4. Ejecutarlo desde la terminal.

Por ejemplo, utilizando G++:

```bash
g++ main.cpp -o mascotas
```

Y después:

```bash
./mascotas
```

En Windows también se puede ejecutar con:

```bash
mascotas.exe
```

## Autor
Gabriel Jose Garcia