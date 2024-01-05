/*Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not.
*/

#include<iostream>
using namespace std;

int main()
{
	int length,breath;
	cout<<"Enter Length : ";
	cin>>length;
	cout<<"Enter breath : ";
	cin>>breath;
	if(length==breath)
	{
		cout<<"It is a Square";
	}
	else
	{
		cout<<"It is a Reactangle";
	}
	
	return 0;
}