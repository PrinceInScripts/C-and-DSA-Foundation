//Q4 - Write a program to reverse a given integer number.

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Value of Number : ";
	cin>>num;
	
	int rev=0,rem;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	cout<<"Reverse Number is : "<<rev;

    return 0;
}