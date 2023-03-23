#include <stdio.h>

void cuadrado(int *num);
void variable(int num);
void invertir(int a,int b);

int main()
{
    int num, *punt,num1,num2;
    punt = &num;
    printf("Ingrese un numero:");
    scanf("%d", &num);
    cuadrado(punt);
    variable(num);
    printf("Ingrese dos numeros:");
    scanf("%d %d",&num1,&num2);
    invertir(num1,num2);
}

void cuadrado(int *num)
{
    *num = *num * *num;
    printf("El cuadrado es: %d\n", *num);
}

void variable(int num)
{
    printf("Direccion de la variable: %d\n", &num);
    printf("La variable vale: %d\n", num);
}

void invertir(int a,int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("El primer numero ahora es: %d\n", a);
    printf("El segundo numero: %d\n", b);
}