// finding out if a given number is negative
// positive or zero using if-else
#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if(x > 0){
        printf("%d is a positive number.\n", x);
    }
    else if(x < 0){
        printf("%d is a negative number.\n", x);
    }
    else{
        printf("The number is ZERO!");
    }

    return 0;
}

