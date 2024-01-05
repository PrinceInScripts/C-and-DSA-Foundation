//Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter Value of a : ";
	cin>>a;
	cout<<"Enter Value of b : ";
	cin>>b;
    cout << ((a == b) ? "The numbers are equal." : "The numbers are not equal.") << endl;
	return 0;
}