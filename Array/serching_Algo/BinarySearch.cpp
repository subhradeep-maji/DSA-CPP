#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            st = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
} 

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 9;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
