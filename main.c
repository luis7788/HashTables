#include "CuckooHashTable/Cuckoo.h"
#include "OpenAddressingHashTable/OpenAddressing.h"
#include "LinkedListHashTable/LinkedList.h"
#include "Hash.h"


int main(){
    int P;
    char word[10];
    char Comando;
    int key;

    assert(scanf("%d\n",&P));
    assert(scanf("%s\n", word));

    LinearTable* lT = malloc(sizeof(LinearTable));
    LinkedTable* lkT = malloc(sizeof(LinkedTable));
    CuckooTable* cT = malloc(sizeof(CuckooTable));

    for (int i=0;i<P;i++){
        cT->tabela1[i]=123456;
        cT->tabela2[i]=123456;
    }

    for(int i=0;i<20000000;i++){

        assert(scanf("%c",&Comando));

        if(Comando=='E') break;

        if(Comando=='I'||Comando=='D'||Comando=='C') assert(scanf("%d",&key));


        if (word[0]=='O'){
            if (Comando=='I') {
                int x=inserirLinearProbing(lT,P,key);
                if (x==1) break;
            } else if (Comando=='D') {
                excluirLinearProbing(lT,P,key);
            } else if (Comando=='C') {
                procurarLinearProbing(lT,P,key); 
            } else if (Comando=='P') {
                imprimirLinearProbing(lT,P);
            }

        } else if (word[0]=='L'){
            if (Comando=='I') {
                inserirLinkedList(lkT,P,key);
            } else if (Comando=='D') {
                excluirLinkedList(lkT,P,key);
            } else if (Comando=='C') {
                procurarLinkedList(lkT,P,key); 
            } else if (Comando=='P') {
                imprimirLinkedList(lkT,P);
            }    

        } else if (word[0]=='C'){
            if (Comando=='I') {
                int y=inserirCuckooHashing(cT,P,key,P);
                if (y==1) break;
            } else if (Comando=='D') {
                excluirCuckooHashing(cT,P,key);
            } else if (Comando=='C') {
                procurarCuckooHashing(cT,P,key); 
            } else if (Comando=='P') {
                imprimirCuckooHashing(cT,P);
            }    
        }
        
    }
}