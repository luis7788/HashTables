#ifndef OPENADDRESSING
#define OPENADDRESSING

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include "Hash.h"

//Linear proving
typedef struct {
    int validade;
    int key;
} LinearKey;

typedef struct {
    LinearKey tabela[100];
} LinearTable;

int inserirLinearProbing(LinearTable* ht, int P, int key);

void excluirLinearProbing(LinearTable* ht, int P, int key);

void procurarLinearProbing(LinearTable* ht, int P, int key);

void imprimirLinearProbing(LinearTable* ht, int P);


#endif