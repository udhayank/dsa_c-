#include <iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

int reverseArray(int arr[], int start, int end){
    while (start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    
    cout << "The given array is:" << endl;
    printArray(arr,n);
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);

    cout << "The rotated array is:" << endl;
    printArray(arr,n);    

    return 0;
}