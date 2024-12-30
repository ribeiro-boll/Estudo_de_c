//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_2.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Friday, December 27th 2024, 10:13:39 am
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(int grid[][10],int temporizador){
    srand(time(NULL));
    for (int i = 0;i<10;i++) {
        for (int j = 0;j<10;j++) {
            grid[i][j] = '.';
        }
    }
    for (int i = 0;i<10;i++) {
        for (int j = 0;j<10;j++) {
            printf("%c\t",grid[i][j]);
        }
        printf("\n");
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
        temporizador++;
    }
}


void print_array(int grid[][10]){
    for (int i = 0;i<10;i++) {
        for (int j = 0;j<10;j++) {
            printf("%c\t",grid[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int temp = 0, grid[10][10];
    generate_random_walk(grid,temp);
    printf("\n");
    printf("\n");
    print_array(grid);
}