#ifndef CUCKOO
#define CUCKOO

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include "Hash.h"

//Cuckoo
typedef struct {
    int tabela1[10000];
    int tabela2[10000];
} CuckooTable;

int inserirCuckooHashing(CuckooTable* ht, int P, int key,int cont);

void excluirCuckooHashing(CuckooTable* ht, int P, int key);

void procurarCuckooHashing(CuckooTable* ht, int P, int key);

void imprimirCuckooHashing(CuckooTable* ht, int P);



#endif