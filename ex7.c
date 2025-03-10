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

    struct ContaNumeros res = {
        .pares = floor(intervalo / 2)
    };

    return res;
}

int main(){
    struct ContaNumeros teste = conta_numeros(10, 20);
    printf("%d", teste.pares);
    return 0;
}