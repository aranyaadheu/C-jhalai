#include <stdio.h>
// Input a 4x4 matrix and print its transpose.

int main()
{
    int mat[4][4];
    printf("Enter 16 elements for a 4x4 matrix:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Transpose:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", mat[j][i]);
            
        }
        printf("\n");
    }

    return 0;
}