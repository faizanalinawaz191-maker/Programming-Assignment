#include<iostream>
using namespace std;

double avg(int a[], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    return sum / n;
}

int main()
{
    int n;
    int a[100];

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << avg(a, n);

    return 0;
}
