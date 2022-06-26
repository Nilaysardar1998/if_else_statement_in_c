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
    
    return 0;
}
