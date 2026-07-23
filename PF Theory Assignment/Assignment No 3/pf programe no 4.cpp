#include<iostream>
using namespace std;

double voltage(double c, double r)
{
	return c*r;
}

int main()
{
	double c, r;
	cin >> c >> r;
	
	cout<< voltage(c,r);
	
	return 0;
}
