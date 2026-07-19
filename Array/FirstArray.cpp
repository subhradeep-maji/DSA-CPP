#include<iostream>
using namespace std;
int main() {

    int marks[5]={10,2065,5,4650,10};
    int largest=INT_MIN;
    int smallest=INT_MAX;
    int largestIndex=0;
    int smallestIndex=0;
    for(int i=0;i<5;i++){
        if(marks[i]>largest){
            largest=marks[i];
            largestIndex=i;
        }
        if(marks[i]<smallest){
            smallest=marks[i];
            smallestIndex=i;
        }
    }
    cout << "Largest: " << largest << " at index " << largestIndex << endl;
    cout << "Smallest: " << smallest << " at index " << smallestIndex << endl;
    return 0;
}