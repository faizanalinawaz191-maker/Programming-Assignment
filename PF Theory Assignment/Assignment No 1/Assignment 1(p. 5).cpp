#include <iostream>
using namespace std;

int main()
{
    double num1, num2;

    cout << "Enter numerator: ";
    cin >> num1;

    cout << "Enter denominator: ";
    cin >> num2;

    if (num2 != 0)
    {
        cout << "Division = " << num1 / num2;
    }
    else
    {
        cout << "Division by zero is not possible.";
    }

    return 0;
}
