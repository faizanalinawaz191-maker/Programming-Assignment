#include<iostream>
using namespace std;

int getlength(char arr[])
{
	int length = 0;
	for(int i=0; arr[i] != '\0'; i++)
	{
		length++;
	}
	
	return length;
}

int main()
{
	char name[] = "student";
	 cout<<getlength(name);
	 
	 return 0;
}
