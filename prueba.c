/*dado un arreglo de estructuras que tiene los siguiente elementos, numero de producto, nombre del producto, cantidad de productos en stock, se pide:
A- cargar el arreglo de estructura.
B- ordenar el arreglo o número de producto.
C- ingresar un número de producto por teclado e indicar si esta en arreglo.
D- mostrar el contenido de arreglo de estructura.*/

#include <stdio.h>
#define MAX 3

struct Producto {
    int numero;
    char nombre[30];
    int stock;
};

void pedirproducto(struct Producto productos[MAX]) {
    for (int i = 0; i < MAX; i++) {
        printf("Ingrese el numero del producto: ");
        scanf("%d", &productos[i].numero);
        getchar(); // limpiar salto de línea pendiente

        printf("Ingrese el nombre del producto: ");
        scanf(" %[^\n]", productos[i].nombre);

        printf("Ingrese el stock del producto: ");
        scanf("%d", &productos[i].stock);
        getchar(); // limpiar salto de línea pendiente

        printf("\n");
    }
}

int main() {
    struct Producto productos[MAX];

    printf("Vamos a cargar los productos.\n");
    pedirproducto(productos);

    printf("\nProductos cargados:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Producto %d: Numero=%d, Nombre=%s, Stock=%d\n",
               i + 1, productos[i].numero, productos[i].nombre, productos[i].stock);
    }

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
