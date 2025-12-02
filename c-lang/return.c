#include <stdio.h>

// The void keyword means the function returns nothing.

double cube(double num){

    return num * num * num;
}

double square(double num){
    
    return num * num;
}

int main(){

    // return = returns a value back to where you call a function
    
    //double x = square(2.1);
    //double y = square(3.2);
    double z = square(4.3);

    double x = cube(3);
    double y = cube(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}