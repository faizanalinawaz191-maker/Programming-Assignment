#include<iostream>
using namespace std;
int main()
{
	char a[10] = {'b','r','s','a','k'}; 
	
	char target;
	
	cin >> target;
	
	bool found = false;
	
	for(int i=0; i<5; i++)
	{
		if(a[i] = target)
		{
			found = true;
			
		}
      
	}
	
	if (found)
	cout<<"player is in the team";
	else
	cout<<"player not found";
	
	return 0;
	
}
