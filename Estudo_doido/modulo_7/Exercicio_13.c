//
// Created by lucca on 23/12/2024.
//
#include <stdio.h>
#include <ctype.h>

int main () {
    int cond = 0,contador = 0,first_l,last_nm[20] = {last_nm[0] = 0},ch;
    printf("Enter a name: ");
    while ((ch = getchar())!= 10 && contador <20) {
        if (cond == 0) {
            first_l = toupper(ch);
            cond = 1;
        }

        else if (cond == 2) {
            last_nm[contador] = ch;
            if (contador == 0) {
                last_nm[contador] = toupper(ch);
            }
            contador++;
        }
        if (ch == 32) {
            cond = 2;
        }
    }
    printf("You entered the name: %c, ",first_l);
    for (int i=0;i<20;i++) {
        printf("%c",last_nm[i]);
    }
}