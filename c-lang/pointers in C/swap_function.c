#include <stdio.h>

void swapping(int *ptr1, int *ptr2)
{
    int temp_var;
    temp_var = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp_var;

}

int main(){

    int x= 10, y = 20;
    
    printf("before swapping\n x = %d, y = %d\n", x, y);

    swapping(&x, &y);

    printf("\nAfter Swapping\n x = %d, y = %d", x, y);
    
    return 0;
}