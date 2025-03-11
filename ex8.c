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

double celsius_to_fahrenheit(double celsius){
    return (celsius * 1.8) + 32;
}  
double fahrenheit_to_celsius(double fahrenheit){
    return (fahrenheit - 32) / 1.8;
}   

int main(){

    float numero;
    printf("Insira um número: ");
    scanf("%f", &numero);

    printf("\n\n");

    typedef double (*ref_func) (double);

    ref_func funcs[] = {celsius_to_fahrenheit, fahrenheit_to_celsius};
    char texts[][24] = {"Celsius para Fahrenheit", "Fahrenheit para Celsius"};

    int arr_size = sizeof(texts) / sizeof(texts[0]);
    for(int i = 0; i < arr_size; i++)
        printf("%d) %s\n", i + 1, texts[i]);

    int opt;
    do {
        printf("\n>>> ");
        scanf("%d", &opt);
    } while(opt > arr_size || opt <= 0);

    printf("%f", funcs[opt - 1](numero));

    return 0;
}