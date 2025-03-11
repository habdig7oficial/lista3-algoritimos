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

bool is_prime(int n){

    if(n <= 1)
        printf("Não são primos por definição\n");

    for(int i = 2; i <= n / 2; i++){
        //printf("%d - %d\n", i, n % i == 0);
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    for(int i = 0; i < 100; i++){
        if(is_prime(i))
            printf("%d\n",i);
    }
    return 0;
}