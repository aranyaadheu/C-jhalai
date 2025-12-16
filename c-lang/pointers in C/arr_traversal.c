#include <stdio.h>

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int length = 5;

    printf("Array elements using pointers:\n");
    for(int i = 0; i < length; i++){
        printf("%d ", *(ptr + i ));
    }

    return 0;
}