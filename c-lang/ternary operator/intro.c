#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ternary operator ? = shorthand for if-else statements

    // (condition) ? value_if_true : value_if_false;

    /*int x = 50; 
    int y = 10;

    int max = (x > y) ? x : y;

    printf("%d", max);
    */

    //bool isOnline = false;

    //printf("%s", (isOnline) ? "Online" : "Offline");

    //int num = 7;

    //printf("%d is %s", num, (num % 2 == 0)  ? "Even" : "Odd");

    //int age = 18;

    //printf("%s", (age >= 18) ? "adult" : "child");

    int hours = 12;
    int minutes = 30;

    printf("%d %d %s", hours, minutes, (hours < 12) ? "AM" : "PM");

    return 0;
}