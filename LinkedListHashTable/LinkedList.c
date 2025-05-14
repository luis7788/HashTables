#include "LinkedList.h"

//LINK
void inserirLinkedList(LinkedTable* ht, int P, int key) {
    int index = hash(key, P);
    LinkedKey* atual=ht->tabela[index];

    while (atual!=NULL){
        if (atual->key==key){
            printf("%d EXISTS\n", key);
            return;
        }
        atual=atual->prox;
    }

    LinkedKey* novoNodo = malloc(sizeof(LinkedKey));
    novoNodo->key = key;
    novoNodo->prox = ht->tabela[index];
    ht->tabela[index] = novoNodo;
    printf("%d -> %d\n", index, key);
    printf("OK\n");
}

void excluirLinkedList(LinkedTable* ht, int P, int key) {
    int index = hash(key, P);

    LinkedKey* atual = ht->tabela[index];
    LinkedKey* ant = NULL;

    while (atual != NULL) {
        if (atual->key == key) {
            if (ant == NULL) {
                ht->tabela[index] = atual->prox;
            } else {
                ant->prox = atual->prox;
            }
            free(atual);
            printf("OK\n");
            return;
        }
        ant = atual;
        atual = atual->prox;
    }

    printf("NO\n");
}

void procurarLinkedList(LinkedTable* ht, int P, int key) {
    int index = hash(key, P);

    LinkedKey* atual = ht->tabela[index];

    while (atual != NULL) {
        if (atual->key == key) {
            printf("%d\n", index);
            return;
        }
        atual = atual->prox;
    }

    printf("NO\n");
}

void imprimirLinkedList(LinkedTable* ht, int P) {
    for (int i = 0; i < P; i++) {
        LinkedKey* atual = ht->tabela[i];
        LinkedKey* ant = atual;
        if (atual!=NULL) printf("%d ",i);
        while (atual != NULL) {
            if (atual->prox==NULL){
                printf("%d",atual->key);
            } else printf("%d ",atual->key);
            atual = atual->prox;
        }
        if (ant!=NULL) printf("\n");
    }
}