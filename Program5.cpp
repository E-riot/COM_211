#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int choice;
    double side, length, width, base, height, area;

    while (true)
    {
        cout << "\nPlease select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program\n";
        cout << "\nEnter selection: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1)
        {
            cout << "Enter the side of the square: ";
            if (!(cin >> side) || side < 0)
            {
                cout << "Please enter a valid non-negative number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            area = side * side;
            cout << "Area of the square = " << area << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter the length: ";
            if (!(cin >> length) || length < 0)
            {
                cout << "Please enter a valid non-negative number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Enter the width: ";
            if (!(cin >> width) || width < 0)
            {
                cout << "Please enter a valid non-negative number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            area = length * width;
            cout << "Area of the rectangle = " << area << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter the base: ";
            if (!(cin >> base) || base < 0)
            {
                cout << "Please enter a valid non-negative number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Enter the height: ";
            if (!(cin >> height) || height < 0)
            {
                cout << "Please enter a valid non-negative number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            area = 0.5 * base * height;
            cout << "Area of the triangle = " << area << endl;
        }
        else if (choice == 4)
        {
            cout << "Program has ended.\n";
            break;
        }
        else
        {
            cout << "Your input was: " << choice
                 << " which is an invalid input\n";
            cout << "Please enter a valid input!!!\n";
        }
    }

    return 0;
}
