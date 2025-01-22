#include <stdio.h>
#include <string.h>
#include <limits.h>
int main(){
    int min=INT_MAX,max=INT_MIN,cond = 1;
    char ch[20],ch_min[20],ch_max[20];
    while (cond){
        fgets(ch,20,stdin);
        int len = strlen(ch)-1;
        if (len == 4){
            cond =0;
        }
        if (len > max){
            max = len;
            strcpy(ch_max, ch);
        }
        if (len < min){
            min = len;
            strcpy(ch_min, ch);
        }
    }
    printf("Smallest word: %s\nBiggest word: %s",ch_min,ch_max);
    return 0;
}