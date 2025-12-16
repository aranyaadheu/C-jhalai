#include <stdio.h>

int stringLength(char *str){

    char *start = str;

    while (*str != '\0')
    {
        str++;
    }
    
    return str - start;
}

int main(){
    char name[] = "aranyaadheu";
    printf("Length: %d", stringLength(name));

    return 0;
}