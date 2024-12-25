//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_7\Exercicio_15.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\modulo_7
//Created Date: Wednesday, December 25th 2024, 10:22:35 am
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

#pragma warning(disable: 4996)
#include <stdio.h>

int main(){
    int shift,palavra[31],ch,limite = 0;
    printf("enter message to be decrypted: %c",32);
    while ((ch = getchar())!=10 && limite<30){
        palavra[limite] = ch;
        limite++;
    }
    printf("enter shift ammount (1-25): %c",32);
    scanf("%d",&shift);

    for (int i=0;i<limite;i++){

        // (((palavra[i]+shift)-97) %26)+97 -> primeiro, palavra[i] é somado com o shift, em seguida, a soma é convertido para a logica
        // do alfabeto, diminuimos por 97 ou 65 que (representa respectivamente a e A). Tendo 26 letras no alfabeto, calculamos o resto da soma por 26
        // pois caso o resultado da soma - 65 ou 97, de mais que 26, ele voltara para o limite de < 26
        // em seguida, é somado 97 ou 65 novamente, para mudar a representação de volta para a tabela ascii, para podermos printar o numero resultante como letra 

        if (palavra[i]>96 && palavra[i]<122){
            palavra[i] = (((palavra[i]+shift)-97) %26)+97;
        }
        else if (palavra[i]>64 && palavra[i]<91){
            palavra[i] = (((palavra[i]+shift)-65) %26)+65;
        }
    
        printf("Encrypted message: %c",32);
        for (int i=0;i<limite;i++){
            printf("%c",palavra[i]);
        }
    }
}