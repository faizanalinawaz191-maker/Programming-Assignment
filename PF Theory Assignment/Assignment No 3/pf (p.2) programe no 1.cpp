#include<iostream>
using namespace std;

int calculate2low(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	return arr[1];	
}
int calculate2high(int arr[], int size)
{
	return arr[size-2];	
}

int main()
{
	int n;
	
	cout<<"Enter size: ";
	cin>>n;
	int arr[n];
	 for(int i=0; i<n; i++)
	 {
	 	cin>>arr[i]	
	 }
	 
	 cout<<"2nd lowest = " <<calculate2low(arr,n)<<endl;
	 cout<<"2nd highest = " <<calculate2high(arr,n);
	 
	 return 0;	 
}
