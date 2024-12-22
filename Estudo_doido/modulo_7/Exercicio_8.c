//
// Created by lucca on 22/12/2024.
//
#include  <stdio.h>
int main() {
    int matrix[5][5];
    for (int i =0; i<5; i++) {
        printf("\nEnter student %d: ",i+1);
        scanf("%d %d %d %d %d",&matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3],&matrix[i][4]);
    }
    printf("\n\nAverages:\n");
    for (int i =0;i<5;i++) {
        int temp_hi = 0,temp_low=32000;
        float media = 0.0;
        for (int j=0;j<5;j++) {
            if (matrix[i][j] > temp_hi) {
                temp_hi = matrix[i][j];
            }
            if (matrix[i][j] < temp_low) {
                temp_low = matrix[i][j];
            }
            media += matrix[i][j];
        }
        printf("\n%d results are:\naverage: %f\nhigh score: %d\nlow score: %d\n",i+1,media/5.0,temp_hi,temp_low);
    }

}

/*

Enter student 1:4 4 5 6 7

Enter student 2:9 7 6 8 4

Enter student 3:12 5 6 8 0

Enter student 4:5 5 5 5 5

Enter student 5:7 7 2 6 8


*/