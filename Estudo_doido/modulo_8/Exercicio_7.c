//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_7.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Monday, December 30th 2024, 2:55:22 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

#include <stdio.h>

double powe(double x,int n){
    if (n==0){
        return 1;
    }
    else{
        if (n%2==0){
            return powe(x,n/2)*powe(x,n/2);
        }
        else{
            return x * powe(x,n-1);
        }
    }
}

int main(){
    double x;
    int n;
    printf("Enter the desired number to be elevated, and the power itself\nin the format: x^n: %c",32);
    scanf("%lf^%d",&x,&n);
    printf("%.2lf^%d is equal to: %.2lf",x,n,powe(x,n));
}