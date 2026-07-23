#include <iostream>
using namespace std;

int main()
{
    int seconds;

    cout << "Enter seconds: ";
    cin >> seconds;

    if (seconds >= 86400)
        cout << "Days = " << seconds / 86400 << endl;

    if (seconds >= 3600)
        cout << "Hours = " << seconds / 3600 << endl;

    if (seconds >= 60)
        cout << "Minutes = " << seconds / 60 << endl;

    return 0;
}
