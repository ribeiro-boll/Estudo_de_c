#include <stdio.h>
#include <ctype.h>
int main(){
    int ch,size=0,arr[2000000]={[0]=0},cond=1;
    while ((ch = getchar())!=10) {
        switch (toupper(ch)) {
            case'A': case'B': case'C': case'D': case'E': case'F': case'G': case'H': case'I': 
            case'J': case'K': case'L': case'M': case'N': case'O': case'P': case'Q': case'R': 
            case'S': case'T': case'U': case'V': case'X': case'Y': case'W': case'Z': 
            arr[size] = toupper(ch); size++; break;
        }
    }
    printf("%d\n",size);
    int *low = &arr[0],*high = &arr[size-1],*val1 = &arr[0];
    for (int i = 0;i < size/2;i++){
        printf("low: %li     high: %li\n",(low-val1),(high-val1)); // ver se o Low e o High funcionam
        if (*low == *high){
            low++;
            high--;
            continue;
        }
        else {
            cond = 0;
            break;
        }
    }
    if (cond){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
} 