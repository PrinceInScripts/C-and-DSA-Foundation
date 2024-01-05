//Q3 - Write a program to find the sum of n natural numbers.

//Q3 - Write a program to find the sum of n natural numbers.

#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter Value of Number : ";
	cin>>num;
	for(int i=num;i>=1;i--)
	{
		sum+=i;
	}
	cout<<"The sum of Acutal Number of "<<num<<" is "<<sum;
}