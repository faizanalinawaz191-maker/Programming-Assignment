#include <iostream>
using namespace std;

int main()
{
    int r1, r2, r3;

    cout << "Enter time of Runner 1: ";
    cin >> r1;

    cout << "Enter time of Runner 2: ";
    cin >> r2;

    cout << "Enter time of Runner 3: ";
    cin >> r3;

    if (r1 <= r2 && r1 <= r3)
    {
        cout << "1st: Runner 1" << endl;

        if (r2 <= r3)
        {
            cout << "2nd: Runner 2" << endl;
            cout << "3rd: Runner 3";
        }
        else
        {
            cout << "2nd: Runner 3" << endl;
            cout << "3rd: Runner 2";
        }
    }
    else if (r2 <= r1 && r2 <= r3)
    {
        cout << "1st: Runner 2" << endl;

        if (r1 <= r3)
        {
            cout << "2nd: Runner 1" << endl;
            cout << "3rd: Runner 3";
        }
        else
        {
            cout << "2nd: Runner 3" << endl;
            cout << "3rd: Runner 1";
        }
    }
    else
    {
        cout << "1st: Runner 3" << endl;

        if (r1 <= r2)
        {
            cout << "2nd: Runner 1" << endl;
            cout << "3rd: Runner 2";
        }
        else
        {
            cout << "2nd: Runner 2" << endl;
            cout << "3rd: Runner 1";
        }
    }

    return 0;
}
