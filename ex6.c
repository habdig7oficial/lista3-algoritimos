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