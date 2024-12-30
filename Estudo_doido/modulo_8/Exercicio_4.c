
//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_4.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Sunday, December 29th 2024, 7:36:20 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning(disable: 4996)


void read_word(int arr[]){
    int ch;
    printf("Enter first word: %c",32);
    while ((ch = getchar())!=10){
        ch = toupper(ch);
        arr[ch-65]++;
    }
}

bool equal_array(int arrx[],int arry[]){
    for (int i = 0;i < 26;i++){
        if (arrx[i] == arry[i]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[26]={[0]=0}, arr2[26]={[0]=0};
    read_word(arr1);
    read_word(arr2);
    printf("\n");
    if(equal_array(arr1,arr2)){
        printf("They are anagrams. :)");
    }
    else{
        printf("They arent anagrams. :(");
    }
}