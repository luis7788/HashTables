#include "OpenAddressing.h"

//OPEN
int inserirLinearProbing(LinearTable* ht, int P, int key) {
    int index = hash(key, P);
    int indexInicial = index;
    int posDeleted=0;
    int posKey=0;
    int contDeleted=0;
    int contKey=0;

    for(int i=index;i<P;i++){
        if (ht->tabela[i].validade==1) {
            posDeleted=i;
            contDeleted=1;
            break;
        }
    }
    if (contDeleted==0){
        for(int y=0;y<index;y++){
            if (ht->tabela[y].validade==1) {
               posDeleted=y;
               break;
            }
        }
    }

    int contAuxDL=0;
    int contAuxK=0;
    for(int j=index;j<P;j++){
        if (ht->tabela[j].validade==1) {
            contAuxDL=1;
        }    
        if (ht->tabela[j].key == key && !ht->tabela[j].validade) {
            if (contAuxDL==0){
                contAuxK++;
            }
            posKey=j;
            contKey=1;
            break;
        }
    }
    if (contKey==0){
        for(int y=0;y<index;y++){
            if (ht->tabela[y].validade==1) {
               contAuxDL=1;
            }  
            if (ht->tabela[y].key==key && !ht->tabela[y].validade) {
               if (contAuxDL==0){
                  contAuxK++;
               }
               posKey=y;
               contKey=1;
               break;
            }
        }
    }

    while (ht->tabela[index].key != 0) {
        index = (index + 1) % P;
        if (index == indexInicial) {
            printf("GIVING UP!\n");
            return 1;
        }
    }

    int auxIndex = 0;
    int aux=0;
    while (ht->tabela[auxIndex].key != key && aux<P) {
        auxIndex = (auxIndex + 1) % P;
        aux++;
    }
    if (ht->tabela[auxIndex].key == key) {
        printf("%d EXISTS\n", key);
        if (contAuxK<=0){
            ht->tabela[posDeleted].key=key;
            ht->tabela[posDeleted].validade=0;
            ht->tabela[posKey].key=0;
            ht->tabela[posKey].validade=1;
        }
        return 0;
    }

    ht->tabela[index].key = key;
    ht->tabela[index].validade = 0;
    printf("%d -> %d\n", index, key);
    printf("OK\n");
    return 0;
}


void excluirLinearProbing(LinearTable* ht, int P, int key) {
    int index = hash(key,P);

    for(int i=index;i<P;i++){
        if (ht->tabela[i].key == key) {
            ht->tabela[i].key = 0;
            ht->tabela[i].validade = 1;
            printf("OK\n");
            return;
        }
    }
    for(int y=0;y<index;y++){
        if (ht->tabela[y].key == key) {
            ht->tabela[y].key = 0;
            ht->tabela[y].validade = 1;
            printf("OK\n");
            return;
        }
    }
    printf("NO\n");
}

void procurarLinearProbing(LinearTable* ht, int P, int key) {
    int posDeleted=0;
    int posKey=666;
    int index = hash(key,P);
    int contDeleted=0;
    int contKey=0;

    for(int i=index;i<P;i++){
        if (ht->tabela[i].validade==1) {
            posDeleted=i;
            contDeleted=1;
            break;
        }
    }
    if (contDeleted==0){
        for(int y=0;y<index;y++){
            if (ht->tabela[y].validade==1) {
               posDeleted=y;
               break;
            }
        }
    }

    int contAuxDL=0;
    int contAuxK=0;
    int a=0;
    for(int j=index;j<P;j++){
        if (ht->tabela[j].validade==1) {
            contAuxDL=1;
        }    
        if (ht->tabela[j].key == key && !ht->tabela[j].validade) {
            if (contAuxDL==0){
                contAuxK++;
            }
            posKey=j;
            contKey=1;
            break;
        }
    }
    if (contKey==0){
        for(int y=0;y<index;y++){
            if (ht->tabela[y].validade==1) {
               contAuxDL=1;
            }  
            if (ht->tabela[y].key==key && !ht->tabela[y].validade) {
               if (contAuxDL==0){
                  contAuxK++;
               }
               posKey=y;
               contKey=1;
               break;
            }
            a=y;
        }
    }

    if (a+1==index && contKey==0){
        printf("NO\n");
        return;
    }

    

    if (contAuxK>0){
        printf("%d\n", posKey);
        return;
    } else {
        ht->tabela[posDeleted].key=key;
        ht->tabela[posDeleted].validade = 0;
        ht->tabela[posKey].key=0;
        ht->tabela[posKey].validade=1;
        printf("%d\n", posDeleted);
        return;
    }
}

void imprimirLinearProbing(LinearTable* ht, int P) {
    char d ='D';
    for (int i = 0; i < P; i++) {
        if (ht->tabela[i].key != 0) {
            printf("%d\t%d\n", i, ht->tabela[i].key);
        } else if (ht->tabela[i].validade==1) {
            printf("%d\t%c\n", i, d);
        }
    }
}