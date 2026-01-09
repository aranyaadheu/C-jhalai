#include <stdio.h>

/*
2. Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.

Conditions:
    Basic Salary <= 10000 : HRA = 20%, DA = 80%

    Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%

    Basic Salary >= 20001 : HRA = 30%, DA = 95%

Example Case
Input:

    Input basic salary of an employee: 22000

Output:

    Gross salary = 44000
*/

int main()
{
    float basic, gross, hra, da;

    printf("Input basic salary of an employee: ");
    scanf("%f", &basic);

    if(basic <= 10000)
    {
        hra = basic * 0.20;
        da = basic * 0.80;
    }
    else if(basic <= 20000)
    {
        hra = basic * 0.25;
        da = basic * 0.90;
    }
    else{
        hra = basic * 0.30;
        da = basic * 0.95;
    }

    gross = basic + hra + da;

    printf("Gross salary = %.0f", gross);

    return 0;
}