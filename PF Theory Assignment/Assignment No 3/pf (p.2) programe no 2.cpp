#include<iostream>
using namespace std;

double calculatesum (int arr[], int size )
{
	double sum=0;
	
	for(int i=0; i<size; i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int n;
	
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<fixed<<"setprecision(2)";
	cout<<"sum = "<<calculatesum(arr,n);
	
	return 0;
	
}
