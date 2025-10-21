// check alphabet or character.
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("%c is an Alphabet.\n", ch);
    } else {
        printf("%c is not an Alphabet character.\n", ch);
    }

    return 0;
}

