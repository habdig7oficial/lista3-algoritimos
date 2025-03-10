#include "stdio.h"

int fatorial(int n){
    int res = n--;
    while(n != 0){
        res *= n--;
        //printf("%d - %d\n",n, res);
    }
    return res;
}


int main(){
    for(int i = 1; i <= 10; i++)
        printf("fact(%d) = %d\n", i, fatorial(i));
    return 0;
}