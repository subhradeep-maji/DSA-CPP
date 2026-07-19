#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    // char ch='A';

    for(int i=0; i<n; i++){
        // int num=1;

        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        // num++;
        // ch++;
        cout<<endl;
    }

    return 0;
}