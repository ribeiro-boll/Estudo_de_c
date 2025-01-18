//
// Created by bolota on 18/12/2024.
//
#include <stdio.h>
#define True 1
#define False 0


int main(void) {
    int arr[10]={arr[0]=0},num,num2;
    char e;
    while (True){
        printf("Enter a number:\n");
        scanf("%d",&num);
        scanf("%c",&e);
        if (num<=0) {
            break;
        }
        else{
            while (num>0){
                num2=num%10;
                num = num/10;
                switch (num2) {
                case 0: arr[num2]++; break;
                case 1: arr[num2]++; break;
                case 2: arr[num2]++; break;
                case 3: arr[num2]++; break;
                case 4: arr[num2]++; break;
                case 5: arr[num2]++; break;
                case 6: arr[num2]++; break;
                case 7: arr[num2]++; break;
                case 8: arr[num2]++; break;
                case 9: arr[num2]++; break;
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
            num = 0;
            num2 = 0;
            int arr[10]={arr[0]=0};
            printf("\n\n");
        }
    }
}