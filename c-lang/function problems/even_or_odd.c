#include <stdio.h>

void checkEvenOdd(int num){
    
    if(num%2==0){
        printf("%d is Even.\n", num);
    }
    else{
        printf("%d is Odd.\n", num);
    }
}

int main(){

    checkEvenOdd(10);
    checkEvenOdd(7);
    checkEvenOdd(6);
    checkEvenOdd(3);
    checkEvenOdd(27);
    checkEvenOdd(28);

    return 0;
}