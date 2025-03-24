#include <stdio.h>

int main() {
    int limite, i, j, primo;
    
    printf("ingrese un numero: ");
    scanf("%d", &limite);
    
    printf("Los numeros primos del 1 al %d:\n", limite);
    for (i = 2; i <= limite; i++) {
        primo = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", i);
        }
    }
  return 0;
}
