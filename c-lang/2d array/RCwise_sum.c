#include <stdio.h>
// Find row-wise and column-wise sums of a 2D array.

int main()
{
    int r = 3, c = 3, mat[3][3] = {{1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9}};
    for(int i = 0; i < r; i++){
        int rSum = 0;
        for(int j = 0; j < c; j++){
            rSum += mat[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rSum);
    }

    for(int j = 0; j < c; j++){
        int cSum = 0;
        for(int i = 0; i < r; i++)
        {
            cSum += mat[i][j];
        }
        printf("Sum of Col %d = %d\n", j + 1, cSum);
    }

    return 0;
}