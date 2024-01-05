//Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include<iostream>
using namespace std;
int main()
{
	int num,sum,first,second,third,forth,fifth;
	cout<<"Enter 5 digit Number : ";
	cin>>num;
	fifth=num%10;
	num=num/10;
	
	forth=num%10;
	num=num/10;
	
	third=num%10;
	num=num/10;
	
	second=num%10;
	num=num/10;
	
	first=num%10;
	num=num/10;
	
	sum= first+forth;
	
	cout<<"Sum of First and Second last Digit is : "<<sum;
}