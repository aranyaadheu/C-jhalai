#include <stdio.h>
// count digits in a number

int countDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digits = %d\n", countDigits(n));

    return 0;
}