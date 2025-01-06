//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8\Exercicio_8.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_8
//Created Date: Monday, December 30th 2024, 3:16:26 pm
//Author: lucca
//
//Copyright (c) 2024 Your Company
//
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(){
    return rand()%6+1+rand()%6+1;
}

bool play_game(){
    int first_run=1,point;
    while (true){
        int run = roll_dice();
        printf("You rolled: %d\n",run);
        if (first_run){
            if (run == 7 || run == 11){
                printf("You win!  :)\n\n");
                return true;
            }
            else if(run == 2 || run == 12){
                printf("You lose!  :(\n\n");
                return false;
            }
            else{
                point = run;
                printf("Your point is %d\n",point);
                first_run = 0;
                continue;
            }
        }
        else if(7 == run){
            printf("You lose!  :(\n\n");
                return false;
        }
        else if(point == run){
            printf("You win!  :)\n\n");
            return true;
        }
    }
}

int main(){
    int wins=0,loses=0,cond='Y';
    char c;
    srand(time(NULL));
    while (cond == 'Y'){
        bool result = play_game();
        if (result){
            wins++;
        }
        else{
            loses++;
        }
        printf("\n");
        printf("Play again? (y/n)?");
        cond = getchar();
        cond = toupper(cond);
        scanf("%c",&c);
    }
    printf("Your wins: %d\nYour loses: %d",wins,loses);
}