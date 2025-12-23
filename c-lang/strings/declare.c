#include <stdio.h>
#include <string.h>
// A string is an array of characters ending with '\0'.

int main()
{
    /*char name[20];
    scanf("%s", name);
    printf("Name: %s\n", name);
    */

    // string i/o using fgets

    /*char sentence[50];
    fgets(sentence, sizeof(sentence), stdin); // reads spaces safely. 
    printf("You entered: %s", sentence);*/

    // finding length using strlen

    /*char text[] = "C programming";
    int len = strlen(text);
    printf("Length: %d", len);*/

    // copying a string u/ strcpy

    /*char src[] = "Hello";

    char dest[20];

    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    */

    // concatenating strings (strcat)

    /*char first[20] = "Hello ";
    char second[] = "world!";

    strcat(first, second);
    printf("%s\n", first); 
    */

    // comparing two strings

    char a[] = "apple";
    char b[] = "banana";

    if(strcmp(a, b) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}
