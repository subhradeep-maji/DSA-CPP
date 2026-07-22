#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1, 2, 44, 3, -2, 5};
    int n = 6;
    int max_sum = arr[0];
    int current_sum = 0;

    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout << "Maximum sum of subarray is: " << max_sum << endl;
    return 0;
}
