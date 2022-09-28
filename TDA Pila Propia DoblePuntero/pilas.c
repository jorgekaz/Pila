#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include ".\pilas.h"

/// van funciones
///Inicializar: se deja la pila vacía, lista para ser utilizada.
void inicPila(stPila** pila){
    *pila = NULL;
}

///Crear: se crea la pila. (constructor)
stPila* crearPilita(int dato){
    stPila* aux = (stPila*)malloc(sizeof(stPila));
    aux->dato=dato;
    aux->siguiente=NULL;
    return aux;
}

///Apilar: se añade un elemento a la pila.
void apilar(stPila** pila, int valor){
    stPila* nuevoNodo = crearPilita(valor);
    if(*pila == NULL){
        *pila = nuevoNodo;
    }else{
        nuevoNodo -> siguiente = *pila;
        *pila = nuevoNodo;
    }
}

///Leer: agrega al tope de la pila un elemento ingresado desde el teclado por el usuario.
void leer(stPila** pila){
    int valor;
    printf("INGRESE UN VALOR: ");
    fflush(stdin);
    scanf("%d",&valor);
    apilar(&(*pila), valor);
}
///Desapilar: se elimina el elemento superior de la pila.
int desapilar(stPila** pila){
    int tope = (*pila)->dato;
    stPila* eliminar = *pila;
    if((*pila)->siguiente == NULL){
        inicPila(&(*pila));
    }else{
        *pila = (*pila)->siguiente;
        free(eliminar);
    }
    return tope;
}

///Tope: devuelve el elemento que está en la cima de la pila. No lo elimina.
int tope(stPila** pila){
    int tope=0;
    if(*pila!=NULL){
        tope=(*pila)->dato;
    }
    return tope;
}

///PilaVacía: devuelve cierto si la pila está vacía o falso en caso contrario.
int pilavacia(stPila** pila){
    int vacia=1;
    if(*pila!=NULL){
        vacia=0;
    }
    return vacia;
}

///Mostrar: muestra por pantalla el contenido de la pila.
void mostrar(stPila** pila){
    if(*pila!=NULL){
        printf("%d\n",(*pila)->dato);
        mostrar(&(*pila)->siguiente);
    }
}
