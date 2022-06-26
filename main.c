#include <stdio.h>

int main() {
    //if-else statement in C.
    int x = 10, y = 20;
    if (x > y){
        printf("Hello world...!\n");
    }else{
        printf("X is not greater-then Y\n");
    }
    //if-else, else-if, else combination statement.
    if(x < y){
        printf("Hello world...!\n");
    } else if (x > y){
        printf("Hello country");
    } else{
        printf("State level");
    }
    //Nested if-else
    if(x < y){
        int a = 1, b = 2;
        int result = a + b;
        if (result == 3){
            printf("Result = %d", result);
        }else if (result == 4){
            printf("Result = %d", result);
        }
    } else{
        printf("X is greater then y");
    }
    return 0;
}
