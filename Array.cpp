#include <iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
int printMemoryAddress(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << &arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
int main(){

    int arr1[] = {1,2,3,4};
    int arr2[10] = {2,4,6,8}; // rest of the space is assigened as zeros

    printArray(arr1, sizeof(arr1)/sizeof(arr1[0]));
    printArray(arr2, sizeof(arr2)/sizeof(arr2[0]));

    // No bounding check in c++
    cout << arr1[10] << endl; // will print some random number

    // Printing memory address
    printMemoryAddress(arr1, sizeof(arr1)/sizeof(arr1[0])); // each address is increamentd by an offsetof 4 (size of int)
    
    return 0;
}