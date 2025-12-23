#include <stdio.h>
#include <string.h>

int main(){

    char ch[10] = "ayman";
    char ch1[10];

    char ch2[20] = "Abdul ";
    char ch3[20] = "Karim";

/*
    // printingwith %s
    printf("%s \n", ch);

    // printing with %c
    for(int i = 0; ch[i] != '\0'; i++){
        printf("%c", ch[i]);
    }


    // copying with function

    strcpy(ch1, ch);

    // copying with loop;

    int i;
    
    for(i = 0; ch[i] != '\0'; i++){
        ch1[i] = ch[i];
    }

    ch1[i] = '\0';
    printf("ch arrray after copuing: %s\n", ch);
    printf("ch1 array after copying: %s\n", ch1);

    // length of a string;

    int len = strlen(ch);
    printf("length using fucntion is: %d\n", len);

    // length using loop
    int n = 0;
    for(int i = 0; ch[i] != '\0'; i++){
        n++;
    }
    printf("Length using loop is: %d\n", n);
*/
    // string adding one with another

    strcat(ch2, ch3);
    printf("ch2 array after using strcat fucntion: %s\n", ch2);

    // swap string

/*    char temp[20];
    strcpy(temp, ch2);
    strcpy(ch2, ch3);
    strcpy(ch3, temp);
    printf("First ch array after swap: %s\n", ch2);
    printf("Second ch array after swap:  %s\n", ch3);

*/

    return 0;
}