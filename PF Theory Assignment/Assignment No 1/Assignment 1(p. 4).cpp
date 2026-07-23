#include <iostream>
using namespace std;

int main()
{
    double a = 10;
    double b = 10;

    a = a + 0.2;

    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    if (a > b)
    {
        cout << "a is larger" << endl;
        cout << "b is smaller";
    }
    else
    {
        cout << "b is larger";
    }

    return 0;
}
