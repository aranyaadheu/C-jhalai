#include <iostream>
#include <vector>

//using namespace std;

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t; 
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    // typedef = reserved keyword used to create an additional name 
    //          (aliases) for another data type. 
    //           New identifieer for an existing type
    //           helps with readability and reduces typos. 
    //           Use when there is a clear benefit
    //          Replaced with 'using' (work bettwe w/ templates) 

    // pairlist_t pairlist;

    text_t firstName = "aranyaadheu";
    number_t age = 21;
    
    std::cout << firstName << std::endl;
    std::cout << age << "\n";

    return 0;
}