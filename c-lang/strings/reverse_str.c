#include <stdio.h>
// reversing a string (without library)

int main()
{
    char str[] = "aranyaadheu";
    int i, len = 0;
    char temp;

    while(str[len] != '\0') len++;

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed: %s\n", str);


    return 0;
}