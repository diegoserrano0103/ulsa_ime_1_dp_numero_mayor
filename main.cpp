// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?
  int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;
    int resultado = 0;

    // Paso 1: mensaje de bienvenida
    // TODO
    std::cout << "Bienvenido, Ingrese 3 numeros para comparar" << std::endl;


    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?
while (true) {
    valor1 = leerEntero ("Ingresa un valor");
    if ( valor1 < 0) {
        std::cout << "Valor no valido" << std::endl;}
        else {
            break;}
        }



        while (true) {
             valor2 = leerEntero ("Ingresa un valor");
    if ( valor2 < 0) {
        std::cout << "Valor no valido" << std::endl;
    }else {
            break;}
        }

    while (true) {
    valor3 = leerEntero ("Ingresa un valor");
    if (valor3 < 0) {
    std::cout << "Valor no valido" << std::endl;
    }else{ 
    break;}
    }

   
if (valor1 == valor2 && valor2 == valor3) {
        resultado = valor1; // 1º Asignas
        std::cout << "Todos los valores son iguales (" << resultado << ")" << std::endl; // 2º Imprimes
    }

    if (valor1 > valor2 && valor1 > valor3) {
        resultado = valor1;
        std::cout << "El valor 1 es el mayor (" << resultado << ")" << std::endl;
    }

    if (valor2 > valor1 && valor2 > valor3) {
        resultado = valor2;
        std::cout << "El valor 2 es el mayor (" << resultado << ")" << std::endl;
    }

    if (valor3 > valor1 && valor3 > valor2) {
        resultado = valor3;
        std::cout << "El valor 3 es el mayor (" << resultado << ")" << std::endl;
    }

    if (valor1 == valor2 && valor1 > valor3) {
        resultado = valor1;
        std::cout << "Los valores 1 y 2 son los mayores (" << resultado << ")" << std::endl;
    }

    if (valor1 == valor3 && valor1 > valor2) {
        resultado = valor1;
        std::cout << "Los valores 1 y 3 son los mayores (" << resultado << ")" << std::endl;
    }

    if (valor2 == valor3 && valor2 > valor1) {
        resultado = valor2;
        std::cout << "Los valores 2 y 3 son los mayores (" << resultado << ")" << std::endl;
    }

 

    // ¿Qué significa return 0;?
    return 0;
}