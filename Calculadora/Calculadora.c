#include <stdio.h>

// Prototipo de funciones
int sumar();
int restar();
int multiplicar();
int dividir();
int cuadrado();
int porcentaje();
int raiz_Cuadrada();
void menu_Operaciones();

// Funcion para suma de dos numeros
int sumar();

// Funcion para restar dos numeros
int restar();

// Funcion para multiplicar de dos numeros
int multiplicar();

// Funcion para dividir de dos numeros
int dividir();

// Funcion para calcular el porcentaje de un numero
int porcentaje();

// Funcion para Elevar al cuadrado un numero
int cuadrado();

// Funcion para obtener raiz cuadrada de un numero
int raiz_Cuadrada();

// Funcion para  menu de opciones
void menu_Operaciones()
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
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            sumar();
        }
        break;
        case 2:
        {
            restar();
        }
        break;
        case 3:
        {
            multiplicar();
        }
        break;
        case 4:
        {
            dividir();
        }
        break;
        case 5:
        {
            porcentaje();
        }
        break;
        case 6:
        {
            cuadrado();
        }
        break;
        case 7:
        {
            raiz_Cuadrada();
        }
        break;

        default:
        {
            printf("Ingrese una opcion valida:");
        }
        break;
        }

    } while (opcion != 8);
}

int main(int argc, char const *argv[])
{
    menu_Operaciones();

    return 0;
}
