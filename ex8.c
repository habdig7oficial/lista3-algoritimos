#include "stdio.h"

double celsius_to_fahrenheit(double celsius){
    return (celsius * 1.8) + 32;
}  
double fahrenheit_to_celsius(double celsius){
    return (celsius * 1.8) + 32;
}   

int main(){

    typedef double (*ref_func) (double);

    ref_func funcs[] = {celsius_to_fahrenheit, fahrenheit_to_celsius};
    char texts[][24] = {"Celsius para Fahrenheit", "Fahrenheit para Celsius"};

    for(int i = 0; i < sizeof(texts) / sizeof(texts[0]); i++)
        printf("%d) %s\n", i + 1, texts[i]);

    int opt
    printf(">>> %d", )
   


    return 0;
}