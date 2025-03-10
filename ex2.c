#include "stdio.h"
#include "stdbool.h"

bool is_prime(int n){

    if(n <= 1)
        printf("Não são primos por definição\n");

    for(int i = 2; i <= n / 2; i++){
        //printf("%d - %d\n", i, n % i == 0);
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    for(int i = 0; i < 100; i++){
        if(is_prime(i))
            printf("%d\n",i);
    }
    return 0;
}