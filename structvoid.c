#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[30];
    int edad;
} Persona;

void saludar(Persona *p) {
    printf("Hola %s, tienes %d años\n", p->nombre, p->edad);
}

int maxEdad(Persona arr[], int n) {
    int m = arr[0].edad;
    for(int i = 1; i < n; i++)
        if (arr[i].edad > m) m = arr[i].edad;
    return m;
}

int main() {
    Persona grupo[3] = {
        {"Ana", 22},
        {"Luis", 19},
        {"María", 25}
    };

    for(int i = 0; i < 3; i++)
        saludar(&grupo[i]);

    printf("La mayor edad es %d\n", maxEdad(grupo, 3));
    return 0;
}