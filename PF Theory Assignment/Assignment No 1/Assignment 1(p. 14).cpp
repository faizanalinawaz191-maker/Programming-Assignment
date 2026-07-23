#include <iostream>
using namespace std;

int main()
{
    int month, day, year;

    cout << "Enter Month: ";
    cin >> month;

    cout << "Enter Day: ";
    cin >> day;

    cout << "Enter Two-Digit Year: ";
    cin >> year;

    if (month * day == year)
        cout << "MAGIC DATE";
    else
        cout << "NOT MAGIC DATE";

    return 0;
}
