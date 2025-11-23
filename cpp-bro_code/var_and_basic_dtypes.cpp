#include <iostream>

int main(){
    // declaration - assignment

    int x; // dec
    x = 10; //assign
    int y = 5;
    int age = 21;

    int sum = x + y;
    // double includes decimal numbers
    double pie = 3.1416;
    double gpa = 3.75;

    // single char

    char grade = 'A';
    char initial = 'C';

    //boolean (t or f)

    bool student = true;
    bool power = true; //false
    bool forSale = true;

    //string (objects that represent a sequence of text)

    std::string name = "aranyaadheu";
    std::string food  = "tehari";
    std::string dayofweek = "sunday";

    std::cout << name << '\n';
    std::cout << food << '\n';
    std::cout << dayofweek << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    std::cout << pie << '\n';
    std::cout << gpa << '\n';

    std:: cout << grade << '\n';
    std::cout << initial << '\n';

    return 0;
}