#include <stdio.h>
// a matrix is symmetric if mat[i][j] == mat[j][i] for all elements

int main()
{
    int n = 3, mat[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int isSym = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j] != mat[j][i]) isSym = 0;
        }
    }

    if(isSym){
        printf("Symmetric\n");
    } else{
        printf("Not Symmetric\n");
    }
    
    return 0;
}