/*Enunciado:
 Implementá un programa que permita guardar hasta 5 contactos en una agenda. Cada contacto debe tener nombre, teléfono y email. Permití insertar los datos y luego mostrar todos los contactos guardados 
 en una tabla.*/
 
 #include <stdio.h>
 #define MAX 5
 struct contactos
 {
    char nombre[30];
    int telefono;
    char mail[40];
 };
 
 int main()
 {
    struct contactos c1[MAX];
    for (int i = 0; i < MAX; i++)
    {
    printf ("Ingrese sus datos a guardar.\n", i + 1);
    printf ("Su nombre: \n");
    scanf("%s", c1[i].nombre);
    printf ("Su teléfono: \n");
    scanf("%d", &c1[i].telefono);
    printf ("Su mail: \n");
    scanf("%s", c1[i].mail);
    }
    printf("-----CONTACTOS GUARDADOS-----\n");
    printf("%-20s %-15s %-30s\n", "nombre", "telefóno", "mail");
   for (int i = 0; i < MAX; i++){ 
     printf("%-20s %-15d %-30s\n", c1[i].nombre, c1[i].telefono, c1[i].mail);
    }
    return 0;
 }
 