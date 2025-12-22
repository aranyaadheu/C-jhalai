#include <stdio.h>

int main()
{
    int A[2][3] = {{1, 2, 3}, 
                   {4, 5, 6}};
    int B[2][3] = {{7, 8, 9},
                   {1, 2, 3}};
    int Sum[2][3];


    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}