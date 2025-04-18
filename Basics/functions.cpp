#include <iostream>
using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readability.
// Functions are used to use same code multiple times.

// Types of functions
//  void -> which does not return anything
//  return
//  parameterised
//  non parameterised

// The below function is parameterised void function
// This also increased the readability of the code
void printName(string name)
{
    cout << "Hey Striver! " << name << endl;
}

int main()
{
    string name;
    cin >> name;
    printName(name);

    // Re-using the function
    string lastname;
    cin >> lastname;
    printName(lastname);

    // Return fuction Example
    // Take two numbers and print it's sum

    return 0;
}
