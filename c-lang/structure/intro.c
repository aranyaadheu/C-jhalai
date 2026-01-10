#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    /*
    a structure (or struct) is a user-defined data type
    that allows you to group variables of different types under a single name

    struct, as a container of different items. 
    */
    // a variable of type 'struct Student
    struct Student s;

    strcpy(s.name, "John Doe");
    s.roll = 101;
    s.marks = 92.5;

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);



    return 0;
}