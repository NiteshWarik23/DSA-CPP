#include <iostream>
using namespace std;

int main(){
    //Arrays are used to solve Graphs and matrix problems
    // O based index in arrays
    // 2D Arrays
    // here [3] hold no. of rows and [5] for columns
    int arr[3][5];

    // This will assign/initialize a vlaue at location of arr[1][3]
    arr[1][3] = 45;
    cout << "Value at 1,3 is: "<< endl;
    cout << arr[1][3];

    //The location at which no value is stored, if we try to print them it will return some garbage value.
    cout << "Garbage value at arr[1][1]" << endl;
    cout << arr[1][1];
    return 0;
}