#include<iostream>
using namespace std;

double calculatearea(double side)
{
	return side * side;
	
}

double calculatearea(double length, double width)
{
	return length * width;
}

int main()
{
	double side, length, width;
	
	cin >> side;
	cin >> length >> width;
	
	cout<<"area of square: " << calculatearea(side) << endl;
	cout<<"area of rectangel: " << calculatearea(length, width);
	
	return 0;
}
