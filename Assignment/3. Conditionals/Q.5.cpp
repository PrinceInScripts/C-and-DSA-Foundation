//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include<iostream>
using namespace std;

int main()
{
	char op;
	float num1,num2;
	cout<<"Enter Your Opertaion : ";
	cin>>op;
	
	cout<<"\nEnter Your First value : ";
	cin>>num1;
	
	cout<<"\nEnter Your Second value : ";
	cin>>num2;
	
	switch(op)
	{
		case '+':
			cout<<num1<<op<<num2<<"="<<num1+num2;
			break;
		
		case '-':
			cout<<num1<<op<<num2<<"="<<num1-num2;
			break;
		
		case '*':
			cout<<num1<<op<<num2<<"="<<num1*num2;
			break;
		
		case '/':
			cout<<num1<<op<<num2<<"="<<num1/num2;
			break;
		
		default:
			cout<<"Your Operation is invalid";
			break;
	}
	
	return 0;
	
}