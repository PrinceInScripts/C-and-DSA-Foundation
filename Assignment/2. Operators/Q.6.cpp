//Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter Number num1 : ";
	cin>>num1;
	cout<<"Enter Second num2 : ";
	cin>>num2;
	cout<<"Sum is : "<<num1+num2<<endl;
	cout<<"Substraction is : "<<num1-num2<<endl;
	cout<<"Multiplication is : "<<num1*num2<<endl;
	cout<<"Division is : "<<num1/num2<<endl;
	cout<<"Remainder is : "<<num1%num2<<endl;
	
	return 0;
	
}