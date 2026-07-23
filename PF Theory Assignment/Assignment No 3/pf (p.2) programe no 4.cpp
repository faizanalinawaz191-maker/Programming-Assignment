#include<iostream>
using namespace std;

bool isleapyear(int year)
{
	if((year%400==0) || (year%4==0 && year%100!=0))
	{
		return true;
	}
	return false;
}
int main()
{
	cout<<isleapyear(2024);
	
	return 0;
}
