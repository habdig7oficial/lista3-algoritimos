#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int conta_digitos(int numero){
    /* 
    Tamanho necessário para o array
    Log com o ceil calcula o número de digitos necessários
    + 1 para o terminador da string
    * o tamanho que cada char do array ocupa
    */
    int mysize = (int)((ceil(log10(numero)) + 1) * sizeof(char));
    char arr[mysize];
    sprintf(arr, "%d", numero);

    /* Menos um pra remover o terminador */
    for (int i = 0; i < mysize - 1; i++)
        printf("%d˚ - %c\n", i + 1, arr[i]);

    return mysize - 1;
}

int main(int argc, char *argv[]){

    int num;

    if(argc == 1){
        scanf("%d", &num);
    }
    else{
        num = atoi(argv[1]);
    }

    printf("A quantidade de digitos é: %d\n", conta_digitos(num));
    return 0;
}