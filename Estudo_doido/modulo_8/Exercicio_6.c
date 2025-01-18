//
// Created by lucca on 21/12/2024.
//
#include <stdio.h>
#include <ctype.h>


int main() {
    int ch,index = 0;
    int string[64] = {string[0]=0};
    printf("Enter message: ");
    while ((ch = getchar()) != 10 || index == 64) {
        string[index] = toupper(ch);
        index++;
    }
    int index_temp = index;
    for (;index_temp<index+10;index_temp++) {
        if (index_temp >= 64) {
            break;
        }
        else {
            string[index_temp] = '!';
        }
    }
    for (int i = 0;i < index;i++) {
        switch (string[i]){

            case 'A': string[i] = 48+4;break;
            case 'B': string[i] = 48+8;break;
            case 'E': string[i] = 48+3;break;
            case 'I': string[i] = 48+1;break;
            case 'O': string[i] = 48+0;break;
            case 'S': string[i] = 48+5;break;
            default: continue;
        }
    }
    printf("In B1FF-speak: ");
    for(int j=0;j<index_temp;j++) {
        printf("%c",string[j]);
    }
}
