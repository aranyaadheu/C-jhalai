#include <stdio.h>
#include <stdbool.h>
// a function that returns 1 if a number is prime, and 0 otherwise.

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int p1 = 17;
    int p2 = 15;
    printf("%d is prime? %s\n", p1, isPrime(p1) ? "Yes" : "No");
    printf("%d is prime? %s\n", p2, isPrime(p2) ? "Yes" : "No");

    return 0;
}