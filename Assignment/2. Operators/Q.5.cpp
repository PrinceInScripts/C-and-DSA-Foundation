//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include<iostream>
using namespace std;
int main()
{
	int num,sum,first,second,third;
	cout<<"Enter 3 digit Number : ";
	cin>>num;
	first=num%10;
	num=num/10;
	
	second=num%10;
	num=num/10;
	
	third=num%10;
	num=num/10;
	
	
	
	sum= first+second+third;
	
	cout<<"Sum of 3 Digit Number is : "<<sum;
}