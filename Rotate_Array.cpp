// Rotate array of size n by d (say 2) elements
#include <iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

int rotateArrayM1(int arr[],int d, int n){
    // Method 1: Using temp array
    int temp[d];
    for (int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    for (int i=0; i<(n-d); i++){
        arr[i] = arr[i+d];
    }

    for (int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }
    return 0;
}

int rotateLeftByOne(int arr[], int n){
    // Method 2: Rotate one element at a time
    int temp = arr[0];
    for (int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    
    return 0;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    cout << "The given array is:" << endl;
    printArray(arr, n);

    // Method 1: Using temp array => time: O(n), auxiliary space: O(n)
    rotateArrayM1(arr, d, n);

    cout << "The rotated array by method 1 is:" << endl;
    printArray(arr, n);

    // Method 2: Rotate one step at a time
    for (int i=0; i<d; i++){
        rotateLeftByOne(arr, n);
    }

    cout << "The rotated array by method 2 is:" << endl;
    printArray(arr, n);

    return 0;
}