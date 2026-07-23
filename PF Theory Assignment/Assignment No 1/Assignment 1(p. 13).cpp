#include <iostream>
using namespace std;

int main()
{
    int model;

    cout << "Enter TV Model (100, 200, 300): ";
    cin >> model;

    if (model == 300)
        cout << "Features: Picture-in-a-picture, Stereo Sound, Remote Control";
    else if (model == 200)
        cout << "Features: Stereo Sound, Remote Control";
    else if (model == 100)
        cout << "Features: Remote Control";
    else
        cout << "Invalid Model";

    return 0;
}
