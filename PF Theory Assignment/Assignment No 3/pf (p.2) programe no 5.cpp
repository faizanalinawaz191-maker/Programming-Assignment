#include<iostream>
using namespace std;

int countvowels(char word[])
{
	int count=0;
	
	for(int i=0; word[i]!='\0';i++)
	{
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
		{
			count++;
			
		}
		
	}
	return count;
}

int main()
{
	char word[50];
	
	cin>>word;
	
	cout<<"Total Vowels:"<<countvowels(word);

	return 0;
}
