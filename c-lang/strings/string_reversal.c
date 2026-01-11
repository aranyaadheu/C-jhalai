#include <stdio.h>
#include <string.h>

void reverse(char str[]){
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

}

int main()
{
    char name[30] = "code";
    reverse(name);
    printf("%s\n", name);

    return 0;
}