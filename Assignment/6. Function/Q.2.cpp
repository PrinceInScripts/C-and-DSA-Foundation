/*
Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.
*/

#include<iostream>
using namespace std;
int area(int rad);

int circum(int rad);

int main()
{
	int radius;
	cout<<"Enter Radius of Circle : ";
	cin>>radius;
	
	float ar=area(radius);
	cout<<"Area of Circle of Radius " << radius <<" is : "<<ar<<endl;
	
	float cir=circum(radius);
	cout<<"cicumference of Circle of Radius " << radius <<" is : "<<cir<<endl;
	
	return 0;
}

int area(int rad)
{
	return 3.14*rad*rad;
}

int circum(int rad)
{
	return 3.14*2*rad;
}