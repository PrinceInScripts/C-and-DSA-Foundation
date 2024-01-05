/*Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.
*/

#include<iostream>
using namespace std;

int main()
{
	int SP,CP,profit,loss;
	cout<<"Enter Selling Price : ";
	cin>>SP;
	cout<<"Enter Cost Price : ";
	cin>>CP;
	if(SP>CP)
	{
		profit=SP-CP;
		cout<<"Profit is : "<<profit<<endl;
	}
	else
	{
		loss=CP-SP;
		cout<<"Loss is : "<<loss<<endl;
	}
	
	return 0;
}