#include <iostream>

using namespace std;
int main(){

    // ternary operator ?: = replacement to an if/else statement. 
    // condition ? expression1 : expression2;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    num % 2 == 1 ? cout << "is ODD" : cout << "is EVEN";


    return 0;
}