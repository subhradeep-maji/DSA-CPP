#include<iostream>
using namespace std;


// USING NORMAL INTEGER

// int Dec2Bin(int n){
//     int i = 0, pow = 1;
//     while(n > 0){
//         int rem=n % 2;
//         n = n / 2;
//         i+=(rem*pow);
//         pow=pow*10;
//     }
//     cout<< "Binary representation: " << i;
//     return 1;
// }

// USING ARRRAYS AND BINARY REPRESENTATION

int dec2bin(int n){
    int binary[32]; // Assuming 32 bits for binary representation
    int i = 0;
    while(n > 0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "Binary representation: ";
    for(int j = i - 1; j >= 0; j--){
        cout << binary[j];
    }
    return 1;
}  


int main(){
    // Dec2Bin(5);
    // dec2bin(5);
    for (int i = 0; i < 10; i++) {
        cout << endl;
        dec2bin(i);
    }

    return 0;
}

 