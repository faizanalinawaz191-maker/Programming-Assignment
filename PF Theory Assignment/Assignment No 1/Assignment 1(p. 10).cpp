#include <iostream>
using namespace std;

int main()
{
    double mass, weight;

    cout << "Enter mass: ";
    cin >> mass;

    weight = mass * 9.8;

    cout << "Weight = " << weight << " Newtons" << endl;

    if (weight > 1000)
        cout << "The object is too heavy.";
    else if (weight < 10)
        cout << "The object is too light.";

    return 0;
}
