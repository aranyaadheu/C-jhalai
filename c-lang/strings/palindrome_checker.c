#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]){
    int i = 0, j = strlen(str) - 1;

    while(i < j){
        if(str[i] != str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char name[50] = "madam";
    if(isPalindrome(name)){
        printf("%s is a Palindrome.\n", name);
    } else{
        printf("%s is NOT a Palindrome.\n", name);
    }
   

    return 0;
}