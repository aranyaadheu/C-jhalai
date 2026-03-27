#include <iostream>

using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 100){
        cout << "You are too old to enter this site.";
    }
    else if(age < 0){
        cout << "You aren't born yet!";
    }
    else if(age >= 18){
        cout << "Welcome to the site!";
    }
    else{
        cout << "You are not welcome.";
    }

    return 0;
}