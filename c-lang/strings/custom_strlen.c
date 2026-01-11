#include <stdio.h>

int my_strlen(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

int main()
{
    char name[30] = "aranyaadheu";

    printf("%d\n", my_strlen(name));

    return 0;
}