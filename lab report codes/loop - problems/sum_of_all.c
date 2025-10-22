#include <stdio.h>

int main(){
    int i, sum = 0;

    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("\nSum of total numbers = %d", sum);

    return 0;
}

