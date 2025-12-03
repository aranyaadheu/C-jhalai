#include <stdio.h>

int sum_array(int arr[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += arr[i];
    }
    return total;
}

int main(){
    int numbers[] = {10, 5, 2, 8};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int result = sum_array(numbers, n);
    printf("The sum of array elements is: %d\n", result);
    
    return 0;
}