#include<iostream>
using namespace std;
int countevennumbers(int arr[],int size)
{
	int count = 0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]%2 == 0)
		{
			count++;
		}
	}
	return count;
}
int countoddnumbers(int arr[], int size)
{
	int count = 0;
	for(int i = 0; i<size; i++)
	{
		if(arr[i]%2 != 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	cout <<"enter size of array:";
	cin>>n;
	int numbers[100];
	for(int i=0; i<n; i++)
	{
		cout<<"enter value in index" << i <<":";
		cin>>numbers[i];
	}
	int even = countevennumbers(numbers, n);
	int odd = countoddnumbers(numbers, n);
	cout<<"number of even numbers in array:" <<even << endl;
	cout<<"number of odd numbers in array:" << odd << endl;
	return 0;
}
