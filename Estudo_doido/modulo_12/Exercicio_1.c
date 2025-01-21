#include <stdio.h>
#include <stdlib.h>

int main(){
    int ch,size=0,arr[2000000]={[0]=0};
    while ((ch = getchar())!=10) {
        arr[size] = ch;
        size++;
    }
    printf("%d\n",size);
    int *low = &arr[0],*high = &arr[size-1],*val1 = low;
    for (int i = 0;i < size/2;i++){
        printf("low: %li     high: %li\n",(low-val1),((high-val1))); // ver se o Low e o High funcionam
        int temp = *low;
        *low = *high;
        *high = temp;
        low++;
        high--;
    }
    for (int i =0;i<size;i++){
        printf("%c",arr[i]);
    }
}