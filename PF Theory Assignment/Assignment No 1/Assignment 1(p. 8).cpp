#include <iostream>
using namespace std;

int main()
{
    int choice;
    double radius, length, width, base, height, area;

    cout << "Geometry Calculator" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter radius: ";
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "Area = " << area;
    }
    else if (choice == 2)
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        area = length * width;
        cout << "Area = " << area;
    }
    else if (choice == 3)
    {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area = " << area;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
