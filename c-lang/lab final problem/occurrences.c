#include <stdio.h>
#include <string.h>

// 1. Write a C-program to search all occurrences of a character in a string.
/*
    Input:
    Input string: I love programming
    Input character to search: o
    Output:
    'o' found at index: 3, 9
*/

int main()
{
    char str[100], toSearch;
    int i = 0;

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    printf("Input string: ");
    printf("%s", str);

    printf("Input character to search: ");
    scanf(" %c", &toSearch);

    printf(" '%c' found at index: ", toSearch);

    while (str[i] != '\0')
    {
        if(str[i] == toSearch)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

