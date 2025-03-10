#include "stdio.h"
#include "stdlib.h"

/*
    (a) Somar dois números
    (b) Subtrair dois números
    (c) Multiplicar dois números
    (d) Dividir dois números (verificando divisão por zero)
    (e) Sair
*/

double sum(double *numeros, int size_list){
    double acc = 0;
    for(int i = 0; i < size_list; i++){
        printf("%f\n", numeros[i]);
        acc += numeros[i];
    }
    return acc;
}

double sub(double *numeros, int size_list){
    double acc = numeros[0];
    for(int i = 1; i < size_list; i++){
        printf("%f\n", numeros[i]);
        acc -= numeros[i];
    }
    return acc;
}

double mul(double *numeros, int size_list){
    double acc = numeros[0];
    for(int i = 1; i < size_list; i++){
        printf("%f\n", numeros[i]);
        acc *= numeros[i];
    }
    return acc;
}

double divi(double *numeros, int size_list){
    double acc = numeros[0];
    for(int i = 1; i < size_list; i++){
        if(numeros[i] == 0){
            printf("Impossível dividir por 0");
            return acc;
        }
        printf("%f\n", numeros[i]);
        acc /= numeros[i];
    }
    return acc;
}



int main(){
    /* Teste soma */
    double * lista_operacoes = malloc(sizeof(double) * 5); // 5 elementos

    for(int i = 0; i < 5; i++){
        lista_operacoes[i] = i + 2.512;
    }
    printf("sum: %f", sum(lista_operacoes, 5));

    printf("\n\n---------\n\n");

    /* Teste multiplicação */
    printf("mul: %f", mul(lista_operacoes, 5));
    printf("\n\n---------\n\n");

    /* Teste subtração */
    lista_operacoes = malloc(sizeof(double) * 3); // 3 elementos
    lista_operacoes[0] = 10.5;
    lista_operacoes[1] = 8.9;
    lista_operacoes[2] = 0;
    
    printf("sub: %f", sub(lista_operacoes, 3));

    printf("\n\n---------\n\n");

    /* Teste Divisão */
    lista_operacoes = malloc(sizeof(double) * 3); // 3 elementos
    lista_operacoes[0] = 4.5;
    lista_operacoes[1] = 2;
    lista_operacoes[2] = 2.25;
    
    
    printf("divi: %f", divi(lista_operacoes, 3));

    printf("\n\n---------\n\n");

}