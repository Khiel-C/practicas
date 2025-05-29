/*Matriz 3x3*/

#include <stdio.h>
#define TAM 3

void sumarFilas(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        int sumaFila = 0;
        for (int j = 0; j < TAM; j++) {
            sumaFila += matriz[i][j];
        }
        printf("Suma de la fila %d: %d\n", i + 1, sumaFila);
    }
}

void sumarColumnas(int matriz[TAM][TAM]) {
    for (int j = 0; j < TAM; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < TAM; i++) {
            sumaColumna += matriz[i][j];
        }
        printf("Suma de la columna %d: %d\n", j + 1, sumaColumna);
    }
}

int main() {
    int matriz[TAM][TAM];

    printf("Ingresá los números de la matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n--- Suma de cada fila ---\n");
    sumarFilas(matriz);
    printf("\n--- Suma de cada columna ---\n");
    sumarColumnas(matriz);
    return 0;
}