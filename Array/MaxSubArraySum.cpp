#include<iostream>
using namespace std;
int main(){

    int arr[6] = {1, 2,44,3, -2, 5};
    int n=6;
    int max_sum=arr[0];
    for(int st=0; st<n; st++){
        int sum=0;                          //initialize sum to 0 for each starting index
        for(int en=st; en<n; en++){
            sum+=arr[en];                 //add the current element to sum for adding the new element to our sum while iterating through the array
            max_sum=max(sum, max_sum);   //update max_sum if the current sum is greater than the previous max_sum
            
        }
    }
    cout<<"Maximum sum of subarray is: "<<max_sum;
    return 0;
}