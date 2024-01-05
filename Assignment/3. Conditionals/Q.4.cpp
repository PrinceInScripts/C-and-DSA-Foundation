/*Q4- Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.
*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter Value of Number : ";
	cin>>num;
	
	if(num<0)
	{
		cout<<"This number is negative, it is skipped";
	}
	
	return 0;
	
}