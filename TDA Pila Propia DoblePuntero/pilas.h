#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED

/// prototipos y estructuras

/// estructura de la pila

///Crear: se crea la pila. (constructor)
typedef struct{
    int dato;
    struct stPila* siguiente;
}stPila;

stPila* crearPilita(int valor);

///Inicializar: se deja la pila vacía, lista para ser utilizada.
void inicPila(stPila** pila);

///Apilar: se añade un elemento a la pila.
void apilar(stPila** pila, int valor);

///Leer: agrega al tope de la pila un elemento ingresado desde el teclado por el usuario.
void leer(stPila** pila);

///Desapilar: se elimina el elemento superior de la pila.
int desapilar(stPila** pila);

///Tope: devuelve el elemento que está en la cima de la pila. No lo elimina.
int tope(stPila** pila);

///PilaVacía: devuelve cierto si la pila está vacía o falso en caso contrario.
int pilavacia(stPila** pila);

///Mostrar: muestra por pantalla el contenido de la pila.
void mostrar(stPila** pila);


#endif // PILAS_H_INCLUDED
