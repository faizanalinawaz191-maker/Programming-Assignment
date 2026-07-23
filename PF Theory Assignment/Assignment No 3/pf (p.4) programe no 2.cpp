#include <iostream>
using namespace std;

int main()
{
	int r,c;
	cin >> r >> c;
	int arr[50][50];
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin >>  arr[i][j];
			
		}
	}
	
	int result = arr[0][0];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(i==0 && j==0)
			{
				continue;
			}
			
			result = result-arr[i][j];
			
		}
	}
	
	cout<<"result = " << result;
	 return 0;
}
