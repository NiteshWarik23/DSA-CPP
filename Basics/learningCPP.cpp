#include <iostream> // --> A Library which helps in carrying out input and output operations.
//#include "stdc++.h" // --> in Linus / Unix GCC provides the bits/stdc++.h and now i'm using MSVC so we can use it this by creating a file in thr project itself.
using namespace std; // By adding this line we eleminate the use of 
// In MSVC got Exception for using 

int main(){
    //To print something as an output we need to use cout with std.
    //cout --> to display output 
    cout<< "Without using namespace std" << "\n"; // \n is used to move to the next line.
    cout << "Hey Striver" << endl; // endl is also an alternative to \name

    //cin --> to take input and store it in some memory.
    int x;
    cout << "Enter a value to store in x ";
    cin >> x ;
    cout << "Value stored in x is : " << x ;


    return 0;
}