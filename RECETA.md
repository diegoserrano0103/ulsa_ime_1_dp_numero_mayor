# Receta: El mayor de tres números

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

``` text
1. MOSTRAR "Bienvenido a mi programa"
ALGORITMO MayorDeTresNumeros

    // Declaración e inicialización de variables
    ENTERO valor1 <- 0
    ENTERO valor2 <- 0
    ENTERO valor3 <- 0
    ENTERO resultado <- 0

    // Paso 1: Mensaje de bienvenida
    ESCRIBIR "Bienvenido, Ingrese 3 numeros para comparar"

    // Paso 2: Lectura y validación de valor1
    REPETIR
        ESCRIBIR "Ingresa el primer valor:"
        LEER valor1
        SI valor1 < 0 ENTONCES
            ESCRIBIR "Valor no valido"
        FIN_SI
    HASTA QUE valor1 >= 0

    // Paso 3: Lectura y validación de valor2
    REPETIR
        ESCRIBIR "Ingresa el segundo valor:"
        LEER valor2
        SI valor2 < 0 ENTONCES
            ESCRIBIR "Valor no valido"
        FIN_SI
    HASTA QUE valor2 >= 0

    // Paso 4: Lectura y validación de valor3
    REPETIR
        ESCRIBIR "Ingresa el tercer valor:"
        LEER valor3
        SI valor3 < 0 ENTONCES
            ESCRIBIR "Valor no valido"
        FIN_SI
    HASTA QUE valor3 >= 0

    // Paso 5: Lógica de comparación y asignación del resultado

    // Caso 5.1: Los tres son iguales
    SI valor1 == valor2 Y valor2 == valor3 ENTONCES
        resultado <- valor1
        ESCRIBIR "Todos los valores son iguales (", resultado, ")"
    FIN_SI

    // Caso 5.2: Un solo mayor
    SI valor1 > valor2 Y valor1 > valor3 ENTONCES
        resultado <- valor1
        ESCRIBIR "El valor 1 es el mayor (", resultado, ")"
    FIN_SI

    SI valor2 > valor1 Y valor2 > valor3 ENTONCES
        resultado <- valor2
        ESCRIBIR "El valor 2 es el mayor (", resultado, ")"
    FIN_SI

    SI valor3 > valor1 Y valor3 > valor2 ENTONCES
        resultado <- valor3
        ESCRIBIR "El valor 3 es el mayor (", resultado, ")"
    FIN_SI

    // Caso 5.3: Empates de dos mayores
    SI valor1 == valor2 Y valor1 > valor3 ENTONCES
        resultado <- valor1
        ESCRIBIR "Los valores 1 y 2 son los mayores (", resultado, ")"
    FIN_SI

    SI valor1 == valor3 Y valor1 > valor2 ENTONCES
        resultado <- valor1
        ESCRIBIR "Los valores 1 y 3 son los mayores (", resultado, ")"
    FIN_SI

    SI valor2 == valor3 Y valor2 > valor1 ENTONCES
        resultado <- valor2
        ESCRIBIR "Los valores 2 y 3 son los mayores (", resultado, ")"
    FIN_SI

FIN_ALGORITMO
```
