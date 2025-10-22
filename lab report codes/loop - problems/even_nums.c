// printing even numbers from 1 - 100 
// using for loop
#include <stdio.h>

int main(){
    int i;
    
    for (i = 0; i <= 100; i++)
    {
        if(i % 2 == 0){
            printf("%4d", i);
        }
    }
    
    return 0;
}

