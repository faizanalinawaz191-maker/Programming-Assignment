#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Larger Number = " << num1 << endl;
        cout << "Smaller Number = " << num2;
    }
    else if (num2 > num1)
    {
        cout << "Larger Number = " << num2 << endl;
        cout << "Smaller Number = " << num1;
    }
    else
    {
        cout << "Both numbers are equal.";
    }

    return 0;
}
