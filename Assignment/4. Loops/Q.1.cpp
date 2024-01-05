//Q1 - Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"Enter Number : ";
	cin>>num;
	for(int i=num;i>=1;i--)
	{
		fact*=i;
	}
	
	cout<<"Factorial of "<<num<<" Number is : "<<fact;

    return 0;
}