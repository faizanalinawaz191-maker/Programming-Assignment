#include<iostream>
using namespace std;

int findgcd(int a, int b)
{
	while(b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
		
	}
	return a;
	
}
int main()
{
	cout << findgcd(48, 18);
	return 0;
}
