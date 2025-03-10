#include "stdio.h"
#include "stdbool.h"

bool is_perfect(long  int numero){
    int acc = 0;

    /* Calcula o número perfeito mais perto */
    for(int i = 0; i <= numero / 2; i++)
        if(numero % i == 0)
            acc += i;
    

    if(acc == numero)
        return true;
    else
        return false;
}


int main(){

    for(int i = 0; i < 10000; i++)
        if(is_perfect(i))
            printf("%d\n", i);
    return 0;
}