#include<iostream>
using namespace std;

double celsiustofahrenheit(double c)
{
	return (c*9/5)+32;
}
int main()
{
	double celsius;
	
	cin>>celsius;
	
	cout<<fixed<<"setprecision(1)";
	cout<<celsiustofahrenheit(celsius);
	
	return 0;
}
