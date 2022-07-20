// To check if the reverse of all the possible substring including the string itself is present in the string.
// The solution is based on the fact that the above statement is true only when the string is a palindrome.
// So this algorithm checks if the string is a palindrome.

#include <iostream>
using namespace std;

int printString(char str[], int n){ // Not necessary for the soluton
    for (int i=0; i<n; i++){
        cout << str[i];
    }
    cout << endl;   
    return 0;
}

bool isPalindrome(char str[], int n){
    int start = 0;
    int end = n-1;
    while (start < end){
        if (str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){

    char str[] = "ababa";
    cout << "The string is ";
    printString(str, sizeof(str));

    if (isPalindrome(str, sizeof(str)-1)){
        cout << "The string is perfectly reversible" << endl;
    } else {
        cout << "The string is not perfectly reversible" << endl;
    }
    
    return 0;
}