#include "Hash.h"

//Funções hash
int hash(int key, int P){
    return key%P;
}

int hash2(int key, int P){
    int num =(floor(key/P));
    return num%P;
}