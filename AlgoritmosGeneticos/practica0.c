/*
Codigo para generar una lista de numeros aleatorios
Autor: José Emiliano Pérez Garduño
Materia: Genetic Algorithms
Grupo: 3CM8
*/

#include <stdio.h>
#include <stdlib.h>

int ConseguirLongitudLista(char * Lista);
char * PoblarLista(int longitud, char * Lista);
void MostrarLista(char * Lista);
char * AcomodarLista(char * Lista);
void ListaBinario(char * Lista);
void NumBinario(int num);


int main(int argc, char const *argv[])
{
    int l, n;
    char *L;

    printf("Programa para generar una lista de numeros aleatorios.\n\n");
    printf("Escribir cuantos numeros quiere que tenga la lista:\n");

    scanf("%d",&l);
    printf("Creando Lista de %d numeros.\n",l);

    L = calloc(sizeof(int) * (l+1),0);
    L = PoblarLista(l,L);
    MostrarLista(L);
    L = AcomodarLista(L);
    ListaBinario(L);
    return 0;
}

int ConseguirLongitudLista(char * Lista)
{
    int longitud = 0;
    while (Lista[longitud] != '\0')
    {
        longitud++;
    }
    return longitud;
}

char * PoblarLista(int longitud, char * Lista)
{
    int n, i;
    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i <= longitud; i++)
    {
        if(i == longitud)
        {
            Lista[i] = '\0';
        }
        else
        {
            n = rand() % 100 + 1;
            Lista[i] = n;
        }
    }
    return Lista;
}

void MostrarLista(char * Lista)
{
    int longitud = ConseguirLongitudLista(Lista);
    int i;
    printf("[");
    for (i = 0; i < longitud; i++)
    {
        if(i != longitud-1)
        {
            printf("%d,",Lista[i]);
        }
        else
        {
            printf("%d]\n",Lista[i]);
        }
    }
    
}

char * AcomodarLista(char * Lista)
{
    int i, j, aux;
    int longitud = ConseguirLongitudLista(Lista);
    printf("Acomodando Lista.\n");
    for(i = 0; i < longitud; i++)
    {
        for(j = i + 1; j < longitud; j++)
        {
            if(Lista[i] >= Lista[j])
            {
                aux = Lista[i];
                Lista[i] = Lista[j];
                Lista[j] = aux;
            }
        }
    }
    MostrarLista(Lista);
    return Lista;
}

void ListaBinario(char * Lista)
{
    int i, longitud;
    longitud = ConseguirLongitudLista(Lista);

    for (i = 0; i < longitud; i++)
    {
        printf("Lista[%d]=%d=",i,Lista[i]);
        NumBinario(Lista[i]);
    }
}

void NumBinario(int num)
{
    int i, j;
    for (i = 15; i >= 0; i--)
    {
        j = num >> i;
        if (j & 1)
            printf("1");
        else
            printf("0");
    }
 
  printf("\n");
}
