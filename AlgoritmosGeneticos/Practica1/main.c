/*
Codigo para generar una lista de numeros aleatorios y mostrar su histograma
Autor: José Emiliano Pérez Garduño
Materia: Genetic Algorithms
Grupo: 3CM8
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double * CrearLista();
double * PoblarLista(int n, double * L);
double * FuncionCuadrado(double * L);
int LongitudLista(double * L);
void MostrarLista(double * L);
void MostrarHistograma(double *L);
int NumeroMaximo(int l, double *L);

int main(int argc, char const *argv[])
{
    printf("\n\nPrograma para mostrar una lista de 10 a N numeros aleatorios junto a su histograma\n");
    double * Lista;
    Lista = CrearLista(Lista);
    Lista = FuncionCuadrado(Lista);
    MostrarHistograma(Lista);
    return 0;
}

int LongitudLista(double * L)
{
    int i = 0;
    while(L[i] != 0)
        i++;
    return i;
}

double * CrearLista(double *L)
{
    int n;
    printf("Introducir cuantos numeros a partir de 10 tendra la lista (10 + n)\n");
    scanf("%d",&n);
    printf("Se creara una lista de tamano: 10 + %d = %d\n", n, 10+n);
    L = calloc(sizeof(double) * (10 + n),0);
    L = PoblarLista(n,L);
    return L;
}

double * PoblarLista(int n, double * L)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < 10+n; i++)
        L[i] = rand() % 100 + 1;
    MostrarLista(L);
    return L;
}

void MostrarLista(double *L)
{
    printf("Lista de Numeros Aleatorios -> ");
    int i;
    int l = LongitudLista(L);
    printf("A[%d]={",l);
    for(i = 0; i < l; i++)
    {
        if (i == l-1)
            printf("%.0lf}\n",L[i]);
        else
            printf("%.0lf,",L[i]);
    }
}

double * FuncionCuadrado(double * L)                  //funcion para evaluar numeros enteros f(x) = x²
{
    int i;
    int l = LongitudLista(L);
    for (i = 0; i < l; i++)
    {
        L[i] = L[i] * L[i];
    }
    
    printf("\nLista de Numeros x² -> A²[%d]={",l);
    for(i = 0; i < l; i++)
    {
        if (i == l-1)
            printf("%.0lf}\n",L[i]);
        else
            printf("%.0lf,",L[i]);
    }
    return L;
}

void MostrarHistograma(double *L)
{
    printf("\nHistograma: \n\n");
    int i,j,ubicacion;
    int l = LongitudLista(L);
    ubicacion = NumeroMaximo(l,L);
    //Parte del eje Y
    printf("El numero maximo es: %0.lf\n",L[ubicacion]);
    
    printf("--------------------------------------------------\n");

        for (i = L[ubicacion]; i > 0; --i) {
        printf("%.3d|", i);
        for (j = 0; j < 10; ++j)
            (L[j] >= i) ? printf(" X ") : printf("   ");
        printf("\n");
    }
    printf("   ");


    for (i = 0; i < l; ++i) //Parte del eje X
        printf("%3d", i+1);
    printf("\n--------------------------------------------------\n");
}

int NumeroMaximo(int l, double *L)
{
    double max;
    max = L[0];
    int i;
    int ubicacion;
    for (i = 0; i < l; i++)
    {
        if(L[i] > max)
        {
            max = L[i];
            ubicacion = i;
        }
    }
    return ubicacion;
}