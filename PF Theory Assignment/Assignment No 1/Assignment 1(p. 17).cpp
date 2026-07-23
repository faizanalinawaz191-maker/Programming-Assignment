#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "1. Noise Canceling" << endl;
    cout << "2. Wireless" << endl;
    cout << "3. Wired Budget" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Price = $249.00";
    else if (choice == 2)
        cout << "Price = $199.00";
    else if (choice == 3)
        cout << "Price = $49.00";
    else
        cout << "Invalid Choice";

    return 0;
}
