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

int potencia(int base, int expoente){
    if(expoente == 0)
        return 1;
    else if(expoente < 0){
        printf("Expoente não pode ser negativo \n");
        return -1;
    }
        
    int res = base;
    for(int i = 0; i < expoente - 1; i ++){
        res *= base;
    }
    return res;
}


int main(){
    for(int i = 0; i < 10; i++)
        printf("%d\n", potencia(2, i));
    printf("----\n");
    for(int i = 0; i < 10; i++)
        printf("%d\n", potencia(-5, i));
    return 0;
}