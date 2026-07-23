#include <iostream>
using namespace std;

int main()
{
    int choice, months;
    double total;

    cout << "1. Standard Adult Membership" << endl;
    cout << "2. Child Membership" << endl;
    cout << "3. Senior Citizen Membership" << endl;
    cout << "4. Quit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 4)
    {
        cout << "Program Ended";
    }
    else
    {
        cout << "Enter number of months: ";
        cin >> months;

        if (choice == 1)
            total = months * 40;
        else if (choice == 2)
            total = months * 20;
        else if (choice == 3)
            total = months * 30;
        else
        {
            cout << "Invalid Choice";
            return 0;
        }

        cout << "Total Amount = Rs. " << total;
    }

    return 0;
}
