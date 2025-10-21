#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("%d is an Even number.\n", x);
    } 
    else if(x % 2 == 1){
        printf("%d is a Odd number.\n", x);
    }
    else{
        printf("The number is ZERO.\n");
    }

    return 0;
}

