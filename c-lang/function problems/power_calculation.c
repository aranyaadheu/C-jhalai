#include <stdio.h>
#include <math.h>
// a function that calculates the power of a number (base raised to the exponent).

double power(double base, int exp){
    if(exp == 0) return 1.0;
    double result = 1.0;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    double base;
    int exp;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter the exponential of the base number: ");
    scanf("%d", &exp);

    printf("%.1f raise to te power of %d is: %.1f\n", base, exp, power(base, exp));

    return 0;
}