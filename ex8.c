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