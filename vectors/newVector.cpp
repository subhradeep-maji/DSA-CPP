#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> vec = {1, 2, 3, 4, 5}; // HERE WE ARE INITIALIZING THE VECTOR WITH SOME VALUES.


    vector<int>newvec(5,0);    // HERE THE 1ST PARAMETER IS THE SIZE OF THE VECTOR AND THE 2ND PARAMETER IS THE VALUE WITH WHICH WE WANT TO INITIALIZE THE VECTOR.


    cout << "Original vector: ";

    for(int value : vec){       //SYNTAX OF FOR EACH LOOP IN C++17
        cout << value << " ";
    }

    // for(int i = 0; i < vec.size(); i++){
    //     cout << vec[i] << " ";
    // }   

    return 0;
}