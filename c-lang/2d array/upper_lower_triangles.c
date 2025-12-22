#include <stdio.h>

// upper triangle: Elements where j >= i.
// lower triangle: Elements where j <= i.

int main()
{

    int n = 3, mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Upper triangle:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            (j >= i) ? printf("%d ", mat[i][j]) : printf(" ");
        }
        printf("\n");
    }

    printf("Lower triangle:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            (j <= i) ? printf("%d ", mat[i][j]) : printf(" ");
        }
        printf("\n");
    }

    return 0;
}