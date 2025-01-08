
#include <stdio.h>
#include <stdbool.h>
#define lenght 100

int curr=0,nums[lenght];



bool is_empty(){
    return (curr==1);
}

bool is_full(){
    return (curr==lenght);
}

void push(int ch){
    if (is_full()){
        printf("data overflow!");
    }
    else{
        nums[curr] = ch;
        curr++;
    }
}

int calc(int ch){
    switch (ch) {
        case '+':
            if (is_empty()){
                printf("not enough numbers\n"); break;
            }
            else{
                nums[curr-2] = nums[curr-2] + nums[curr-1];curr--;break;
            }

        case '-':
            if (is_empty()){
                printf("not enough numbers\n"); break;
            }
            else{
                nums[curr-2] = nums[curr-2] - nums[curr-1];curr--;break;
            }

        case '*':
            if (is_empty()){
                printf("not enough numbers\n"); break;
            }
            else{
                nums[curr-2] = nums[curr-2] * nums[curr-1];curr--;break;
            }

        case '/':
            if (is_empty()){
                printf("not enough numbers\n"); break;
            }
            else{
                nums[curr-2] = nums[curr-2] / nums[curr-1];curr--;break;
            }
    }
}

int main(){
    int ch,decimal = 0,cond=1,last_digit;
    printf("Enter the calculation: %c",32);
    while ((ch = getchar())!=10 && cond){
        printf("curr: %d  ||  nums ultimo:%d || num atual : %d\n",curr,nums[0],nums[curr]);
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            calc(ch);
        }
        else{
            switch (ch) {
                case '=':
                    printf("\nnumber: %d",nums[0]);
                    break;
                case ' ': 
                        if (last_digit == '+' || last_digit == '-' || last_digit == '*' || last_digit == '/'){
                            break;
                        }   
                        else{
                            push(decimal);decimal = 0;
                            break;
                        }
                case '0'+0:case '0'+1:case '0'+2:case '0'+3:
                case '0'+4:case '0'+5:case '0'+6:case '0'+7:
                case '0'+8:case '0'+9: 
                    decimal = decimal*10 + (ch - '0');break;
                default:printf("operacao invalida!");cond = 0;break;
            }
        }
    last_digit = ch;
    }
    return 0;
}
