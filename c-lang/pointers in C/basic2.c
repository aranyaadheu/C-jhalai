#include <stdio.h>

int main(){
    
    int x = 10, y = 20, z = 30;

    int *ptr; // single pointer variable, to access the values of three different integer variables. 

    ptr = &x; // address-of operator
    printf("x = %d\n", *ptr);

    ptr = &y; // address-of operator
    printf("y = %d\n", *ptr);

    ptr = &z; // address-of operator
    printf("z = %d\n", *ptr);


    return 0;
}