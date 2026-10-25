#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int number;

    while (true)
    {
        cout << "Enter an integer between 5 and 10: ";

        if (!(cin >> number))
        {
            cout << "Invalid input. Please enter an integer.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (number < 5 || number > 10)
        {
            cout << "Invalid number. Please try again.\n";
        }
        else
        {
            break;
        }
    }

    cout << "Your input value (" << number
         << ") has been accepted.\n";

    return 0;
}
