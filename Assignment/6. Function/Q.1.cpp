/*
Q1 - Write a function to print squares of the first 5 natural numbers.
*/

#include<iostream>
using namespace std;
int square(int num);

int main()
{
	for(int i=1;i<=5;i++)
	{
		cout<<"Sqaure is : "<<i<<" : "<<square(i)<<endl;
	}
	
	return 0;
}

int square(int num)
{
	return num*num;
}