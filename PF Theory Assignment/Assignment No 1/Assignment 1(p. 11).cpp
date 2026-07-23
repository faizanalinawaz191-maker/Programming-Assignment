#include <iostream>
using namespace std;

int main()
{
    double sales;

    cout << "Enter sales: ";
    cin >> sales;

    if (sales > 50000)
    {
        sales = sales + (sales * 0.25) + 250;
    }

    cout << "Total Sales = " << sales;

    return 0;
}
