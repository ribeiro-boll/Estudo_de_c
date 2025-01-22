//
//Filename: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\Extra_exercicios_ponteiros\lista.c
//Path: c:\Users\lucca\OneDrive\Documentos\Estudo_de_c\Estudo_doido\Extra_exercicios_ponteiros
//Created Date: Wednesday, January 22nd 2025, 9:25:14 am
//Author: lucca
//
//Copyright (c) 2025 Your Company
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//ex 1:
// 
// int main(){
//     int n1=3,*p1 = &n1;
//     float n2=3.3,*p2 = &n2;
//     char n3='a',*p3 = &n3; 
//     printf("%d %.1f %c\n",n1,n2,n3);
//     *p1 = 2;
//     *p2 = 2.2;
//     *p3 = 'A';
//    printf("%d %.1f %c",n1,n2,n3);
// }

//ex 2:
// int main(){
//     int n1=2,n2=3,*p1 = &n1,*p2 = &n2;
//     if (p1>p2){
//         printf("%p -> p1 is bigger then %p ->p2",p1,p2);
//     }
//     else{
//         printf("%p -> p2 is bigger then %p ->p1",p2,p1);
//     }

// }

//ex 3:
// int main(){
//     int n1,n2,*p1 = &n1,*p2=&n2;
//     printf("Enter the numbers:\n");
//     scanf("%d",p1);
//     scanf("%d",p2);
//     if (p1>p2){
//         printf("the adress of %d is bigger then the adress of %d",n1,n2);
//     }
//     else{
//         printf("the adress of %d is bigger then the adress of %d",n2,n1);
//     }
// }

//ex 4:
// void func(int *p1,int *p2){
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
// int main(){
//     int n1=123,n2=4689;
//     printf("%d    %d\n",n1,n2);
//     func(&n1,&n2);
//     printf("%d    %d",n1,n2);
// }

//ex 5:
// void sort(int **arr,int size){
//     if (size == 0){
//         return;
//     }
//     int biggst_nmr = 0;
//     int nmr_index = 0;
//     for (int i = 0;i<(size);i++){
//         if ((*arr)[i]>=biggst_nmr){
//             biggst_nmr = (*arr)[i]; 
//             nmr_index = i;
//         }
//     }
//     int temp = (*arr)[(size)-1];
//     (*arr)[(size)-1] = biggst_nmr;
//     (*arr)[nmr_index] = temp;
//     sort(arr,size-1);
// }
// void append(int **arr,int *size,int n){
//     *size+=1;
//     *arr = (int *)realloc(*arr,(*size)*(int)sizeof(int));
//     (*arr)[(*size)-1] = n;
// }
// int pop(int **arr, int *size){
//     int retorno = (*arr)[(*size)-1];
//     *size -= 1;
//     *arr = realloc(*arr,(*size)*sizeof(int));
//     return retorno;
// }
// int main(){
//     int size = 1;
//     int *arr = malloc((size)*sizeof(int));
//     arr[0] = 312;
//     append(&arr,&size,41);
//     append(&arr,&size,6);
//     append(&arr,&size,98);
//     append(&arr,&size,45);
//     append(&arr,&size,0);
//     append(&arr,&size,854);
//     printf("\n");
//     for (int i=0;i<(size);i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     int n1 = pop(&arr,&size);
//     int n2 = pop(&arr,&size);
//     int n3 = pop(&arr,&size);
//     for (int i=0;i<(size);i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     printf("\nnumeros excluidos: %d %d %d\n",n1,n2,n3);
//     int teste = size;
//     printf("\n");
//     sort(&arr,teste);
//     for (int i=0;i<(size);i++){
//         printf("%d\t",arr[i]);
//     }
// }



//      malloc realloc e essas porras ai

//ex1:
// int main(){
//     int *arr = malloc(5*sizeof(int));
//     int num;
//     printf("enter 5 numbers:\n");
//     for (int i =0;i<5;i++){
//         scanf("%d",&num);
//         arr[i] = num;
//     }
//     for (int i =0; i<5;i++){
//         printf("%d\t",arr[i]);
//     }
// }

//ex 2:
// int main(){
//     int *arr;
//     int num,tamanho;

//     printf("enter the size of the array:\n");
//     scanf("%d",&tamanho);
//     arr = malloc(tamanho*sizeof(int)) ;
//     for (int i =0; i<tamanho;i++){
//         printf("enter the arr[%d] number:\n ",i);
//         scanf("%d",&num);
//         arr[i] = num; 
//     }
//     for (int i =0; i<tamanho;i++){
//         printf("%d\t",arr[i]);
//     }
// }

//ex 4:
// int main(){
//     int tamanho;
//     char *str;    
//     printf("enter the size of the array:\n");
//     scanf("%d",&tamanho);
//     str = malloc(tamanho);
//     printf("enter the phrase:\n");
//     scanf("%s",str);
//     for (int i = 0;i<tamanho;i++){
//         switch(toupper(str[i])){
//             case 'A':case'E':case'I':
//             case'O':case'U':break;
//             default: printf("%c",str[i]);break;
//         }
//     }
//     return 0;
// }

//ex5:
int main(){
       
}