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


/* Ainda Dava pra melhorar */

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

struct ContaNumeros{
    int pares;
    int impares;
    int *arr_pares;
    int *arr_impares;
    int distancia;
};

struct ContaNumeros conta_numeros(int inicio, int fim){
    int intervalo = fim - inicio;

    printf("%d\n\n", intervalo);

    int med = floor(intervalo / 2);
    int * num_impares = malloc(sizeof(int) * med);
    int * num_pares = malloc(sizeof(int) * med); // pode alocar um espaço a mais que o necessário
    struct ContaNumeros res = {
        .pares = intervalo % 2 == 0 ? (med - 1) : med,
        .impares = med,
        .arr_pares = num_pares,
        .arr_impares = num_impares,
        .distancia = med
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

    return res;
}

int main(){
    struct ContaNumeros teste = conta_numeros(10, 21);
    printf("pares: %d\nimpares: %d\n", teste.pares, teste.impares);


    for(int i = 0; i < teste.distancia; i++){
        printf("%d\n", teste.arr_impares[i]);
    }

    printf("-------------\n");

    for(int i = 0; i < teste.distancia; i++){
        printf("%d\n", teste.arr_pares[i]);
    }

    free(teste.arr_impares);
    free(teste.arr_pares);

    return 0;
}