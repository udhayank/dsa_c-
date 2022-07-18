#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (a%b > 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;

    cout << "The given array is:" << endl;
    printArray(arr, n);

    for (int i=0; i<gcd(n,d); i++){
        int temp = arr[i];
        int j = i;

        while ((j+d)<n){
            arr[j] = arr[j+d];
            j = j+d;
        }
        arr[j] = temp;
    }

    cout << "The rotated array is:" << endl;
    printArray(arr,n);

    return 0;
}