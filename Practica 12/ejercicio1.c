#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "ejercicio1.h"

void insertar(INFO info, LIST *l){
    if (l!=NULL){
        if (l->head == NULL) {
        l->head = crear_nodo();
        l->head->info=info;
        return;
        }
        NODE *nuevo = crear_nodo();
        nuevo->info = info;
        nuevo->next = l->head;
        l->head ->prev = nuevo;
        l->head = nuevo;
    }

}

LIST *crear_lista(){
    LIST *l = (LIST*)malloc(sizeof(LIST));
    l->head= NULL;
    l->tail = NULL;
    return l;
}

void eliminar(LIST *l){
    if (l->head= NULL){
        borrar_nodos(l->head);
    }
    free(l);
}

NODE * crear_nodo(){
    NODE *n = (NODE*)malloc(sizeof(NODE));
    n->next= NULL;
    n->prev= NULL;
    strcpy(n->info.nombre,"");
    strcpy(n->info.apellido,"");
    return n;
}   //info no es apuntadorpor eso  .

void borrar_nodos(NODE *n){
    if(n->next !=NULL){         //caso recursivo
        borrar_nodos(n->next);   //si pusieramos un return se saldira de la funion y solo eliminaria un nodo
    }
    n->prev = NULL;             //caso base
    free(n);                 //El caso base nos sirve para darle fin a la llamada recursiva
}

void imprimir(LIST *l){
    for (NODE *i = l->head; i!= NULL; i = i->next){
        printf("%s, %s\n", i->info.nombre, i->info.apellido);
    }
}