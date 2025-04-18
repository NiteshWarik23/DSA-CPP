#include <iostream>
using namespace std;

int main()
{

    cout << "Do While Loop" << endl;
    // Do While Loop
    // The do condition will be executed once even if the while condition does not match.
    int k = 2;
    do
    {
        cout << "Striver Nitesh with Do While Loop " << k << endl;
        k = k + 1;
    } while (k <= 2);
    cout << k << endl;

    return 0;
}