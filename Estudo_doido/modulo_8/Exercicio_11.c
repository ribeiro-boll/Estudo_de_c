//
// Created by lucca on 22/12/2024.
//
#include <stdio.h>


int main() {
    int ch,nmbr[15],temp;
    for (int i = 0;i<15;i++) {
        nmbr[i] = getchar();
        temp = 1;
        switch (nmbr[i]) {
            case '-': break;
            case 'A' + 23: case 'A' + 22: case 'A' + 21: temp++;
            case 'A' + 20: case 'A' + 19: case 'A' + 18: temp++;
            case 'A' + 17: case 'A' + 16: case 'A' + 15: temp++;
            case 'A' + 14: case 'A' + 13: case 'A' + 12: temp++;
            case 'A' + 11: case 'A' + 10: case 'A' + 9: temp++;
            case 'A' + 8:  case 'A' + 7:  case 'A' + 6: temp++;
            case 'A' + 5:  case 'A' + 4:  case 'A' + 3: temp++;
            case 'A' + 2:  case 'A' + 1:  case 'A' + 0: temp++;

        }
        if (temp == 1) {
            continue;
        }
        else {
            nmbr[i] = temp+48;
        }
    }
    printf("\n");
    for (int i = 0;i<15;i++) {
        printf("%c",nmbr[i]);
    }


}