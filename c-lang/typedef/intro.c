#include <stdio.h>

typedef int num;
typedef char String[50];

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //          Helps simplify complex types and improves code readability

    //          typedef existing_type new_name; 

    num x = 3;
    num y = 4;
    num z = x + y;

    String name = "aranyaadheu";

    printf("%d", z);
    printf("\n%s", name);

    return 0;
}