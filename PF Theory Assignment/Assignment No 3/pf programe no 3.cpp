#include<iostream>
using namespace std;
int power(int base, int exp) 
{
	int result = 1;
	 for(int i=0; i<exp; i++)
	 {
	 	result = result * base;
	 }
	 
	 return result;

}
 
 int main()
 {
 	int b,e;
 	cin >> b >> e;
 	cout<< power(b,e);
 	 
 	 return 0;
 	
 }
