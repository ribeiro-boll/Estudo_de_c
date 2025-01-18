//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_6.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Sunday, December 29th 2024, 11:43:39 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//
#include <stdio.h>


double power(double n, int x){
    double retorno = 1.0;
    for (int i =0;i<=x;i++){
        retorno*=n;
    }
    return retorno; 
}

double calc_polinomial(double x){
    return ((3*power(x,5))+(2*power(x,4))-(5*power(x,3)) - power(x,2) + (7 * x) -6);
}

int main(){
    double x;
    printf("Enter the number of x: %c",32);
    scanf("%lf",&x);
    printf("%.2lf",calc_polinomial(x));
}