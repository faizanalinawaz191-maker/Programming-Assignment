#include <iostream>
using namespace std;

int main()
{
    int package;
    double gb, bill;

    cout << "Enter Package (1-3): ";
    cin >> package;

    cout << "Enter GB Used: ";
    cin >> gb;

    if (package == 1)
    {
        bill = 39.99;
        if (gb > 4)
            bill += (gb - 4) * 10;
    }
    else if (package == 2)
    {
        bill = 59.99;
        if (gb > 8)
            bill += (gb - 8) * 5;
    }
    else if (package == 3)
    {
        bill = 69.99;
    }
    else
    {
        cout << "Invalid Package";
        return 0;
    }

    cout << "Total Bill = $" << bill;

    return 0;
}
