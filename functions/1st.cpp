#include<iostream>
using namespace std;
int facto(int n){
    int result=1;
    for(int i=1; i<=n; i++){
        result=result * i;
    }
    return result;

    // RECURSION 
    // if(n==0) return 1;
    // return n*facto(n-1);
}
int Calncr(int n, int r){
    return facto(n)/(facto(r)*facto(n-r));
}
int main(){

    cout << facto(5) << endl;
    cout << Calncr(8, 2) << endl;
    return 0;
}