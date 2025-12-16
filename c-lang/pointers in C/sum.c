#include <stdio.h>

int main(){

    int x = 10, y = 20, sum;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum =*ptr1 + *ptr2;

    printf("Sum of %d + %d = %d", x, y, sum);

    return 0;
}