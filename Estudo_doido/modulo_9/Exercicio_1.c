
#include <stdio.h>
#include <stdbool.h>
#define LENGHT 100


int arr[LENGHT];
int top=0;


bool is_full(void){
    return top == LENGHT;
}

bool is_empty(void){
    return top == LENGHT;
}

void stack_underflow(void){
    printf("empty array!");
}

void stack_overflow(void){
    printf("array is full!");
}

void make_empty(void){
    top = 0;
}

void push(int ch){
    if (is_full()){
        stack_overflow();
    }
    else{
        arr[top] = ch;
        top++;
    }
}


int pop(void){
    if (is_empty()) {
        stack_underflow();
        return ' ';
    }
    else{
        top--;
        int temp = arr[top];
        arr[top] = 0;
        
        return temp;
    }
}




int main(){
    int num,cond=1;
    printf("Enter parentheses and/or braces:%c",32);
    while ((num = getchar())!=10 && cond){
        switch (num) {
            case 40: push(num);break;
            case 91: push(num);break;
            case 123: push(num);break;

            case 41:
                if (pop() == 40){
                    break;
                }

                else {
                    cond = 0;
                    break;
                }
            case 93:
                if (pop() == 91){
                    break;
                }

                else {
                    cond = 0;
                    break;
                }
            case 125:
                if (pop() == 123){
                    break;
                }

                else {
                    cond = 0;
                    break;
                }

            default: cond = 0;break;
        }
    }
    if (cond == 1 && arr[0] == 0){
        printf("Parentheses/braces are nested properly :)");
    }
    else{
        printf("Parentheses/braces arent nested properly or invalid char was typed :(");
    }
}
