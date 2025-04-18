#include <iostream>
using namespace std;

// Take a number input from user and print the day accordingly
int main()
{
    int num;
    cout << "Enter a number from 1 to 7: ";
    cin >> num;

    switch (num)
    {
    case 1:
        /* code */
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;

    default:
        cout << "Kindly Enter a valid number";
        break;
    }
    return 0;
}



///**********************************************************Switch Case Problems******************************************** */

#include <iostream>
#include <math.h>
#include <vector>
#include <cmath>
using namespace std;

double areaSwitchCase(int ch, vector<double> a)
{
    // Write your code here
    // A Vector can grow and shrink in size
    double pi = 3.14;
    double areaOfCircle, areaOfRect;

    switch (ch)
    {
    case 1:
        areaOfCircle = pi * pow(a.at(0), 2);
        cout << "Area of Circle" << areaOfCircle;
        break;
    case 2:

        // if (a.size() > 2)
        // {
        //     areaOfRect = a.at(0) * a.at(1);
        //     cout << "Area of Rectangle" << areaOfRect;
        // }
        // else
        // {
        //     for (int i = 0; i < a.size(); ++i)
        //     {
        //         cout << a[i] << " ";
        //     }
        //     cout << "Insufficient values for rectangle." << endl;
        // }
        cout << "Area of Rectangle" << a.at(0) << endl;
        cout << "Area of Rectangle" << a.at(1) << endl;

        areaOfRect = a.at(0) * a.at(1);
        cout << "Area of Rectangle" << areaOfRect;

        break;
    default:
        cout << "Invalid Choice";
    }

    return 0.0;
}

int main()
{
    int ch;
    double input1, input2;
    // vector<double> a;
    cout << "There are 2 choices in the menu:" << endl
         << endl;
    cout << "Choice 1 is to find the area of a circle having radius 'r'." << endl;
    cout << "Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'." << endl;
    cin >> ch;
    cout << endl;
    if (ch == 1)
    {
        cout << "Kindly enter the value for a." << endl;
        cin >> input1;
        vector<double> a(input1);

        a.push_back(input1);
        areaSwitchCase(ch, a);
    }
    else
    {
        cout << "Kindly enter the value for l,b." << endl;
        cin >> input2;
        vector<double> a(input2);

        for (int i = 0; i < input2; ++i)
        {
            cin >> a[i]; // Read each integer and store it in the vector
        }

        cout << "List of integers entered: ";
        for (int num : a)
        {
            cout << num << " "; // Print the list of integers
        }
        // a.push_back(input2);
        areaSwitchCase(ch, a);
    }
    return 0;
}
