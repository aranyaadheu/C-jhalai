#include <stdio.h>
#include <windows.h> // windows

int main(){
    
    // for loop = Repeat some code a limited # of times
    //            for (initialization; Condition; Update)

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR\n");

    return 0;
}