//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\algoritimos\selection_sort.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\algoritimos
//Created Date: Friday, December 27th 2024, 10:07:00 am
//Author: lucca
//
//Copyright (c) 2024 Your Company
//



#include <stdio.h>
#include <limits.h>



void qsort(int *arr,long int len,int true_lenght){
    for(int i =0;i<true_lenght;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    if (0 == len){
        return;
    }
    int max_int = arr[0],index_largest=0;
    for (int i =0 ;i<len;i++){
        if (arr[i]>=max_int){
            index_largest = i;
            max_int = arr[i];
        }
    }
    int temp = arr[len-1];
    arr[len-1] = max_int;
    arr[index_largest]=temp;
    qsort(arr, len-1, true_lenght);
}


int main(){
    int sequencia[] = {2,6,1,7,9,4,6,89,4,7,9,4123,567,996,44,78,2,1};
    long int lenght = (sizeof(sequencia)/4);
    for(int i =0;i<lenght;i++){
        printf("%d\t",sequencia[i]);
    }
    printf("\n");
    qsort(sequencia,lenght,lenght);
    for(int i =0;i<lenght;i++){
        printf("%d\t",sequencia[i]);
    }
}