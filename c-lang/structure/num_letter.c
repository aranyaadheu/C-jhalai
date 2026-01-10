#include <stdio.h>
#include <string.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{

    struct myStructure s1 = {13, 'B', "Some text"};
    //strcpy(s1.myString , "Some text");
    
    s1.myNum = 30;
    s1.myLetter = 'C';

    strcpy(s1.myString, "Something else");

    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);



    /*struct myStructure s1, s2;

    s1.myNum = 14;
    s1.myLetter = 'C';

    s2.myNum = 21;
    s2.myLetter = 'A';

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    printf("His number: %d\n", s2.myNum);
    printf("His letter: %c\n", s2.myLetter);
    */
    /*s.myNum = 21;
    s.myLetter = 'A';

    printf("My number: %d\n", s.myNum);
    printf("My letter: %c\n", s.myLetter);
    */

    return 0;
}