#include <stdio.h>

int main(){
    int i, odd = 0;

    for (i = 0; i <= 10; i++)
    {
        if(i % 2 == 1){
            printf("%d\n", i);
            odd = odd + i;
        }
    }
    printf("\nSum of total odd numbers = %d", odd);

    return 0;
}

