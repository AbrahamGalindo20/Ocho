#!/usr/bin/python
import random
import unicodedata
import re
#Codigo realizado por Jose Emiliano para la materia de Algoritmos Geneticos 3CM8

def EsEntero(valor):
    patron = re.compile(r"^[0-9][0-9]*\.?[0-9]*")
    flag = re.search(patron, valor)
    if flag:
        return True
    else:
        return False

def VerificarInputTamano(i):
    flag = False
    while not flag:
        print("Introducir el tamano de la lista "+str(i+1))
        longitud = raw_input()
        flag = EsEntero(longitud)
        if (flag == False):
            print("Introducir un numero entero")
        else:
            longitud = int(longitud)
            if(longitud > 9 and longitud < 301):
                flag = True
                return longitud
            else:
                print("Introducir un valor entre 10 y 300")
                flag = False

def VerificarInputRango(i):
    flag = False
    while not flag:
        print("Introducir el rango de la lista " + str(i + 1)+ "\n (0 -> n) (maximo 300) en entero")
        rango = raw_input()
        flag = EsEntero(rango)
        if (flag == False):
            print("Introducir un numero entero")
            flag = False
        else:
            flag = True
            rango = int(rango)
    return rango

def CrearLista(i):
    longitud = VerificarInputTamano(i)
    rango = VerificarInputRango(i)
    Lista = []
    for x in range (0 , longitud):
        a = random.randint(1,rango)
        #print("Anexando el valor " + str(a) + " a la lista en la posicion " + str(x+1))
        Lista.append(a)
    return Lista

def PoblarLista(L):
    aux = []
    for x in range (0,4):
        aux = CrearLista(x)
        print("La lista " + str(x+1) + " queda como: " + str(aux))
        L.append(aux)
    return L

def ImprimirLista(L):
    for x in range (0,4):
        print("Lista[{}] = [".format(x+1)),
        for y in range (0,len(L[x])):
            if (y == len(L[x]) - 1):
                print(L[x][y]),
            else:
                print(L[x][y]),
                print(","),
        print("]\n")
        
def ImprimirListaBinaria(L):
    for x in range (0,4):
        print("Lista[{}] = [".format(x+1)),
        for y in range (0, len(L[x])):
            if (y == len(L[x]) - 1) :
                print(L[x][y]),
            else:
                print(L[x][y]),
                print(","),
        print("]\n")

def FuncionBinario(L):
    aux = L
    for y in range (0 , 4):
        for x in range (0 , len(L[y])):
            aux[y][x] = bin(L[y][x])
    return aux

def main():
    print("Practica 2")
    Arreglos = []
    Arreglos = PoblarLista(Arreglos)
    ArreglosBinario = []
    print("Todas las listas quedan como: ")
    ImprimirLista(Arreglos)
    print("Todas las listas en binario quedan como:")
    ArreglosBinario = FuncionBinario(Arreglos)
    ImprimirListaBinaria(ArreglosBinario)
    
if __name__ == '__main__':
    main()
