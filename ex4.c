#include "stdio.h"

int fatorial(int n){
    int res = n--;
    while(n != 0){
        res *= n--;
        printf("%d - %d\n",n, res);
    }
    return res;
}


int main(){
    printf("%d", fatorial(5));
    return 0;
}