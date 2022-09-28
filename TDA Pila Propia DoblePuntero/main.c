#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include ".\pilas.h"

int main()
{
    stPila* pilaMain;
    inicPila(&pilaMain);
    printf("======\n");
    printf(" PILA \n");
    printf("======\n");
    apilar(&pilaMain,3);
    apilar(&pilaMain,5);
    mostrar(&pilaMain);
    printf("\n");
    printf("===============\n");
    printf(" PILA CON LEER \n");
    printf("===============\n");
    leer(&pilaMain);
    mostrar(&pilaMain);
    printf("\n");
    printf("=================\n");
    printf(" PILA DESAPILADA \n");
    printf("=================\n");
    desapilar(&pilaMain);
    mostrar(&pilaMain);
    printf("\n");
    printf("==============\n");
    printf(" TOPE DE PILA \n");
    printf("==============\n");
    printf(" EL TOPE DE LA PILA ES: %d\n",tope(&pilaMain));
    printf("\n");
    printf("============\n");
    printf(" PILA VACIA \n");
    printf("============\n");
    if(pilavacia(&pilaMain)){
        printf(" LA PILA ESTA VACIA\n");
    }else{
        printf(" LA PILA NO ESTA VACIA\n");
    }
    return 0;
}

