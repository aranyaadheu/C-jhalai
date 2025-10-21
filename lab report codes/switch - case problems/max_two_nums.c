#include <stdio.h>

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch(x > y){
        case 1:
            printf("Maximum number is = %d\n", x);
            break;
        case 0:
            if(x == y){
                printf("Both number are equal: %d = %d\n", x, y);
            } 
            else{
                printf("Maximum number is = %d\n", y);
            }
            break;

    }

    return 0;
}

