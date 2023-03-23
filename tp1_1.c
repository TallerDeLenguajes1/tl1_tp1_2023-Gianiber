#include <stdio.h>

int main()
{
    int prueba, *punt;
    prueba = 4;
    punt = &prueba;
    printf("Contenido del puntero: %d\n", *punt);
    printf("Almacenada del puntero: %d \n", punt);
    printf("Direccion de la variable: %d\n", &prueba);
    printf("Direccion del puntero: %d\n", &punt);
    printf("Tamaño de la memoria: %d\n", sizeof(prueba));
    printf("Contenido del puntero: %d\n", *punt);
    printf("Almacenada del puntero: %d \n", punt);
    printf("Direccion de la variable: %d\n", &prueba);
    printf("Direccion del puntero: %d\n", &punt);
}