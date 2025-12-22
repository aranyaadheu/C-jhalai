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

    char text[] = "C programming";
    int len = strlen(text);
    printf("Length: %d", len);

    return 0;
}
