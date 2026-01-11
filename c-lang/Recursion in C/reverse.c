#include <stdio.h>

int reverse(int n, int rev){
    if(n==0) return rev;
    return reverse (n/10, rev * 10 + n % 10);
}

int main()
{
    int num = 1234;
    int reversed = reverse(num, 0);
    printf("Reversed = %d\n", reversed);

    return 0;
}