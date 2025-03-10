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
        res = res * base;
    }
    return res;
}


int main(){
    printf("%d", potencia(2, 2));
    return 0;
}