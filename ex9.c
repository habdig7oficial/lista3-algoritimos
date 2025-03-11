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
        printf("Digite um numero inteiro bem grandão: ");
        scanf("%d", &num);
    }
    else {
        num = atoi(argv[1]);
    }

    printf("A quantidade de digitos é: %d\n", conta_digitos(num));
    return 0;
}