#include <stdio.h>

// search for an element (linear search)

int main()
{   
    int arr[] = {10, 20, 30, 40, 50};
    int key, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(int i = 0; i <= 5; i++){
        if(arr[i] == key){
            found = 1;
            printf("Elements found in index: %d\n", i);
            break;
        }
    }
    if(!found){
        printf("Element not found!\n");
    }

    return 0;
}