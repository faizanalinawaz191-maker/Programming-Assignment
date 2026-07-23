#include<iostream>
using namespace std;

void printword(char word[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<< word[i] << endl;
		
	}
}
int main()
{
	char word[50];
	cin>>word;
	
	int size = 0;
	
	while(word[size] != '\0')
	{
		size++;
	}
	
	printword(word, size);
	
	return 0;
}
