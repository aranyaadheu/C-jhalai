#include <stdio.h>

typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, 
    WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, 
    SATURDAY = 7
    // 0, 1, 2, 3, 4, 5 ...
}day;

int main()
{
    // enum = A user-defined data type that consists
    //        of a set of named integer constants/
    //        Benefit: Replaces numbers with readable names
    // enumerations. 
    
    // SUNDAY = 0;
    // MONDAY = 1;
    // TUESDAY = 2;

    day today = FRIDAY;

    if(today == SUNDAY || today == SATURDAY)
    {
        printf("It's weekend!");
    }
    else
    {
        printf("It's a weekday.");
    }

    //printf("%d", today);

    return 0;
}