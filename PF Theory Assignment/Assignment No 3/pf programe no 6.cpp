#include<iostream>
using namespace std;
 int main()
 {
 	char word[100];
 	int count = 0;
 	
 	cin >> word;
 	
 	for(int i=0; word[i] != '\0'; i++)
 	{
 		count++ ;
 		
	 }
	 
	 cout << "length of word is: " << count;
	 
	 return 0;
 }
