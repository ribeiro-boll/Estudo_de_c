//
// Created by bolota on 18/12/2024.
//
#include <stdio.h>


int main(void) {
    int arr[10]={arr[0]=0};
    char num;

    printf("Enter a number:\n");
    while ((num = getchar())!=10) {
        switch (num) {
            case '0': arr[num-48]++; break;
            case '1': arr[num-48]++; break;
            case '2': arr[num-48]++; break;
            case '3': arr[num-48]++; break;
            case '4': arr[num-48]++; break;
            case '5': arr[num-48]++; break;
            case '6': arr[num-48]++; break;
            case '7': arr[num-48]++; break;
            case '8': arr[num-48]++; break;
            case '9': arr[num-48]++; break;
            default: printf("caracter invalido, pulando %c",num);
        }
    }
    printf("\nDigit:       \t");
    for (int i =0; i<10;i++) {
        printf("%d\t",i);
    }
    printf("\nOccurrences: \t");
    for (int i =0; i<10;i++) {
        printf("%d\t",arr[i]);
    }
}

