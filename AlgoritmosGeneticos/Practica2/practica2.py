#!/usr/bin/python
import random
import unicodedata
import re
#Codigo realizado por Jose Emiliano para la materia de Algoritmos Geneticos 3CM8

def GenerarBitAleatorio():
    x = random.random()
    print(x)
    if x > 0.5:
        print("El valor es mayor a .5, asi que es 1")
        return 1
    else:
        print("El valor es menor a .5, asi que es 0")
        return 0

def GenerarNumeroAleatorio(rango):
    num = []
    for x in range(0,rango):
        print("de {} a rango {}".format(x,rango))
        num.append(GenerarBitAleatorio())
    return num

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
    #longitud = VerificarInputTamano(i)
    #rango = VerificarInputRango(i)
    longitud = 6
    rango = 6
    Lista = []
    for x in range (0 , longitud):
        a = GenerarNumeroAleatorio(rango)
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
            if (y == len(L[x])-1):
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
            #aux[y][x] = bin(L[y][x])[2:].zfill(8)
            aux[y][x] = bin(L[y][x])[2:]
    return aux

def FuncionGray(L):
    aux = L
    for y in range(0,4):
        for x in range(0,len(L[y])):
            aux[y][x] = int(L[y][x], 2)
            aux[y][x] ^= (aux[y][x] >> 1)
            aux[y][x] = bin(aux[y][x])[2:]
            #aux[y][x] = bin(aux[y][x])[2:].zfill(8)
    return aux
        

def main():
    print("Practica 2")
    Arreglos = []
    Arreglos = PoblarLista(Arreglos)
    ArreglosBinario = []
    ArreglosGray = []
    print("Todas las listas quedan como: ")
    ImprimirLista(Arreglos)
    print("Todas las listas en binario quedan como:")
    ArreglosBinario = FuncionBinario(Arreglos)
    ImprimirListaBinaria(ArreglosBinario)
    print("Todas las listas en codigo gray quedan como:")
    ArreglosGray = FuncionGray(Arreglos)
    ImprimirListaBinaria(ArreglosGray)
    
if __name__ == '__main__':
    main()
