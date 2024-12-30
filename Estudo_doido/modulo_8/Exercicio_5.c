#include <stdio.h>
#include <windows.h>


void create_magic_square(int matrix[][99], int nmbr){
    int inicio = nmbr/2,valor=1,y=0;
    while (valor <= nmbr*nmbr){
        if (y<0){
            y = nmbr-1;
        }
        if (inicio==nmbr){
            inicio = 0;
        }
        if (matrix[y][inicio]!=0){
            inicio--;
            if (inicio < 0){
                inicio = nmbr-1;
            }
            
            y+=2;
            if (y>=nmbr){
                y = y%nmbr;
            }
        }
        matrix[y][inicio] = valor;
        valor++;
        inicio++;
        y--;
    }
}


void print_magic_square(int matrix[][99],int nmbr){
    for (int y=0;y<nmbr;y++){
        for (int inicio=0;inicio<nmbr;inicio++){
            printf("%d\t",matrix[y][inicio]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }
}


int main(){
    int matrix[99][99],nmbr;
    
    printf("Enter size of magic square: ");
    scanf("%d",&nmbr);
    system("Color 0A");
    printf("\n");
    create_magic_square(matrix,nmbr);
    print_magic_square(matrix,nmbr);
    while(1==1){
        system("Color 0A");
        system("Color 0B");
        system("Color 0C");
        system("Color 0D");
    }
}
//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_5.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Sunday, December 29th 2024, 8:49:15 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

