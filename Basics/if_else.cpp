#include <iostream>
using namespace std;

// Basic IF-ELSE block syntax

// if(some condition){
        // If the condition matches the code in here will execute
// }else if (some condition){
        // your code
// }else{
        // your code
// }

// Write a program which takes an input of age
// and prints if you are an adult or not
// if <= 18 Print Adult
// else > 18 Print Not an Adult.

int main()
{
    int age;
    cout << "Enter Your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an Adult";
    }
    else
    {
        cout << "You are not an Adult";
    }
    return 0;
}

/*
a school has following rules for grading system
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask the user to enter the marks and print grade accordingly.
*/

int main()
{
    int marks;
    cout << "Enter your marks ";
    cin >> marks;

    // Normal Approach // Here the code will take more time to execute because it will go and execute every if bloc
    if (marks < 25)
    {
        cout << "F";
    }
    if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    if (marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }

    // Second Approach is by using else-if which will only execute if the previous condition did not match and stop.
    // also eleminate the extra condition because if the marks are 35 it's definetly more than 25 so their is no need to check >= 25
    // because after the 1st condition it will go in the second condition.
    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks <= 44)
    {
        cout << "E";
    }
    else if (marks <= 49)
    {
        cout << "D";
    }
    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 100)
    {
        cout << "A";
    }
    return 0;
}

string compareIfElse(int a, int b)
{
    if (a < b)
    {
        cout << a << " is smaller than " << b;
        return "smaller";
    }
    else if (a > b)
    {
        cout << a << " is greater than " << b;
        return "greater";
    }
    else if (a == b)
    {
        cout << a << " is equal to " << b;
        return "equal";
    }
    return "string";
}

int main()
{
    int a, b;
    cout << "Enter First Integer Value ";
    cin >> a;
    cout << endl;
    cout << "Enter Second Integer Value ";
    cin >> b;
    compareIfElse(a, b);
    return 0;
}