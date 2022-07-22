// Square root decomposition of an array

#include <iostream>
#include <cmath>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

int blockArray(int arr[], int n, int barr[], int b ){
    for (int i=0; i<b; i++){
        for (int j=0; j<b-1; j++){
            barr[i] = barr[i] + arr[i*3+j];
        }
    }
    return 0;
}

// Alternative
// put sum of subarrays of size sqrt(n) into block array
// void preprocess_blocks(vector<int>&arr, vector<int>& block)
// {
//     int len=block.size();
    
//     for(int i=0;i<arr.size();i++)
//     {
//         block[i/len]+=arr[i];
//     }
    
// }

int main() {

    int arr[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int querry[][2] = {{0, 4}, {1, 3}, {2, 4}};

    int n = sizeof(arr)/sizeof(arr[0]);
    int q = sizeof(querry)/sizeof(querry[0]);

    int b = sqrt(n) + 1;
    int barr[b-1] = {0};
    
    blockArray(arr, n, barr, sqrt(n)+1);

    cout << "Block array is:" << endl;
    printArray(barr,sizeof(barr)/4);

    for (int i=0; i<q; i++){
        int l = querry[i][0];
        int r = querry[i][1];
        int sum =0;

        for (int j=l; j<=r;){
            if ((j % (b-1) == 0) && (j+b-1 <= r)){
                sum = sum + barr[j/b];
                j = j+b-1;
            }
            else {
                sum = sum + arr[j];
                j++;
            }
        }
        cout << "The sum of elements of arr[] in range [" << querry[i][0] << "," << querry[i][1] << "] is " << sum << endl; 
    }
    
    return 0;
}