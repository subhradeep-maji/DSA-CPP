#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> vec = {1, 2, 3, 4, 5}; // HERE WE ARE INITIALIZING THE VECTOR WITH SOME VALUES.


    cout<<"Size of vector: "<<vec.size()<<endl; // HERE WE ARE PRINTING THE SIZE OF THE VECTOR.

    vec.push_back(6); // HERE WE ARE ADDING A NEW ELEMENT TO THE END OF THE VECTOR.
    cout<<"Size of vector after adding an element: "<<vec.size()<<endl; // HERE WE ARE PRINTING THE SIZE OF THE VECTOR AFTER ADDING AN ELEMENT.
    
    
    vec.pop_back(); // HERE WE ARE REMOVING THE LAST ELEMENT FROM THE VECTOR.
    cout<<"Size of vector after removing an element: "<<vec.size()<<endl; // HERE WE ARE PRINTING THE SIZE OF THE VECTOR AFTER REMOVING AN ELEMENT.

    cout<<"the front is: "<<vec.front()<<endl; // HERE WE ARE PRINTING THE FIRST ELEMENT OF THE VECTOR.
    cout<<"the back is: "<<vec.back()<<endl; // HERE WE ARE PRINTING THE LAST ELEMENT OF THE VECTOR.

    cout << "Original vector: ";
    for(int value : vec){       //SYNTAX OF FOR EACH LOOP IN C++17
        cout << value << " ";
    }

    return 0;
}