#include <stdio.h>

// a 2d array where rows are students and columns are subject

int main()
{
    int marks[5][3];
    for(int i = 0; i < 5; i++)
    {
        int total = 0;
        printf("Enter 3 marks for student %d: ", i + 1);
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
            total += marks[i][j];
        }
        printf("Total for student %d: %d\n", i + 1, total);
    }

    return 0;
}