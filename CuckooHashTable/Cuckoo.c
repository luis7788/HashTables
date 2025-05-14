#include "Cuckoo.h"

//CUCKOO
int inserirCuckooHashing(CuckooTable* ht, int P, int key,int cont) {
    int index1 = hash(key, P);
    int auxIndex2 = hash2(ht->tabela1[index1],P);

        if (cont==2){
            printf("GIVING UP!\n");
            return 1;
        }

        if (ht->tabela1[index1] == 123456) {
            ht->tabela1[index1] = key;
            printf("%d %d -> %d\n", 0, index1, key);
            printf("OK\n");
            return 0;
        } else if (ht->tabela2[auxIndex2] == 123456) {
            ht->tabela2[auxIndex2] = ht->tabela1[index1];
            ht->tabela1[index1] = key;
            printf("%d %d -> %d\n", 0, index1, key);
            printf("%d %d -> %d\n", 1, auxIndex2, ht->tabela2[auxIndex2]);
            printf("OK\n");
            return 0;
        }

            int valor1=ht->tabela1[index1];
            int valor2=ht->tabela2[auxIndex2];
            ht->tabela2[auxIndex2]=valor1;
            ht->tabela1[index1]=key;
            printf("%d %d -> %d\n", 0, index1, key);
            printf("%d %d -> %d\n", 1, auxIndex2, ht->tabela2[auxIndex2]);
            if (valor2==key){
                printf("OK\n");
                return 0;
            }
            inserirCuckooHashing(ht,P,valor2,cont-1);
            return 0;                           
}

void excluirCuckooHashing(CuckooTable* ht, int P, int key) {
    int index1 = hash(key, P);
    int index2 = hash2(key, P);

    if (ht->tabela1[index1] == key) {
        ht->tabela1[index1] = 123456;
        printf("OK\n");
    } else if (ht->tabela2[index2] == key) {
        ht->tabela2[index2] = 123456;
        printf("OK\n");
    } else {
        printf("NO\n");
    }
}

void procurarCuckooHashing(CuckooTable* ht, int P, int key) {
    int index1 = hash(key, P);
    int index2 = hash2(key, P);

    if (ht->tabela1[index1] == key) {
        printf("0 %d\n", index1);
    } else if (ht->tabela2[index2] == key) {
        printf("1 %d\n", index2);
    } else {
        printf("NO\n");
    }
}

void imprimirCuckooHashing(CuckooTable* ht, int P) {
    for (int i=0;i<P;i++){
        if (ht->tabela1[i] != 123456) {
            printf("0\t%d\t%d\n", i, ht->tabela1[i]);
        }
    }
    for (int i=0;i<P;i++){
        if (ht->tabela2[i] != 123456) {
            printf("1\t%d\t%d\n", i, ht->tabela2[i]);
        }
    }
}
