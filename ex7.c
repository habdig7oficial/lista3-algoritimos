#include "stdio.h"
#include "stdlib.h"
#include "math.h"

struct ContaNumeros{
    int pares;
    int impares;
    int *arr_pares;
    int *arr_impares;
};

struct ContaNumeros conta_numeros(int inicio, int fim){
    int intervalo = fim - inicio;

    int med = floor(intervalo / 2);
    int num_impares[med];
    int num_pares[med];
    struct ContaNumeros res = {
        .pares = med,
        .impares = med,
        .arr_pares = num_pares,
        .arr_impares = num_impares
    };



    int index_par = 0;
    int index_impar = 0;
    /* Mais um pra pular o inicio fora do intervalo */
    for (int i = inicio + 1; i < fim; i++){
        if(i % 2 == 0){
            num_pares[index_par] = i;
            index_par++;
        } 
        else {
            num_impares[index_impar] = i;
            index_impar++;
        }
    }

    printf("%d\n\n",res.arr_impares[0]);

    return res;
}

int main(){
    struct ContaNumeros teste = conta_numeros(10, 15);
    printf("pares: %d\nimpares: %d\n", teste.pares, teste.impares);

    printf("%d", teste.arr_pares[0]);


    return 0;
}