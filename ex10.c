#include "stdio.h"
#include "stdlib.h"

/*
    (a) Somar dois números
    (b) Subtrair dois números
    (c) Multiplicar dois números
    (d) Dividir dois números (verificando divisão por zero)
    (e) Sair
*/

double somar(double *numeros, int size_list){
    double acc = 0;
    for(int i = 0; i < size_list; i++){
        printf("%f\n", numeros[i]);
        acc += numeros[i];
    }
    return acc;
}

int main(){
    double * lista_operacoes = malloc(sizeof(double) * 5); // 5 elementos

    for(int i = 0; i < 5; i++){
        lista_operacoes[i] = i + 2.512;
    }
        


    printf("soma: %f", somar(lista_operacoes, 5));

}