#include "stdio.h"

int mdc(int v1, int v2){
    int res = -1;
    while(res !=  0){
        res = v1 % v2;
        v1 = v2;
        v2 = res;
    }
    return v1;
}


int main(){
    printf("%d\n", mdc(36, 21));
    return 0;
}