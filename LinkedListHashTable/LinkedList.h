#ifndef LINKEDLIST
#define LINKEDLIST

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include "Hash.h"

//lista ligada
typedef struct Nodo {
    int key;
    struct Nodo* prox;
} LinkedKey;

typedef struct {
    LinkedKey* tabela[100];
} LinkedTable;

void inserirLinkedList(LinkedTable* ht, int P, int key);

void excluirLinkedList(LinkedTable* ht, int P, int key);

void procurarLinkedList(LinkedTable* ht, int P, int key);

void imprimirLinkedList(LinkedTable* ht, int P);


#endif