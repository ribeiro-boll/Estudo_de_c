//
// Created by lucca on 23/12/2024.
//   (int)'A' = 65
#include <stdio.h>
#include <ctype.h>
int main() {
    int ch,points=0,alphabeto[26] = {alphabeto[0] = 0};
    int table[26] = {
        1, // A
        3, // B
        3, // C
        2, // D
        1, // E
        4, // F
        2, // G
        4, // H
        1, // I
        8, // J
        5, // K
        1, // L
        3, // M
        1, // N
        1, // O
        3, // P
        10, // Q
        1, // R
        1, // S
        1, // T
        1, // U
        4, // V
        4, // W
        8, // X
        4, // Y
        10  // Z
    };
    printf("Enter the word:");
    while ((ch=getchar())!=10) {
        ch = toupper(ch);
        if (ch>=65&&ch<=90){
            alphabeto[ch-65] += 1;
        }
    }
    for (int i = 0;i<26;i++) {
        points+=table[i] * alphabeto [i];
    }
    printf("Scrabble value is: %d",points);


    return 0;
}