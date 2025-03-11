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
#include "stdbool.h"

bool is_perfect(long  int numero){
    int acc = 0;

    /* Calcula o número perfeito mais perto */
    for(int i = 0; i <= numero / 2; i++)
        if(numero % i == 0)
            acc += i;
    

    if(acc == numero)
        return true;
    else
        return false;
}


int main(){

    for(int i = 0; i < 10000; i++)
        if(is_perfect(i))
            printf("%d\n", i);
    return 0;
}