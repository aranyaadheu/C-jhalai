#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 45, 17, 23};
    int max = arr[0];
    int lowest = arr[0];
    for(int i = 1; i <= 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Largest element in the array: %d\n", max);

    for(int i = 0; i >= 1; i--){
        if(arr[i] < lowest){
            lowest = arr[i];
        }
    }

    printf("lowest element: %d\n", lowest);

    return 0;
}