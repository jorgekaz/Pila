#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila pilaUno;
    inicPila(&pilaUno);
    apilar(&pilaUno,2);
    apilar(&pilaUno,2);
    apilar(&pilaUno,2);
    apilar(&pilaUno,2);
    apilar(&pilaUno,2);
    apilar(&pilaUno,2);
    apilar(&pilaUno,2);
    mostrarPila(&pilaUno);


    return 0;
}
