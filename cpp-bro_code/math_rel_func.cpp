#include <iostream>
#include <cmath>

int main()
{
    double x = 3.99;
    double y = 4;
    double z;
    double p;
    double q;
    // z = std::max(x, y);
    // p = std::min(x, y);

    // z = ceil(x); // rounding up function
    z = floor(x); // rounding down function

    //z = pow(2, 3); power function
    p = sqrt(25);
    q = abs(-100); // absolute value

    std::cout << z << "\n";
    std::cout << p << "\n";
    std::cout << q << "\n";

    return 0;
}