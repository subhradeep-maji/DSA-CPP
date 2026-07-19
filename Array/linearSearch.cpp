#include<iostream>
using namespace std;

int lenearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    int result = lenearSearch(arr, n, key);
    if(result == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index " << result << endl;
    }
    return 0;
}