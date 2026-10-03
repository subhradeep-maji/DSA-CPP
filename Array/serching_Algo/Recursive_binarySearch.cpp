#include<iostream>
#include<vector>
using namespace std;


int recursiveBinarySearch(vector<int>& arr, int st, int end, int target) {
    if (st > end) {
        return -1; // Target not found
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, mid + 1, end, target); // Search in the right half
    } else {
        return recursiveBinarySearch(arr, st, mid - 1, target); // Search in the left half
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 4;

    int result = recursiveBinarySearch(arr, 0, arr.size() - 1, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}