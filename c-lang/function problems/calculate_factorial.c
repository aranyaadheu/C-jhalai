#include <stdio.h>

// a function that calculates the factorial of a non-negative integer.

long long factorial(int n){
    if(n < 0) return -1;
    if(n == 0 || n == 1){
        return 1;
    }
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int main(){
    
    printf("Enter a number to check its factorial: ");
    int num;
    scanf("%d", &num);

    printf("Factorial of %d is %lld", num, factorial(num));
    
    return 0;
}
