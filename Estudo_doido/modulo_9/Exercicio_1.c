//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_1.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Thursday, December 26th 2024, 7:29:04 am
//Author: lucca
//
//Copyright (c) 2024 Your Company
//



/*
fiz algumas mudanças no codigo, para gerar um array randomico de lenght escolhido pelo "define"
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define lenght 15


void sort(int* arr,int len,int true_lenght){
    for (int i=0;i<true_lenght;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    if (len == 0){
        return;
    }
    else{
        int index,temp;
        int max_nmbr = -2147483647;
        for (int i=0;i<len;i++){
            
            // seleciona o maior numero do array ate len-1 atual, e armazena seu index e seu valor.
            
            if (arr[i] >= max_nmbr){
                max_nmbr = arr[i];
                index = i;
            }
        }
        
        // substitui o ultimo valor pelo maior valor encontrado e muda o ultimo valor antigo
        // para a posição anterior do maior numero, anteriormente salvo em "index".
        
        temp = arr[len-1];
        arr[len-1] = max_nmbr;
        arr[index] = temp;
        sort(arr,len-1,true_lenght);

        // por fim, chama a função recursivamente, de maneira em que, como o ultimo numero ja esteja ordenado,
        // ele chamara len como o penultimo numero e por assim vai.

    }

}



int main (){

    // gera um array aleatorio, usando os segundos atuais como seed 

    int arr[lenght];
    srand(time(NULL));
    for (int i = 0; i<lenght;i++){
        arr[i] = rand()%lenght;
    }
    sort(arr,lenght,lenght);
}