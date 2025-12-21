#include <stdio.h>
//  Input a 3x3 matrix and print its diagonal elements.
int main()
{
    int mat[3][3];
    printf("Enter 9 elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Diagonal elements: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", mat[i][i]);
    }

    return 0;
}