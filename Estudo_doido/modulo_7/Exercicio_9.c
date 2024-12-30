//
// Created by lucca on 22/12/2024.
//

/*

 fiz algumas a respeito do projeto original, pra deixar ele mais legal
 agora ele resetará tanto a coluna, quanto o row para o anterior, caso os mesmos, forem menor
 que 0 ou maior que 10 e botando um limite de execuções para o codigo nao rodar infinitamente
 caso o target atual nao chegue em Z

*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int extra =0,cond = 1,temporizador =0;
    int grid[10][10];
    for (int i = 0;i<10;i++) {
        for (int j = 0;j<10;j++) {
            grid[i][j] = '.';
        }
    }
    srand(time(NULL));
    if (extra){
        for (int i=0;i<10;i++) {
            grid[rand()%10][rand()%10] = 0;
        }
    }

    int row=0,col=0,contador = 0,current_command;
    while (temporizador<999) {
        current_command = rand()%4;
        if ('A'+contador>90) {
            break;
        }
        if (row<0) {
            row = 0;
        }
        if (col<0) {
            col = 0;
        }
        if (row>10) {
            row = 0;
        }
        if (col>10) {
            col = 0;
        }

        if (grid[row][col]=='.') {
            grid[row][col] = 'A'+contador;
            contador++;
        }

        switch (current_command) {
            case 0: col++;break;
            case 1: col--;break;
            case 2: row++;break;
            case 3: row--;break;
        }

        if (cond) {
            system("cls");
            printf("\n");
            printf("\n");
            for (int i = 0;i<10;i++) {
                for (int j = 0;j<10;j++) {
                    printf("%c\t",grid[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("\n");
        }
        
        temporizador++;
    }
}