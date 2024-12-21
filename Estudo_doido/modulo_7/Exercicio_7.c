//
// Created by lucca on 21/12/2024.
//
#include <stdio.h>

int main(){
    int matrix[5][5],temp;
    for (int i =0; i<5; i++) {
        printf("enter row %d: ",i+1);
        scanf("%d %d %d %d %d",&matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3],&matrix[i][4]);
    }
    printf("Row totals:");
    for (int i=0;i<5;i++) {
        temp = 0;
        for (int j=0;j<5;j++) {
            temp += matrix[i][j];
        }
        printf("%d  ",temp);
    }
    printf("\nColumn totals: ");
    for (int i=0;i<5;i++) {
        temp = 0;
        for (int j=0;j<5;j++) {
            temp += matrix[j][i];
        }
        printf("%d  ",temp);
    }
}

/*
enter row 1: 8 3 9 0 10
enter row 2: 3 5 17 1 1
enter row 3: 2 8 6 23 1
enter row 4: 15 7 3 2 9
enter row 5: 6 14 2 6 0
*/