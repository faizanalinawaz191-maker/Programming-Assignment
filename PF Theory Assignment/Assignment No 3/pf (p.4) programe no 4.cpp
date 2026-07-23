#include<iostream>
using namespace std;

double getbowlingaverage(int runsconceded, int wicketstaken)
{
	if(wicketstaken==0)
	{
		return 0.0;
		
	}
	
	return (double)runsconceded / wicketstaken;
	
}
int main()
{
	int runsconceded, wicketstaken;
	
	cin>> runsconceded >> wicketstaken;
	
	cout<<"bowling average: " << getbowlingaverage(runsconceded,wicketstaken);
	
	return 0;
}
