#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\test.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido
//Created Date: Wednesday, December 25th 2024, 7:23:40 am
//Author: lucca
//
//Copyright (c) 2024 Your Company
//

//#include <stdio.h>

// #define DAYUBE 3
// #define PEDRO_JEGGY 24
// #define RABO_GOZADO 30
// #define MIGUEL 35
// #define MARIA 42
// #define THORUGO 50
// #define BOLOTA 60
// #define PETTI 72
// #define PAULO_PEIDO 85
// #define MASAKI 100
// #define GAY PEDRO_JEGGY
// // Busca binaria para gastar jeggy
// int main(){
//     int pizzanil[] = {DAYUBE, PEDRO_JEGGY, RABO_GOZADO, MIGUEL, MARIA, THORUGO, BOLOTA, PETTI, PAULO_PEIDO, MASAKI};
//     char *names[] = {"DAYUBE", "PEDRO_JEGGY", "RABO_GOZADO", "MIGUEL", "MARIA", "THORUGO", "BOLOTA", "PETTI", "PAULO_PEIDO", "MASAKI"};
//     int mid, i=0,j=9, index = 1;
//     while (i<j) {
//         printf("%d\n",index++);
//         mid = (i+(j-i)/2);
//         if (pizzanil[mid] < GAY){
//             i = mid+1;
//         }
//         else {
//             j = mid;
//         }
//     }
//     printf("\n");
//     printf("%s is Gay",names[i]);
//     printf("\n");
//     return 0;
//
// void sort(int* arr,int len){
//     if (len==0){
//         return;
//     }
//     else{
//         int max = -2100000;
//         int index;    
//         for(int i =0;i<len;i++){
//             if (arr[i]>=max){
//                 max = arr[i];
//                 index = i;
//             }
//         }
//         int temp = arr[len-1];
//         arr[len-1] = max;
//         arr[index] = temp;
//         sort(arr,len-1);
//     }
// }

// int main(){
//     int arr[10];
//     printf("Escreva a sequencia de numeros:\n");
//     for (int i = 0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0;i<10;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     sort(arr,10);
//     for (int i = 0;i<10;i++){
//         printf("%d\t",arr[i]);
//     }
// }

// #include <stdio.h>

// void teste(void){
//     static int teste = 9;
//     return;
// }

// int main(){
//     teste();
//     printf("%d",teste);
// }


// teste de ponteiros:
// #include <stdio.h>
// void calc_area(int* b,int* h){
//     printf("%d", *b * *h);
// }

// int getnum_dec(){
//     int temp2 = 0,ch;
//     while ((ch = getchar())!=10){
//         temp2 = temp2*10 + (ch - '0');
//     }
//     return temp2;
// }

// void assign(int *address){
//     *address = getnum_dec();
//     return;
// }

// int main(){
//     int val1,val2;
    
//     assign(&val1);
//     assign(&val2);
//     printf("%d   %d\n",val1,val2);
//     calc_area(&val1, &val2);
// }
// #include <stdio.h>
// void swap(int *p,int *q){
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }

// int main(){
//     int val1 =9, val2 = 12;
//     int* p = &val1,*q = &val2;
//     printf("%d    %d",*p,*q);
//     swap(p, q);
//     printf("\n%d    %d",*p,*q);
    
// }
// #include <string.h>
// #include <stdio.h>
// int main(){
//     char str[20] = "Ola mundo!";
//     int len = strlen(str);
//     char str_teste[len];
//     char neg[30];
//     for (int i =0; i<=len ; i++){
//         if (i == len-2){
//             str_teste[i] = '\0';
//         }
//         str_teste[i] = '.';
//     }
//     printf("%s          %d\n",str,len);
//     len = strlen(str_teste);
//     printf("%s          %d\n",str_teste,len);
//     printf("%s          %s\n",str_teste,str);
//     printf("%s          %s\n",str_teste,str);
//     strcpy(neg, str);
//     printf("%s          %s\n",str,neg);
// }
// #include <string.h>
// #include <stdio.h>
// int main(){
//     char ch[20];
    
//     fgets(ch,20,stdin);
//     int tst = strlen(ch);
//     printf("%d",tst-1);
// }
// #include <stdio.h>
// struct pessoa {
     
//     int idade,cpf;
//     char nome[50];
// };

// int main(){
//     char ch;
//     struct pessoa lucca;
//     int *idade = &lucca.idade;
//     char *nome = lucca.nome;
//     int *cpf = &lucca.cpf;
//     scanf("%s",nome);
//     scanf("%d",idade);
//     scanf("%d",cpf);
//     printf("nome: %s   cpf:%d   idade: %d",lucca.nome,*cpf,*idade);

// }
// #include <stdio.h>
// #include <limits.h>



// void qsort(int *arr,long int len,int true_lenght){
//     for(int i =0;i<true_lenght;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     if (0 == len){
//         return;
//     }
//     int max_int = arr[0],index_largest=0;
//     for (int i =0 ;i<len;i++){
//         if (arr[i]>=max_int){
//             index_largest = i;
//             max_int = arr[i];
//         }
//     }
//     int temp = arr[len-1];
//     arr[len-1] = max_int;
//     arr[index_largest]=temp;
//     qsort(arr, len-1, true_lenght);
// }


// int main(){
//     int sequencia[] = {2,6,1,7,9,4,6,89,4,7,9,4123,567,996,44,78,2,1};
//     long int lenght = (sizeof(sequencia)/4);
//     for(int i =0;i<lenght;i++){
//         printf("%d\t",sequencia[i]);
//     }
//     printf("\n");
//     qsort(sequencia,lenght,lenght);
//     for(int i =0;i<lenght;i++){
//         printf("%d\t",sequencia[i]);
//     }
// }

// int main(){
//     int *p = malloc(1000000000000000000);
//     if (!p){
//         printf("nao foi");
//     }
//     else{
//         printf("foi");
//     }
// }


// struct node {
//     int valor;
//     struct node *next; 
// };
// struct node *first = NULL;
// struct node *new_node;

// int main(){
// }

