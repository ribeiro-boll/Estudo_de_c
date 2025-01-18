//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_7\Exercicio_17.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_7
//Created Date: Wednesday, December 25th 2024, 4:31:11 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

#include <stdio.h>

int main(){
    int inicio,valor=1,matrix[99][99]={[0][0]=0},nmbr,y=0;

    printf("Enter size of magic square: ");
    scanf("%d",&nmbr);
    inicio = nmbr/2;
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
    for (int y=0;y<nmbr;y++){
        for (int inicio=0;inicio<nmbr;inicio++){
            printf("%d\t",matrix[y][inicio]);
        }
        printf("\n");
        printf("\n");
    }
}