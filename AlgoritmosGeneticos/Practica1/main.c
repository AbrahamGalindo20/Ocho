/*
Codigo para generar una lista de numeros aleatorios y mostrar su histograma
Autor: José Emiliano Pérez Garduño
Materia: Genetic Algorithms
Grupo: 3CM8
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * CrearLista();
int * PoblarLista(int * L);
void MostrarLista(int * L);
void MostrarHistograma(int *L);

int main(int argc, char const *argv[])
{
    printf("Programa para mostrar una lista de 10 numeros aleatorios junto a su histograma\n\n");
    srand(time(NULL));
    int * Lista;
    Lista = CrearLista();
    Lista = PoblarLista(Lista);
    printf("Lista de Numeros Aleatorios -> ");
    MostrarLista(Lista);
    printf("\nHistograma: \n\n");
    MostrarHistograma(Lista);
    return 0;
}

int * CrearLista()
{
    int *L;
    L = malloc(sizeof(int) * 10);
    return L;
}

int * PoblarLista(int * L)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++)
        L[i] = rand() % 100;
    return L;
}

void MostrarLista(int *L)
{
    int i;
    printf("A[10]={");
    for(i = 0; i < 10; i++)
    {
        if (i == 9)
            printf("%d}\n",L[i]);
        else
            printf("%d,",L[i]);
    }
}

void MostrarHistograma(int *L)
{
    int i,j;
    for (i = 0; i < 10; i++)
    {
        if(i == 9)
        {
            printf("[%d]",i);
            for(j = 0; j < L[i]; j++)
                printf("+");
            
        }
        else
        {
            printf("[%d]",i);
            for(j = 0; j < L[i]; j++)
                printf("+");
        }
        printf("\n");
    }
    printf("\n");
    for ( i = 0; i < 200; i++)
    {
        if (i == 199)
        {
            printf("-\n");
        }
        else
        {
            printf("-");
        }        
    }  
}
