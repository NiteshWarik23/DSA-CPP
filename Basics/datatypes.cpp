#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int // Range -10^9 to 10^9
    int x = 10; // We can store an integer value in x of some range
    // long // Range -10^12 to 10^12
    long z = 10303030;
    cout << "Value of z: " << z;
    // long long // Range -10^18 to 10^18
    long long a = 1223450040;
    cout << "Value of a: " << a;
    // float ,double
    float y = 5.6; // To store values in decimal / without a decimal // You can also store a int value in a float/double datatype
    cout << "Value of y: " << y;

    // string and getline
    // To store string,character,
    // To define a String
    // A String is defined in double quotes
    // string preStr = "Pre defined String";
    cout << endl;
    string str;
    cout << "Enter a Sentence ";
    cin >> str;
    cout << endl;
    cout << "Entered String Value: " << str; // This will only pic the first word from the entered string.Because a string prints untill it gets a space

    // To get the whole string we need to use getline // Remeber it will only print one line and not multiple lines
    cout << "\n";
    string getLinestr;
    cout << "Enter a Sentence to Print the whole sentence";
    getline(cin, getLinestr);
    cout << "Using Getline: " << getLinestr;

    // char
    // char keyword to declare a character.
    // To pre-define a character
    // A character is defined in single quotes.
    char ch;
    cout << "Enter a char / alphabet ";
    cin >> ch;
    cout << "You entered the Character" << ch;

    char preDefined = 'a';
    cout << "This is a predefined Character : " << a ;

    return 0;
}