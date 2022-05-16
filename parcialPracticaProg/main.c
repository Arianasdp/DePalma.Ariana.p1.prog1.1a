#include <stdio.h>
#include <stdlib.h>

#define TAM 3
#define TAMC 3
#define ASC 1
#define DESC 0

typedef struct
{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
    int isEmpty;
}eVacuna;

float aplicarAumento(float precio);

int reemplazarCaracteres(char cadena[],int tamC, char a, char b);

int ordenamientoDeArray(eVacuna tipos[], int tam, int criterio);

int main()
{
    eVacuna tipos[TAM] =
    {{0, "", 'c', 0, 0},
    {0, "", 'a', 0, 0},
    {0, "", 'b', 0, 0}};

    ordenamientoDeArray(tipos, TAM, DESC);

    for(int i = 0; i < TAM; i++)
        {
            if(!tipos[i].isEmpty)
            {
                printf("%c", tipos[i].tipo);
            }
        }

    /*float precio;
    float aumento;

    precio = 100;

    aumento = aplicarAumento(precio);

    printf("%.2f", aumento);*/

    return 0;
}

/*Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto
y devuelva el valor del producto con un aumento del 5%.
Realizar la llamada desde el main.*/

float aplicarAumento(float precio)
{
    float precioConAumento;
    if(precio > 0)
    {
        precioConAumento = precio * 1.05;
    }
    return precioConAumento;
}

/*Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer par�metro,
un car�cter como segundo y otro car�cter  como tercero,  la misma deber� reemplazar cada ocurrencia del segundo par�metro
por el tercero y devolver la cantidad de veces que se reemplazo ese car�cter  en la cadena */

int reemplazarCaracteres(char cadena[], int tamC, char a, char b)
{
    int cant = 0;
    /*if(cadena != NULL && tamC > 0 && a && b)
    {
        for()
        {
            cant++;
        }
    }*/
    return cant;
}

/* Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha estructura por tipo.
Ante igualdad de tipo deber� ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.*/

int ordenamientoDeArray(eVacuna tipos[], int tam, int criterio)
{
    char aux;
    int todoOk = 0;
    if (tipos != NULL && tam > 0 && criterio >= 0 && criterio <= 1)
    {
        for(int i = 0; i < tam - 1; i++)
        {
            for(int j = i + 1; j < tam; j++)
            {
               if(((tipos[i].tipo < tipos[j].tipo) && criterio == 0)
                  || ((tipos[i].tipo > tipos[j].tipo) && criterio == 1))
                  {
                      aux = tipos[i].tipo;
                      tipos[i].tipo = tipos[j].tipo;
                      tipos[j].tipo = aux;
                  }

            }
        }
        todoOk = 1;
    }
    return todoOk;

}


