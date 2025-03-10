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

/* Acabou operações */

void menu(){
    typedef double (*myfunc) (double *, int);
    myfunc funcs[] = {sum, sub, mul, divi, fc_exit};

    char opts [][50] = {"Somar dois números", "Subtrair dois números", "Multiplicar dois números", "Dividir dois números", "Sair"};

    int size_opt = sizeof(funcs) / sizeof(myfunc);
    for(int i = 0; i < sizeof(opts) / sizeof(opts[0]); i++)
        printf("(%c) - %s\n", 'a' + i, opts[i]);

    char opt;
    int lim;
    do {
        scanf("%c", &opt);
        if(opt - 'a' > sizeof(funcs)  / sizeof(myfunc) - 1)
            printf("valor inválido :( \n>> ");
        else if (opt - 'a' == sizeof(funcs)  / sizeof(myfunc) - 1)
            exit(0);
    } while(opt - 'a' > sizeof(funcs)  / sizeof(myfunc) - 1);

    double * lista_operacoes = malloc(sizeof(double) * 5);
    funcs[opt](lista_operacoes, 5);


}

int main(){
    menu();
}


/*
Testes da Funções

    //Teste soma
    double * lista_operacoes = malloc(sizeof(double) * 5); // 5 elementos

    for(int i = 0; i < 5; i++){
        lista_operacoes[i] = i + 2.512;
    }
    printf("sum: %f", sum(lista_operacoes, 5));

    printf("\n\n---------\n\n");

    // Teste multiplicação 
    printf("mul: %f", mul(lista_operacoes, 5));
    printf("\n\n---------\n\n");

    // Teste subtração 
    lista_operacoes = malloc(sizeof(double) * 3); // 3 elementos
    lista_operacoes[0] = 10.5;
    lista_operacoes[1] = 8.9;
    lista_operacoes[2] = 0;
    
    printf("sub: %f", sub(lista_operacoes, 3));

    printf("\n\n---------\n\n");

    // Teste Divisão
    lista_operacoes = malloc(sizeof(double) * 3); // 3 elementos
    lista_operacoes[0] = 4.5;
    lista_operacoes[1] = 2;
    lista_operacoes[2] = 2.25;
    
    
    printf("divi: %f", divi(lista_operacoes, 3));

    printf("\n\n---------\n\n");

*/