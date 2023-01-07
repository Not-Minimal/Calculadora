#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototipo de funciones
int sumar(int valor1, int valor2);
int restar(int valor1, int valor2);
int multiplicar(int valor1, int valor2);
int dividir(int valor1, int valor2);
float porcentaje(int valor1, float porcentaje);
int cuadrado(int valor1);
double raiz_Cuadrada(int valor1);
int menu_Operaciones();

// Funcion para suma de dos numeros
int sumar(int valor1, int valor2)
{
    return (valor1 + valor2);
}

// Funcion para restar dos numeros
int restar(int valor1, int valor2)
{
    return (valor1 - valor2);
}

// Funcion para multiplicar de dos numeros
int multiplicar(int valor1, int valor2)
{
    return (valor1 * valor2);
}

// Funcion para dividir de dos numeros
int dividir(int valor1, int valor2)
{
    return (valor1 / valor2);
}

// Funcion para calcular el porcentaje de un numero
float porcentaje(int valor1, float porcentaje)
{
    return (valor1 + porcentaje);
}

// Funcion para Elevar al cuadrado un numero
int cuadrado(int valor1)
{
    return (valor1 * valor1);
}

// Funcion para obtener raiz cuadrada de un numero
double raiz_Cuadrada(int valor1)
{
    return sqrt(valor1);
}

// Funcion para  menu de opciones
int menu_Operaciones()
{
    int opcion;
    do
    {
        printf("Menu de Operaciones: \n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Porcentaje\n");
        printf("6. Cuadrado\n");
        printf("7. Raiz Cuadrada\n");
        printf("8. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            return 1;
        }
        break;
        case 2:
        {
            return 2;
        }
        break;
        case 3:
        {
            return 3;
        }
        break;
        case 4:
        {
            return 4;
        }
        break;
        case 5:
        {
            return 5;
        }
        break;
        case 6:
        {
            return 6;
        }
        break;
        case 7:
        {
            return 7;
        }
        break;
        case 8:
        {
            return 8;
        }
        }

    } while (opcion != 8);
}

int main()
{
    int opcion, valor1, valor2, resultado;
    float valorPorcentaje;
    do
    {
        opcion = menu_Operaciones();

        switch (opcion)
        {
        case 1:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            printf("Ingrese numero 2: ");
            scanf("%d", &valor2);
            resultado = sumar(valor1, valor2);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        case 2:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            printf("Ingrese numero 2: ");
            scanf("%d", &valor2);
            resultado = restar(valor1, valor2);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        case 3:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            printf("Ingrese numero 2: ");
            scanf("%d", &valor2);
            resultado = multiplicar(valor1, valor2);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        case 4:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            printf("Ingrese numero 2: ");
            scanf("%d", &valor2);
            resultado = dividir(valor1, valor2);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        case 5:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            printf("Ingrese porcentaje: ");
            scanf("%f", &valorPorcentaje);
            valor2 = (valor1 * (valorPorcentaje / 100));
            resultado = porcentaje(valor1, valor2);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        case 6:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            resultado = cuadrado(valor1);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        case 7:
        {
            printf("Ingrese numero 1: ");
            scanf("%d", &valor1);
            resultado = raiz_Cuadrada(valor1);
            printf("%d", resultado);
            printf("\n");
        }
        break;
        }
    } while (opcion != 8);

    return 0;
}
