/*🧩 Ejercicio 1 — Números primos en un arreglo
Temas: Funciones, arreglos unidimensionales, pasaje por referencia
Enunciado:
Escribí un programa que permita ingresar 10 números enteros en un arreglo y utilice 
una función que identifique cuántos de esos números son primos. Mostrá cuántos hay 
y cuáles son.*/
#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int contarPrimos(int arr[], int size) {
    int contador = 0;
    printf("Números primos encontrados:\n");
    for (int i = 0; i < size; i++) {
        if (esPrimo(arr[i])) {
            printf("%d ", arr[i]);
            contador++;
        }
    }
    printf("\n");
    return contador;
}

int main() {
    int numeros[10];

    printf("Ingresá 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int cantidadPrimos = contarPrimos(numeros, 10);
    printf("Cantidad de números primos: %d\n", cantidadPrimos);

    return 0;
}