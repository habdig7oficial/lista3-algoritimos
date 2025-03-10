#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int somar_digitos(int numero){
    /* 
    Tamanho necessário para o array
    Log com o ceil calcula o número de digitos necessários
    + 1 para o terminador da string
    * o tamanho que cada char do array ocupa
    */
    int mysize = (int)((ceil(log10(numero)) + 1) * sizeof(char));
    char arr[mysize];
    sprintf(arr, "%d", numero);
    int res = 0;
    for(int i = 0; i < mysize; i++){
        char digit = arr[i];
        res += atoi(&digit);
    }
    return res;
}

int main(){
    printf("%d\n", somar_digitos(123));
    return 0;
}