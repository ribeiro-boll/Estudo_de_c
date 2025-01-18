//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_7\Exercicio_16.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_7
//Created Date: Wednesday, December 25th 2024, 12:03:26 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//
#include <ctype.h>
#include <stdio.h>
#pragma warning(disable: 4996)


int main(){
    int cond=1,alfab1[25] = {[0]=0},ch;
    printf("Enter first word: %c",32);
    while ((ch = getchar())!=10){
        ch = toupper(ch);
        alfab1[ch-65]++; 
    }
    printf("Enter second word: %c",32);
    while ((ch = getchar())!=10){
        ch = toupper(ch);
        alfab1[ch-65]++; 
    }
    for (int i = 0;i<25;i++){
        if ((alfab1[i]+2)%2 == 0){
            continue;
        }
        else{
            printf("the words are not anagrams");
            cond = 0;
            break;
        }
    }
    if (cond){
        printf("The words are anagrams");
    }

}

