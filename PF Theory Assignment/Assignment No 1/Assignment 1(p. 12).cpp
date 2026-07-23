#include <iostream>
using namespace std;

int main()
{
    double income;
    int years;

    cout << "Enter annual income: ";
    cin >> income;

    cout << "Enter years at current job: ";
    cin >> years;

    if (income >= 35000 && years > 5)
        cout << "Qualified for Special Loan";
    else
        cout << "Not Qualified";

    return 0;
}
