#include "stdio.h"
#include "stdlib.h"

int potencia(int base, int expoente){
    if(expoente == 0)
        return 1;
    else if(expoente < 0){
        printf("Expoente não pode ser negativo \n");
        return -1;
    }
        
    int res = base;
    for(int i = 0; i < expoente - 1; i ++){
        res *= base;
    }
    return res;
}


int main(){
    for(int i = 0; i < 10; i++)
        printf("%d\n", potencia(2, i));
    printf("----\n");
    for(int i = 0; i < 10; i++)
        printf("%d\n", potencia(-5, i));
    return 0;
}