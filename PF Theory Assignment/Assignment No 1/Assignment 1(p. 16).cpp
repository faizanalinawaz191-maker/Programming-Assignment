#include <iostream>
using namespace std;

int main()
{
    double balance, fees;
    int checks;

    cout << "Enter beginning balance: ";
    cin >> balance;

    cout << "Enter number of checks: ";
    cin >> checks;

    fees = 10;

    if (checks < 20)
        fees += checks * 0.10;
    else if (checks <= 39)
        fees += checks * 0.08;
    else if (checks <= 59)
        fees += checks * 0.06;
    else
        fees += checks * 0.04;

    if (balance < 400)
        fees += 15;

    cout << "Total Service Fees = $" << fees;

    return 0;
}
