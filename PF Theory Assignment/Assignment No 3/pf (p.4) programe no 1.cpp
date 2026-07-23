#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	
	int arr[50][50];
	int sum = 0;
	 for(int i=0; i<r; i++)
	 {
	 	for(int j=0; j<c; j++)
	 	{
	 		cin>>arr[i][j];
	 		sum=sum+arr[i][j];	 		
		 }
		 	 	
	 }
	 
	 cout<<"sum = " << sum;
	 
	 return 0;
}
