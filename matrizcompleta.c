#include <stdio.h>
#include <stdbool.h>

#define N 3

// Función para buscar un valor en la matriz
bool buscar(int m[N][N], int valor, int *fila, int *col) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (m[i][j] == valor) {
                *fila = i;
                *col = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int mat[N][N];
    int sumaFilas[N] = {0}, sumaCols[N] = {0};
    
    // 1) Lectura e impresión de pares e impares
    printf("Ingrese los elementos de la matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] % 2 == 0)
                printf("  → %d es PAR\n", mat[i][j]);
            else
                printf("  → %d es IMPAR\n", mat[i][j]);
            sumaFilas[i] += mat[i][j];
            sumaCols[j] += mat[i][j];
        }
    }
    
    // 2) Mostrar sumas de filas y columnas
    printf("\nSumas de filas:\n");
    for (int i = 0; i < N; i++)
        printf("Fila %d: %d\n", i, sumaFilas[i]);
    
    printf("\nSumas de columnas:\n");
    for (int j = 0; j < N; j++)
        printf("Columna %d: %d\n", j, sumaCols[j]);
    
    // 3) Búsqueda de un número
    int objetivo, f, c;
    printf("\n¿Qué número buscas en la matriz? ");
    scanf("%d", &objetivo);
    
    if (buscar(mat, objetivo, &f, &c))
        printf("→ %d encontrado en mat[%d][%d]\n", objetivo, f, c);
    else
        printf("→ %d NO se encontró en la matriz\n", objetivo);
    
    return 0;
}