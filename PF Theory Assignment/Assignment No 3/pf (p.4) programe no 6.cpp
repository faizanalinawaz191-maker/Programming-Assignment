#include<iostream>
using namespace std;

void reverseword(char word[], int size)
{
	int start = 0;
	int end = size - 1;
	
	while(start < end)
	{
		char temp = word[start];
		word[start] = word[end];
		word[end] = temp;
		
		start++;
		end--;
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
	
	reverseword(word, size);
	
	cout<<"reverse word: " << word;
	
	return 0;
}

