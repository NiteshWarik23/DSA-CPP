// using array when we want to store multiple values of a similar datatype.
// the entire array is stored in a memory location
// array elements are stored in a cosecutive memory but we can't say where the 0th element can be stored in the CPU.

#include <iostream>
using namespace std;

int main(){
    //the below is an array of size 5. which stores 5 integer values starting from index 0 to 4.
    int arr[5];
    //To take input in the array
    cout << "Enter 5 integer values to store in array" << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << "Value at index 0: " << arr[0] << endl;
    cout << "Value at index 1: " << arr[1] << endl;
    cout << "Value at index 2: " << arr[2] << endl;
    cout << "Value at index 3: " << arr[3] << endl;
    cout << "Value at index 4: " << arr[4] << endl;

    // we can also perform operation on arrays
    arr[3] += 10;
    cout << "Updated Value at index 4: " << arr[3];
    return 0;
}