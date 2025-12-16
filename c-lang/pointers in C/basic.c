#include <stdio.h>

int main(){

    int x = 5; 
    int y = 10;
    int *p; // * dereference operator. points to the value of particular variable.

    p = &x; // address-of operator

    printf("Value of x = %d\n", x); // 5
    
    printf("\nAddress of x = %u\n", &x); // decimal value; memory address use (%u), indicates positive integers. 
    printf("Address of x = %x\n", &x); // hex value, (%x)

    printf("\nAddress of p = %u\n", p);
    printf("Address of p = %x\n", p);

    printf("Content of p = %d\n", *p);

    printf("\nAddress of p variable = %u\n", &p);
    printf("Address of p variable = %x\n", &p);

    return 0;
}