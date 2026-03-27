#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int item, int l, int h){

    while(l<h){
        int mid = (l+h)/2;
        if(arr[mid]==item) return mid;
        else if(arr[mid]<item) l = mid+1;
        else h=mid-1;
    }

    return -1;

}

int main(){

    int arr[] = {3, 5, 9, 12, 16, 17, 20, 44, 88, 90, 97, 99};
    int n = sizeof(arr)/sizeof(int);
    int item = 16;

    int loc = binSearch(arr, item, 0, n-1);
    if(loc==1) cout << "Element not found" << endl;
    else cout << "Element found at loc: " << loc << endl;


    return 0;
}