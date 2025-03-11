/*
    Copyright © 2025 Mateus Felipe da Silveira Vieira

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Repositório Git: https://github.com/habdig7oficial/lista3-algoritimos.git

*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

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
            printf("Impossível dividir por 0\n");
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
    myfunc funcs[] = {sum, sub, mul, divi, NULL};

    char opts [][50] = {"Somar números", "Subtrair números", "Multiplicar números", "Dividir números", "Sair"};

    int size_opt = sizeof(funcs) / sizeof(myfunc);
    for(int i = 0; i < sizeof(opts) / sizeof(opts[0]); i++)
        printf("(%c) - %s\n", 'a' + i, opts[i]);

    char opt;
    int lim;
    do {
        scanf("%c", &opt);
        lim = opt - 'a';
        if( lim > sizeof(funcs)  / sizeof(myfunc) - 1)
            printf("valor inválido :( \n>> ");
        else if (lim == sizeof(funcs)  / sizeof(myfunc) - 1)
            exit(0);
    } while(lim > sizeof(funcs)  / sizeof(myfunc) - 1);

    printf(">> ");
    scanf(" ");
    char input[3000];
    fgets(input, sizeof(input), stdin);

    /* Descobrindo área a alocar */
    int should_alloc = 1;
    for(int i = 0; input[i] != '\0'; i++)
        if(input[i] == ' ')
            should_alloc++;

    printf("%d\n\n", should_alloc);

    
    double * lista_operacoes = malloc(sizeof(double) * (should_alloc + 1));
    char *ptr = strtok(input, " ");

    for(int i = 0; ptr != NULL; i++){
        lista_operacoes[i] = atof(ptr);
        ptr = strtok(NULL, " ");
        //printf("%s\n", pieces);

    }
    printf("%d", should_alloc);

    printf("Resultado: %f\n\n\n", funcs[lim](lista_operacoes, should_alloc));


}

int main(){
    while(true)
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