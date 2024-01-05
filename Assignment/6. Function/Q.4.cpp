/*
Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers
between them.
*/

#include<iostream>
using namespace std;

void findOdd(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	int a,b;
	cout<<"Enter two Number : ";
	cin>>a>>b;
	cout<<"Odd Number between "<<a<<" and "<<b<<" : ";
	findOdd(a,b);
}

