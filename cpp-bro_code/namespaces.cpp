#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    /* 
    Namespace = provides a soln for preventing name conflicts
    in large projects. Each entity needs a unique name. 
    A namespace allows for identically named entities
    as long as the namespaces are different.
    */

    // using namespace first;

    using namespace std;

    string name = "aranyaadheu";

    int x = 0;

    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    cout << "hello " << name;

    return 0;
}