#include<iostream>
using namespace std;

double calculatestriketrate(int runs,int balls)
{
	return ((double)runs / balls) * 100;
}

int main()
{
	int runs, balls;
	cin>> runs >>balls;
	
	double strikerate = calculatestriketrate(runs, balls);
	
	cout <<"strike rate:" << strikerate;
	
	return 0;
}
