#include <stdio.h>
// a function that takes three floating-point numbers and returns the largest one.

float findMax(float n1, float n2, float n3){
    
    float max = n1;
    if(n2 > max){
        max = n2;
    }
    if(n3 > max){
        max = n3;
    }
    return max;
}

int main(){
    
    printf("Enter three numbers to find the maximum: ");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float largest = findMax(a, b, c);
    printf("The maximum number is : %.1f\n", largest);

    return 0;
}