#include<iostream>
using namespace std;

void copyword(char src[], char dest[], int length)
{
	for(int i=0; i<length; i++)
	{
		dest[i] = src[i];
	}
	
	dest[length] = '\0';
	
}
int main()
{
	char original[] = "code";
	char backup[10];
	
	copyword(original, backup, 4);
	
	cout<< backup;
	
	return 0;
}
