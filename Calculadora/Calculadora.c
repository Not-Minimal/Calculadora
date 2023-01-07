#include <stdio.h>
#include <stdlib.h>

// Prototipo de funciones
int sumar(int numero1, int numero2);
int restar(int numero1, int numero2);
int multiplicar(int numero1, int numero2);
int dividir(int numero1, int numero2);
int cuadrado(int numero1);
int porcentaje(int numero1);
int raiz_Cuadrada(int numero1);
void menu_Operaciones();

// Funcion para suma de dos numeros
int sumar(int numero1, int numero2){

}

// Funcion para restar dos numeros
int restar(int numero1, int numero2){}

// Funcion para multiplicar de dos numeros
int multiplicar(int numero1, int numero2){}

// Funcion para dividir de dos numeros
int dividir(int numero1, int numero2){}

// Funcion para calcular el porcentaje de un numero
int porcentaje(int numero1){}

// Funcion para Elevar al cuadrado un numero
int cuadrado(int numero1){}

// Funcion para obtener raiz cuadrada de un numero
int raiz_Cuadrada(int numero1){}

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
        printf("Ingrese opcion: ");
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
        case 8:
        {
            exit(0);
        }
        }

    } while (opcion != 8);
}

int main()
{
    menu_Operaciones();

    return 0;
}
