#include <iostream>
using namespace std;

int main()
{   
    //A string character is stored using index
    string s = "Striver";
    //To find out the length / size of the string
    int len = s.size();
    cout << "Length of the String" << endl;
    cout << len << endl;
    cout << "To Print a char from String" << endl;
    s[len - 2] = 'A';
    cout << s[len - 2];
    return 0;
}