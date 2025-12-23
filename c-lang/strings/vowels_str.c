#include <stdio.h>
// counting vowels in a string.
int main()
{
    char str[101];
    printf("Enter a word to check vowels in it: ");
    scanf("%s", &str); // %c only reads a single char // %s reads the whole word, a string. 
    int count = 0; // when using %s, don't need & symbol 

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    printf("Vowels in %s : %d\n", str, count);

    return 0;
}