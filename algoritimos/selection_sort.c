//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\algoritimos\selection_sort.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\algoritimos
//Created Date: Friday, December 27th 2024, 10:07:00 am
//Author: lucca
//
//Copyright (c) 2024 Your Company
//



void selection_sort(int* arr,int lenght_arr){
    if (lenght_arr == 0){
        return;
    }
    else{
        int max = -2147483648, index, temp;
        for (int i = 0;i<lenght_arr;i++){
            if (arr[i]>max){
                max = arr[i];
                index = i;
            }
        }
        temp = arr[lenght_arr-1];
        arr[lenght_arr-1] = max;
        arr[index] = temp;
        selection_sort(arr,lenght_arr-1); 
    }
}